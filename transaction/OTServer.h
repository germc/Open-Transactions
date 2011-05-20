/************************************************************************************
 *    
 *  OTServer.h
 *  
 */

/************************************************************
 -----BEGIN PGP SIGNED MESSAGE-----
 Hash: SHA256
 
 *                 OPEN TRANSACTIONS
 *
 *       Financial Cryptography and Digital Cash
 *       Library, Protocol, API, Server, and GUI 
 *    
 *    	 -- Anonymous Numbered Accounts.
 *    	 -- Untraceable Digital Cash.
 *    	 -- Triple-Signed Receipts.
 *    	 -- Cheques, Vouchers, Transfers, Inboxes.
 *    	 -- Basket Currencies, Markets, Payment Plans.
 *    	 -- Signed, XML, Ricardian-style Contracts.
 *    
 *  Copyright (C) 2010-2011 by "Fellow Traveler" (A pseudonym)
 *
 *  EMAIL:
 *  FellowTraveler@rayservers.net --- SEE PGP KEY BELOW.
 *  F3llowTraveler@gmail.com --- (not preferred.)
 *  
 *  BITCOIN:  1NtTPVVjDsUfDWybS4BwvHpG2pdS9RnYyQ
 *
 *  KEY FINGERPRINT:
 *  9DD5 90EB 9292 4B48 0484  7910 0308 00ED F951 BB8E
 *
 *  OFFICIAL PROJECT WIKI(s):
 *  http://wiki.github.com/FellowTraveler/Open-Transactions/wiki 
 *  http://wiki.github.com/FellowTraveler/Moneychanger/wiki 
 *
 *  WEBSITE:
 *  http://www.OpenTransactions.org/
 *    
 *  Components and licensing:
 *   -- Moneychanger..A Java client GUI.....LICENSE:.....GPLv3
 *   -- OTLib.........A class library.......LICENSE:...LAGPLv3 
 *   -- OT-API........A client API..........LICENSE:...LAGPLv3
 *   -- testwallet....Command-line client...LICENSE:...LAGPLv3
 *   -- OT-Server.....Server Application....LICENSE:....AGPLv3
 *  Github.com/FellowTraveler/Open-Transactions/wiki/Components
 *
 *  All of the above OT components were designed and written by
 *  Fellow Traveler, with the exception of Moneychanger, which
 *  was contracted out to Vicky C (livewire_3001@yahoo.com).
 *
 *  -----------------------------------------------------
 *
 *   LICENSE:
 *   This program is free software: you can redistribute it
 *   and/or modify it under the terms of the GNU Affero
 *   General Public License as published by the Free Software
 *   Foundation, either version 3 of the License, or (at your
 *   option) any later version.
 *    
 *   ADDITIONAL PERMISSION under the GNU Affero GPL version 3
 *   section 7: (This paragraph applies only to the LAGPLv3
 *   components listed above.) If you modify this Program, or
 *   any covered work, by linking or combining it with other
 *   code, such other code is not for that reason alone subject
 *   to any of the requirements of the GNU Affero GPL version 3.
 *   (==> This means if you are only using the OT-API, then you
 *   don't have to open-source your code--only your changes to
 *   Open Transactions itself must be open source. Similar to
 *   LGPLv3, except it applies to software-as-a-service, not
 *   just to distributing binaries.)
 *
 *   Extra WAIVER for OpenSSL, Lucre, and all other libraries
 *   used by Open Transactions: This program is released under
 *   the AGPL with the additional exemption that compiling,
 *   linking, and/or using OpenSSL is allowed. The same is true
 *   for any other open source libraries included in this
 *   project: complete waiver from the AGPL is hereby granted to
 *   compile, link, and/or use them with Open Transactions,
 *   according to their own terms, as long as the rest of the
 *   Open Transactions terms remain respected, with regard to
 *   the Open Transactions code itself.
 *    
 *   Lucre License:
 *   This code is also "dual-license", meaning that Ben Lau-
 *   rie's license must also be included and respected, since
 *   the code for Lucre is also included with Open Transactions.
 *   See Open-Transactions/OTLib/Lucre/LUCRE_LICENSE.txt
 *   The Laurie requirements are light, but if there is any
 *   problem with his license, simply remove the Lucre code.
 *   Although there are no other blind token algorithms in Open
 *   Transactions (yet. credlib is coming), the other functions
 *   will continue to operate.
 *   -----------------------------------------------------
 *   You should have received a copy of the GNU Affero General
 *   Public License along with this program.  If not, see:
 *   http://www.gnu.org/licenses/
 *
 *   If you would like to use this software outside of the free
 *   software license, please contact FellowTraveler.
 *   (Unfortunately many will run anonymously and untraceably,
 *   so who could really stop them?)
 *   
 *   DISCLAIMER:
 *   This program is distributed in the hope that it will be
 *   useful, but WITHOUT ANY WARRANTY; without even the implied
 *   warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *   PURPOSE.  See the GNU Affero General Public License for
 *   more details.
 
 -----BEGIN PGP SIGNATURE-----
 Version: GnuPG v1.4.10 (Darwin)
 
 iQIcBAEBCAAGBQJNsV9NAAoJEAMIAO35UbuOB3IP/12THBedTYrR2F2hkhYKK+0H
 YlVwRJyFnX3uKjDkYx2fpB2yNaMPPyiQRFpQBpiUxB2wSMHelM+m4YxVegx7h15s
 nD+jMLeVnlhgfKYsVZZiCKT58HXVsuGDc/iycXBBIQYBjCzbeCCG0vyEapR+sCwF
 eGR5l7yGbcMWaVqjPawqSMe/5Ie0wstWMrNAkLlWHRn/ISXb8vMusaxCe9kSeUX8
 7ZSZ0ojy3gLTZnUHFFZ2RaMepVB9jVoMSdVG89mEHX383foTuaxedjI2Wsw6J8YR
 D7PFp6PLGhm1eqArmotCj5NeV9lleULdnvR7T4QwzOZjI65kMwi/e1W6GyvzT3RZ
 RrLaZwiagcyKTXyEX5qSBQfSVNwC761rgNTG0fCBrBmDbQxet4A6Y+ZMxZmE0QXb
 Xch/g4g9Lki0TrSOx0zSAAcpLCIrqdvGX2jcmmJ/Ex4ZhzVhMvtkGfui9bUaY2bU
 bdu1GY0CfmElZ7+wXh2AutkMscRtnu62VSdGjrqry3KJMBWbtxNA9Q+U+NipWnYN
 yisBlQBADkXNtkL3EXEqX6OnjGfHNZ3G1bwuELcZjoOL+K0aQKCojRf8Ii5DW0A3
 niqzq/dwpt45VaQ+uYSG7Sg19FNvADg+WILdFcyszfS8Wks6BsKYzHUc5zbf3SFc
 JaOXLV9Ss58mj57JpNp8
 =VjLJ
 -----END PGP SIGNATURE-----
 **************************************************************/



#ifndef __OTSERVER_H__
#define __OTSERVER_H__

#include <map>

#include "OTString.h"
#include "OTPseudonym.h"
//#include "OTMint.h"
#include "OTAssetContract.h"

#include "OTCron.h"

class OTMessage;
class OTClientConnection;
class OTAccount;
class OTTransaction;
class OTMint;
class OTTrade;
class OTServerContract;

// these correspond--same IDs.
typedef std::multimap<std::string, OTMint *>	mapOfMints;
typedef std::map<std::string, std::string>		mapOfBaskets;
typedef std::map<std::string, OTAccount *>		mapOfAccounts; // server side these are keyed by asset type ID

// Why does the map of mints use multimap instead of map?
// Because there might be multiple valid mints for the same asset type.
// Perhaps I am redeeming tokens from the previous series, which have not yet expired.
// Only tokens from the new series are being issued today, but tokens from the previous
// series are still good until their own expiration date, which is coming up soon.
// Therefore the server manages different mints for the same asset type, and since the asset
// type is the key in the multimap, we don't want to accidentally remove one from the list
// every time another is added. Thus multimap is employed.

class OTServer
{
	bool		m_bShutdownFlag;	// If the server wants to be shut down, it can set this flag so the caller knows to do so.
	
	OTString	m_strVersion;		// Unused currently.
	
	OTString	m_strServerID;		// A hash of the server contract
	OTString	m_strServerUserID;	// A hash of the public key that signed the server contract.
	
	OTServerContract	* m_pServerContract; // This is the server's own contract, containing its public key and connect info.
	
	long		m_lTransactionNumber;	// This stores the last VALID AND ISSUED transaction number.

	
	OTPseudonym m_nymServer; // the Nym for the server, so he can decrypt messages sent to him
							 // by paranoid users :-P  UPDATE: By ALL users. Everything encrypted now by default.
	
	mapOfContracts	m_mapContracts;	// The asset types supported by this server.
	mapOfMints		m_mapMints;		// The mints for each asset type.
	
	mapOfAccounts	m_mapVoucherAccounts; // the voucher accounts (see GetVoucherAccount below for details)
	
	mapOfBaskets	m_mapBaskets;	// this map connects BASKET_ID with BASKET_ACCOUNT_ID (so you can look up the server's
									// basket issuer account ID, which is *different* on each server, using the Basket Currency's
									// ID, which is the *same* on every server.)
	mapOfBaskets	m_mapBasketContracts; // Need a way to look up a Basket Account ID using its Contract ID 
	
	// -------------------------------------------------------------------------------------------------------------
	
	OTCron			m_Cron;		// This is where re-occurring and expiring tasks go. 
	
public:
	OTServer();
	~OTServer();
	
	void ActivateCron();
	
	inline bool IsFlaggedForShutdown() const { return m_bShutdownFlag; }
	
	// ---------------------------------------------------------------------------------

	// Obviously this will only work once the server contract has been loaded from storage.
	bool GetConnectInfo(OTString & strHostname, int & nPort);
	
	// Trade is passed in as reference to make sure it exists.
	// But the trade MUST be heap-allocated, as the market and cron
	// objects will own it and handle cleaning it up.
	// not needed -- erase this function.
//	bool AddTradeToMarket(OTTrade & theTrade);
	
	// ---------------------------------------------------------------------------------
	
	OTMint * GetMint(const OTIdentifier & ASSET_TYPE_ID, int nSeries); // Each asset contract has its own series of Mints
	
	// Whenever the server issues a voucher (like a cashier's cheque), it puts the funds in one
	// of these voucher accounts (one for each asset type ID). Then it issues the cheque from the
	// same account.
	// TODO: also should save the cheque itself to a folder, where the folder is named based on the date 
	// that the cheque will expire.  This way, the server operator can go back later, or have a script,
	// to retrieve the cheques from the expired folders, and total them. The server operator is free to
	// remove that total from the Voucher Account once the cheque has expired: it is his money now.
	OTAccount * GetVoucherAccount(const OTIdentifier & ASSET_TYPE_ID);
	
	// When a user uploads an asset contract, the server adds it to the list (and verifies the user's key against the
	// contract.) This way the server has a directory with all the asset contracts that it supports, saved by their ID.
	// As long as the IDs are in the server file, it can look them up.
	// When a new asset type is added, a new Mint is added as well. It goes into the mints folder.
	bool	AddAssetContract(OTAssetContract & theContract);
	OTAssetContract * GetAssetContract(const OTIdentifier & ASSET_TYPE_ID);
	
	bool AddBasketAccountID(const OTIdentifier & BASKET_ID, const OTIdentifier & BASKET_ACCOUNT_ID,
							const OTIdentifier & BASKET_CONTRACT_ID);
	bool LookupBasketAccountID(const OTIdentifier & BASKET_ID, OTIdentifier & BASKET_ACCOUNT_ID);
	bool VerifyBasketAccountID(const OTIdentifier & BASKET_ACCOUNT_ID);

	bool LookupBasketAccountIDByContractID(const OTIdentifier & BASKET_CONTRACT_ID, OTIdentifier & BASKET_ACCOUNT_ID);
	bool LookupBasketContractIDByAccountID(const OTIdentifier & BASKET_ACCOUNT_ID, OTIdentifier & BASKET_CONTRACT_ID);

	const OTPseudonym & GetServerNym() const;
	
	void Init(); // Loads the main file...
	
	void ProcessCron(); // Call this periodically so Cron has a chance to process Trades, Payment Plans, etc.
	
	bool LoadMainFile(); // Called in Init. Loads transaction number.
	bool SaveMainFile(); // Called in IssueNextTransactionNumber.
	bool SaveMainFileToString(OTString & strMainFile);

	bool ProcessUserCommand(OTMessage & theMessage, OTMessage & msgOut, OTClientConnection * pConnection=NULL);
	bool ValidateServerIDfromUser(OTString & strServerID);
	
	void UserCmdCheckServerID(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdCheckUser(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdSendUserMessage(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdGetRequest(OTPseudonym & theNym, OTMessage & msgIn, OTMessage & msgOut);
	void UserCmdGetTransactionNum(OTPseudonym & theNym, OTMessage & msgIn, OTMessage & msgOut);
	void UserCmdIssueAssetType(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdIssueBasket(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdExchangeBasket(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdCreateAccount(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdNotarizeTransactions(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdGetNymbox(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdGetInbox(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdGetOutbox(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdGetAccount(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdGetContract(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdGetMint(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdProcessInbox(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);
	void UserCmdProcessNymbox(OTPseudonym & theNym, OTMessage & MsgIn, OTMessage & msgOut);

	bool IssueNextTransactionNumber(OTPseudonym & theNym, long &lTransactionNumber, bool bStoreTheNumber=true);
	bool VerifyTransactionNumber(OTPseudonym & theNym, const long &lTransactionNumber);	// Verify a transaction number. passed by reference for speed :P
	bool RemoveTransactionNumber(OTPseudonym & theNym, const long &lTransactionNumber, bool bSave=false);	// A nym has just used a transaction number. Remove it from his file.
	bool RemoveIssuedNumber(OTPseudonym & theNym, const long &lTransactionNumber, bool bSave=false); // a nym has just accepted a receipt. remove his responsibility for that number.

	// If the server receives a notarizeTransactions command, it will be accompanied by a payload
	// containing a ledger to be notarized.  UserCmdNotarizeTransactions will loop through that ledger,
	// and for each transaction within, it calls THIS method.
	void NotarizeTransaction(OTPseudonym & theNym, OTTransaction & tranIn, OTTransaction & tranOut);
	// ---------------------------------------------------------------------------------	
	void NotarizeTransfer(OTPseudonym & theNym, OTAccount & theFromAccount, OTTransaction & tranIn, OTTransaction & tranOut);
	void NotarizeDeposit(OTPseudonym & theNym, OTAccount & theAccount, OTTransaction & tranIn, OTTransaction & tranOut);
	void NotarizeWithdrawal(OTPseudonym & theNym, OTAccount & theAccount, OTTransaction & tranIn, OTTransaction & tranOut);
	void NotarizeProcessInbox(OTPseudonym & theNym, OTAccount & theAccount, OTTransaction & tranIn, OTTransaction & tranOut);	
	void NotarizeProcessNymbox(OTPseudonym & theNym, OTTransaction & tranIn, OTTransaction & tranOut);
	// ---------------------------------------------------------------------------------
	void NotarizeMarketOffer(OTPseudonym & theNym, OTAccount & theAssetAccount, OTTransaction & tranIn, OTTransaction & tranOut);
	void NotarizePaymentPlan(OTPseudonym & theNym, OTAccount & theSourceAccount, OTTransaction & tranIn, OTTransaction & tranOut);
	// ---------------------------------------------------------------------------------
};


#endif // __OTSERVER_H__
