
/************************************************************************************
 *    
 *  OTData.h
 *  
 *		Open Transactions:  Library, Protocol, Server, and Test Client
 *    
 *    			-- Anonymous Numbered Accounts
 *    			-- Untraceable Digital Cash
 *    			-- Triple-Signed Receipts
 *    			-- Basket Currencies
 *    			-- Signed XML Contracts
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
 *    	  If you would like to use this software outside of the free software
 *    	  license, please contact FellowTraveler.
 *   
 *        This library is also "dual-license", meaning that Ben Laurie's license
 *        must also be included and respected, since the code for Lucre is also
 *        included with Open Transactions.
 *        The Laurie requirements are light, but if there is any problem with his
 *        license, simply remove the Lucre code. Although there are no other blind
 *        token algorithms in Open Transactions (yet), the other functionality will
 *        continue to operate .
 *    
 *    OpenSSL WAIVER:
 *        This program is released under the AGPL with the additional exemption 
 *    	  that compiling, linking, and/or using OpenSSL is allowed.
 *    
 *    DISCLAIMER:
 *        This program is distributed in the hope that it will be useful,
 *        but WITHOUT ANY WARRANTY; without even the implied warranty of
 *        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *        GNU Affero General Public License for more details.
 *    	
 ************************************************************************************/



#ifndef __OTDATA_H__
#define __OTDATA_H__

extern "C" {
#include <stdint.h>	
}


class OTData
{
	friend class OTASCIIArmor;
	friend class OTIdentifier;
	friend class OTContract;
	friend class OTEnvelope;
	
private:
	void *	m_pData;
	uint32_t m_lPosition;
	uint32_t m_lSize;

protected:
	const void * GetPointer() const;
	void  SetSize(uint32_t lNewSize);

public:
	OTData();
	OTData(const void * pNewData, uint32_t nNewSize);
	OTData(const OTData &theSource);

	virtual ~OTData();

	void Initialize();

	OTData & operator+=(const OTData & rhs);

	OTData & operator=(const OTData &theSource);

	bool operator==(const OTData &s2) const;
	bool operator!=(const OTData &s2) const;
	
	uint32_t  GetSize() const;

   bool IsEmpty() const;
   virtual void Release();
   void Assign(const OTData &theSource);
   void Assign(const void * pNewData, uint32_t lNewSize);
	
	int OTfread(char * buf, int buflen);
	inline void reset() { m_lPosition = 0; };
};



// A simple class used for making sure that dynamically allocated objects
// are deleted once the pointer goes out of scope.
//
// WARNING: This is ONE-USE ONLY! Don't try to re-use instances of this all over the place.
// If you are dynamically allocating some new object you want cleaned up, then make a NEW
// instance of OTCleanup for each one.
//
// For example, if you call SetCleanupTarget() on multiple objects, then only the LAST
// one will get cleaned up, and the others will leak!
//
template <class T>
class OTCleanup
{
protected:
	T * m_pCharge;
	
	
public:
	
	inline bool SetCleanupTarget(const T & theTarget) // Use this as much as you can.
	{ m_pCharge = &((T&)theTarget); return true; }
	
	inline bool SetCleanupTargetPointer(const T * pTarget)	// Use this when you want it to work even if pTarget is NULL.
	{ m_pCharge = (T*)pTarget; return true; }				// (Like, it will accept the NULL pointer, and just be smart 
															// enough NOT to delete it, since it's already NULL.)
	OTCleanup() { m_pCharge = NULL; }
	OTCleanup(const T & theTarget) { SetCleanupTarget(theTarget); }	
	OTCleanup(const T * pTarget) { SetCleanupTargetPointer(pTarget); }	
	
	~OTCleanup() { if (m_pCharge) delete m_pCharge; m_pCharge = NULL; } 
};


#endif // __OTDATA_H
