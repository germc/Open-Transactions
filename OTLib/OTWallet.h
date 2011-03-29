/************************************************************************************
 *    
 *  OTWallet.h
 *  
 *              Open Transactions:  Library, Protocol, Server, and Test Client
 *    
 *                      -- Anonymous Numbered Accounts
 *                      -- Untraceable Digital Cash
 *                      -- Triple-Signed Receipts
 *                      -- Basket Currencies
 *                      -- Signed XML Contracts
 *    
 *    Copyright (C) 2010 by "Fellow Traveler" (A pseudonym)
 *    
 *    EMAIL:
 *    F3llowTraveler@gmail.com --- SEE PGP PUBLIC KEY IN CREDITS FILE.
 *    
 *    KEY FINGERPRINT:
 *    9DD5 90EB 9292 4B48 0484  7910 0308 00ED F951 BB8E
 *    
 *    WEBSITE:
 *    http://www.OpenTransactions.org
 *    
 *    OFFICIAL PROJECT WIKI:
 *    http://wiki.github.com/FellowTraveler/Open-Transactions/
 *    
 *     ----------------------------------------------------------------
 *    
 *    Open Transactions was written including these libraries:
 *    
 *       Lucre          --- Copyright (C) 1999-2009 Ben Laurie.
 *                          http://anoncvs.aldigital.co.uk/lucre/
 *       irrXML         --- Copyright (C) 2002-2005 Nikolaus Gebhardt
 *                          http://irrlicht.sourceforge.net/author.html	
 *       easyzlib       --- Copyright (C) 2008 First Objective Software, Inc.
 *                          Used with permission. http://www.firstobject.com/
 *       PGP to OpenSSL --- Copyright (c) 2010 Mounir IDRASSI 
 *                          Used with permission. http://www.idrix.fr
 *       SFSocket       --- Copyright (C) 2009 Matteo Bertozzi
 *                          Used with permission. http://th30z.netsons.org/
 *    
 *     ----------------------------------------------------------------
 *
 *    Open Transactions links to these libraries:
 *    
 *       OpenSSL        --- (Version 1.0.0a at time of writing.) 
 *                          http://openssl.org/about/
 *       zlib           --- Copyright (C) 1995-2004 Jean-loup Gailly and Mark Adler
 *    
 *     ----------------------------------------------------------------
 *
 *    LICENSE:
 *        This program is free software: you can redistribute it and/or modify
 *        it under the terms of the GNU Affero General Public License as
 *        published by the Free Software Foundation, either version 3 of the
 *        License, or (at your option) any later version.
 *    
 *        You should have received a copy of the GNU Affero General Public License
 *        along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *      
 *        If you would like to use this software outside of the free software
 *        license, please contact FellowTraveler. (Unfortunately many will run
 *        anonymously and untraceably, so who could really stop them?)
 *   
 *        This library is also "dual-license", meaning that Ben Laurie's license
 *        must also be included and respected, since the code for Lucre is also
 *        included with Open Transactions.
 *        The Laurie requirements are light, but if there is any problem with his
 *        license, simply remove the deposit/withdraw commands. Although there are 
 *        no other blind token algorithms in Open Transactions (yet), the other 
 *        functionality will continue to operate.
 *    
 *    OpenSSL WAIVER:
 *        This program is released under the AGPL with the additional exemption 
 *        that compiling, linking, and/or using OpenSSL is allowed.
 *    
 *    DISCLAIMER:
 *        This program is distributed in the hope that it will be useful,
 *        but WITHOUT ANY WARRANTY; without even the implied warranty of
 *        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *        GNU Affero General Public License for more details.
 *      
 ************************************************************************************/

#ifndef __OTWALLET_H__
#define __OTWALLET_H__

#include <map>

#include "OTPseudonym.h"
#include "OTContract.h"
#include "OTAssetContract.h"
#include "OTServerContract.h"
#include "OTAccount.h"


class OTMessage;
class OTPurse;
class OTString;

//typedef std::map<std::string, OTPseudonym *>		mapOfNyms; // in OTContract.h now.
typedef std::map<std::string, OTServerContract *>	mapOfServers;
typedef std::map<std::string, OTAccount *>			mapOfAccounts;

class OTWallet
{
private:
	mapOfNyms		m_mapNyms;
	mapOfContracts	m_mapContracts;
	mapOfServers	m_mapServers;
	mapOfAccounts	m_mapAccounts;

	OTString m_strName;
	OTString m_strVersion;
	
	OTPurse	*	m_pWithdrawalPurse; // While waiting on server response to withdrawal, store private coin data here for unblinding
public:
	OTString m_strFilename;
	
	OTWallet();
	virtual ~OTWallet();
	void Release();
	
	//------------------------------------------------------------

	// Used by high-level wrapper.
	
	int GetNymCount(); 
	int GetServerCount();
	int GetAssetTypeCount(); 
	int GetAccountCount(); 

	bool GetNym			(const int iIndex, OTIdentifier & NYM_ID, OTString & NYM_NAME);
	bool GetServer		(const int iIndex, OTIdentifier & THE_ID, OTString & THE_NAME);
	bool GetAssetType	(const int iIndex, OTIdentifier & THE_ID, OTString & THE_NAME);
	bool GetAccount		(const int iIndex, OTIdentifier & THE_ID, OTString & THE_NAME);
	
	//------------------------------------------------------------
	
	void DisplayStatistics(OTString & strOutput);
	
	OTPseudonym *		GetNymByID(const OTIdentifier & NYM_ID);
	
	void				AddServerContract(const OTServerContract & theContract);
	OTServerContract *	GetServerContract(const OTIdentifier & SERVER_ID);
	
	void				AddNym			(const OTPseudonym & theNym);
	void				AddAccount		(const OTAccount & theAcct);
	
	void				AddAssetContract(const OTAssetContract & theContract);
	OTAssetContract *	GetAssetContract(const OTIdentifier & theContractID);
	
	OTAccount * GetAccount(const OTIdentifier & theAccountID);

	// While waiting on server response to a withdrawal, we keep the private coin
	// data here so we can unblind the response.
	// This information is so important (as important as the digital cash token
	// itself, until the unblinding is done) that we need to save the file right away.
	void AddPendingWithdrawal(const OTPurse & thePurse);
	void RemovePendingWithdrawal();
	inline OTPurse * GetPendingWithdrawal() const { return m_pWithdrawalPurse; }
	
	bool LoadWallet(const char * szFilename);
	bool SaveWallet(const char * szFilename=NULL);
	
	bool SignContractWithFirstNymOnList(OTContract & theContract);
	
	// ----------------------------------------------------
	
	
	// These functions are low-level. They don't check for dependent data before deleting,
	// and they don't save the wallet after they do.
	//
	// (You have to handle that at a higher level.)
	
	bool RemoveAssetContract(const OTIdentifier & theTargetID);
	bool RemoveServerContract(const OTIdentifier & theTargetID);
	
	// higher level version of these two will require a server message, 
	// in addition to removing from wallet. (To delete them on server side.)
	//
	bool RemoveAccount(const OTIdentifier & theTargetID);
	bool RemoveNym(const OTIdentifier & theTargetID);
};

#endif // __OTWALLET_H__


