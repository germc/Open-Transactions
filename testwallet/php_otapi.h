/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.3
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_OTAPI_H
#define PHP_OTAPI_H

extern zend_module_entry otapi_module_entry;
#define phpext_otapi_ptr &otapi_module_entry

#ifdef PHP_WIN32
# define PHP_OTAPI_API __declspec(dllexport)
#else
# define PHP_OTAPI_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(otapi);
PHP_MSHUTDOWN_FUNCTION(otapi);
PHP_RINIT_FUNCTION(otapi);
PHP_RSHUTDOWN_FUNCTION(otapi);
PHP_MINFO_FUNCTION(otapi);

ZEND_NAMED_FUNCTION(_wrap_typeunsafe_set);
ZEND_NAMED_FUNCTION(_wrap_typeunsafe_get);
ZEND_NAMED_FUNCTION(_wrap_new_OTCallback);
ZEND_NAMED_FUNCTION(_wrap_OTCallback_runOne);
ZEND_NAMED_FUNCTION(_wrap_OTCallback_runTwo);
ZEND_NAMED_FUNCTION(_wrap_new_OTCaller);
ZEND_NAMED_FUNCTION(_wrap_OTCaller_GetPassword);
ZEND_NAMED_FUNCTION(_wrap_OTCaller_delCallback);
ZEND_NAMED_FUNCTION(_wrap_OTCaller_setCallback);
ZEND_NAMED_FUNCTION(_wrap_OTCaller_isCallbackSet);
ZEND_NAMED_FUNCTION(_wrap_OTCaller_callOne);
ZEND_NAMED_FUNCTION(_wrap_OTCaller_callTwo);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Set_PasswordCallback);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Init);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadWallet);
ZEND_NAMED_FUNCTION(_wrap_OT_API_SwitchWallet);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetMemlogSize);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetMemlogAtIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_PeekMemlogFront);
ZEND_NAMED_FUNCTION(_wrap_OT_API_PeekMemlogBack);
ZEND_NAMED_FUNCTION(_wrap_OT_API_PopMemlogFront);
ZEND_NAMED_FUNCTION(_wrap_OT_API_PopMemlogBack);
ZEND_NAMED_FUNCTION(_wrap_OT_API_CreateNym);
ZEND_NAMED_FUNCTION(_wrap_OT_API_AddServerContract);
ZEND_NAMED_FUNCTION(_wrap_OT_API_AddAssetContract);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetServerCount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAssetTypeCount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAccountCount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNymCount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetServer_ID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetServer_Name);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAssetType_ID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAssetType_Name);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAccountWallet_ID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAccountWallet_Name);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAccountWallet_Balance);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAccountWallet_Type);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAccountWallet_AssetTypeID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAccountWallet_ServerID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetAccountWallet_NymID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_VerifyAccountReceipt);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_TransactionNumCount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_ID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_Name);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_Stats);
ZEND_NAMED_FUNCTION(_wrap_OT_API_IsNym_RegisteredAtServer);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_MailCount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_MailContentsByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_MailSenderIDByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_MailServerIDByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Nym_RemoveMailByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Nym_VerifyMailByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_OutmailCount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_OutmailContentsByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_OutmailRecipientIDByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GetNym_OutmailServerIDByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Nym_RemoveOutmailByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Nym_VerifyOutmailByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Wallet_CanRemoveServer);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Wallet_RemoveServer);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Wallet_CanRemoveAssetType);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Wallet_RemoveAssetType);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Wallet_CanRemoveNym);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Wallet_RemoveNym);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Wallet_CanRemoveAccount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Wallet_RemoveAccount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Wallet_ImportNym);
ZEND_NAMED_FUNCTION(_wrap_OT_API_SetNym_Name);
ZEND_NAMED_FUNCTION(_wrap_OT_API_SetAccountWallet_Name);
ZEND_NAMED_FUNCTION(_wrap_OT_API_SetAssetType_Name);
ZEND_NAMED_FUNCTION(_wrap_OT_API_SetServer_Name);
ZEND_NAMED_FUNCTION(_wrap_OT_API_VerifyAndRetrieveXMLContents);
ZEND_NAMED_FUNCTION(_wrap_OT_API_WriteCheque);
ZEND_NAMED_FUNCTION(_wrap_OT_API_WritePaymentPlan);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadUserPubkey);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadPubkey);
ZEND_NAMED_FUNCTION(_wrap_OT_API_VerifyUserPrivateKey);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadPurse);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadMint);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadAssetContract);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadServerContract);
ZEND_NAMED_FUNCTION(_wrap_OT_API_IsBasketCurrency);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Basket_GetMemberCount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Basket_GetMemberType);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Basket_GetMinimumTransferAmount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Basket_GetMemberMinimumTransferAmount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadAssetAccount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadInbox);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadOutbox);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Ledger_GetCount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Ledger_CreateResponse);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Ledger_GetTransactionByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Ledger_GetTransactionByID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Ledger_GetTransactionIDByIndex);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Ledger_AddTransaction);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_CreateResponse);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Ledger_FinalizeResponse);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_GetType);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_GetVoucher);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_GetSuccess);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_GetDateSigned);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_GetAmount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Pending_GetNote);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_GetSenderUserID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_GetSenderAcctID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_GetRecipientUserID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_GetRecipientAcctID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Transaction_GetDisplayReferenceToNum);
ZEND_NAMED_FUNCTION(_wrap_OT_API_CreatePurse);
ZEND_NAMED_FUNCTION(_wrap_OT_API_SavePurse);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Purse_GetTotalValue);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Purse_Count);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Purse_Peek);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Purse_Pop);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Purse_Push);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Wallet_ImportPurse);
ZEND_NAMED_FUNCTION(_wrap_OT_API_exchangePurse);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Token_ChangeOwner);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Token_GetID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Token_GetDenomination);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Token_GetSeries);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Token_GetValidFrom);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Token_GetValidTo);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Token_GetAssetID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Token_GetServerID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_checkServerID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_createUserAccount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_checkUser);
ZEND_NAMED_FUNCTION(_wrap_OT_API_sendUserMessage);
ZEND_NAMED_FUNCTION(_wrap_OT_API_getRequest);
ZEND_NAMED_FUNCTION(_wrap_OT_API_getTransactionNumber);
ZEND_NAMED_FUNCTION(_wrap_OT_API_issueAssetType);
ZEND_NAMED_FUNCTION(_wrap_OT_API_getContract);
ZEND_NAMED_FUNCTION(_wrap_OT_API_getMint);
ZEND_NAMED_FUNCTION(_wrap_OT_API_createAssetAccount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_getAccount);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GenerateBasketCreation);
ZEND_NAMED_FUNCTION(_wrap_OT_API_AddBasketCreationItem);
ZEND_NAMED_FUNCTION(_wrap_OT_API_issueBasket);
ZEND_NAMED_FUNCTION(_wrap_OT_API_GenerateBasketExchange);
ZEND_NAMED_FUNCTION(_wrap_OT_API_AddBasketExchangeItem);
ZEND_NAMED_FUNCTION(_wrap_OT_API_exchangeBasket);
ZEND_NAMED_FUNCTION(_wrap_OT_API_notarizeWithdrawal);
ZEND_NAMED_FUNCTION(_wrap_OT_API_notarizeDeposit);
ZEND_NAMED_FUNCTION(_wrap_OT_API_notarizeTransfer);
ZEND_NAMED_FUNCTION(_wrap_OT_API_getInbox);
ZEND_NAMED_FUNCTION(_wrap_OT_API_getOutbox);
ZEND_NAMED_FUNCTION(_wrap_OT_API_getNymbox);
ZEND_NAMED_FUNCTION(_wrap_OT_API_LoadNymbox);
ZEND_NAMED_FUNCTION(_wrap_OT_API_processInbox);
ZEND_NAMED_FUNCTION(_wrap_OT_API_processNymbox);
ZEND_NAMED_FUNCTION(_wrap_OT_API_withdrawVoucher);
ZEND_NAMED_FUNCTION(_wrap_OT_API_depositCheque);
ZEND_NAMED_FUNCTION(_wrap_OT_API_depositPaymentPlan);
ZEND_NAMED_FUNCTION(_wrap_OT_API_issueMarketOffer);
ZEND_NAMED_FUNCTION(_wrap_OT_API_PopMessageBuffer);
ZEND_NAMED_FUNCTION(_wrap_OT_API_FlushMessageBuffer);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Message_GetCommand);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Message_GetSuccess);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Message_GetTransactionSuccess);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Message_GetLedger);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Message_GetNewAssetTypeID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Message_GetNewIssuerAcctID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_Message_GetNewAcctID);
ZEND_NAMED_FUNCTION(_wrap_OT_API_ConnectServer);
ZEND_NAMED_FUNCTION(_wrap_OT_API_ProcessSockets);
ZEND_NAMED_FUNCTION(_wrap_Storable_Create);
ZEND_NAMED_FUNCTION(_wrap_Storage_Init);
ZEND_NAMED_FUNCTION(_wrap_Storage_Exists);
ZEND_NAMED_FUNCTION(_wrap_Storage_StoreString);
ZEND_NAMED_FUNCTION(_wrap_Storage_QueryString);
ZEND_NAMED_FUNCTION(_wrap_Storage_StorePlainString);
ZEND_NAMED_FUNCTION(_wrap_Storage_QueryPlainString);
ZEND_NAMED_FUNCTION(_wrap_Storage_StoreObject);
ZEND_NAMED_FUNCTION(_wrap_Storage_QueryObject);
ZEND_NAMED_FUNCTION(_wrap_Storage_CreateObject);
ZEND_NAMED_FUNCTION(_wrap_Storage_Create);
ZEND_NAMED_FUNCTION(_wrap_Storage_GetType);
ZEND_NAMED_FUNCTION(_wrap_InitDefaultStorage);
ZEND_NAMED_FUNCTION(_wrap_GetDefaultStorage);
ZEND_NAMED_FUNCTION(_wrap_CreateStorageContext);
ZEND_NAMED_FUNCTION(_wrap_CreateObject);
ZEND_NAMED_FUNCTION(_wrap_Exists);
ZEND_NAMED_FUNCTION(_wrap_StoreString);
ZEND_NAMED_FUNCTION(_wrap_QueryString);
ZEND_NAMED_FUNCTION(_wrap_StorePlainString);
ZEND_NAMED_FUNCTION(_wrap_QueryPlainString);
ZEND_NAMED_FUNCTION(_wrap_StoreObject);
ZEND_NAMED_FUNCTION(_wrap_QueryObject);
ZEND_NAMED_FUNCTION(_wrap_StringMap_the_map_set);
ZEND_NAMED_FUNCTION(_wrap_StringMap_the_map_get);
ZEND_NAMED_FUNCTION(_wrap_StringMap_SetValue);
ZEND_NAMED_FUNCTION(_wrap_StringMap_GetValue);
ZEND_NAMED_FUNCTION(_wrap_StringMap_dynamic_cast);
ZEND_NAMED_FUNCTION(_wrap_Displayable_gui_label_set);
ZEND_NAMED_FUNCTION(_wrap_Displayable_gui_label_get);
ZEND_NAMED_FUNCTION(_wrap_Acct_acct_id_set);
ZEND_NAMED_FUNCTION(_wrap_Acct_acct_id_get);
ZEND_NAMED_FUNCTION(_wrap_Acct_server_id_set);
ZEND_NAMED_FUNCTION(_wrap_Acct_server_id_get);
ZEND_NAMED_FUNCTION(_wrap_BitcoinAcct_bitcoin_acct_name_set);
ZEND_NAMED_FUNCTION(_wrap_BitcoinAcct_bitcoin_acct_name_get);
ZEND_NAMED_FUNCTION(_wrap_BitcoinAcct_dynamic_cast);
ZEND_NAMED_FUNCTION(_wrap_ServerInfo_server_id_set);
ZEND_NAMED_FUNCTION(_wrap_ServerInfo_server_id_get);
ZEND_NAMED_FUNCTION(_wrap_ServerInfo_server_type_set);
ZEND_NAMED_FUNCTION(_wrap_ServerInfo_server_type_get);
ZEND_NAMED_FUNCTION(_wrap_ServerInfo_dynamic_cast);
ZEND_NAMED_FUNCTION(_wrap_Server_server_host_set);
ZEND_NAMED_FUNCTION(_wrap_Server_server_host_get);
ZEND_NAMED_FUNCTION(_wrap_Server_server_port_set);
ZEND_NAMED_FUNCTION(_wrap_Server_server_port_get);
ZEND_NAMED_FUNCTION(_wrap_BitcoinServer_bitcoin_username_set);
ZEND_NAMED_FUNCTION(_wrap_BitcoinServer_bitcoin_username_get);
ZEND_NAMED_FUNCTION(_wrap_BitcoinServer_bitcoin_password_set);
ZEND_NAMED_FUNCTION(_wrap_BitcoinServer_bitcoin_password_get);
ZEND_NAMED_FUNCTION(_wrap_BitcoinServer_dynamic_cast);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_nym_type_set);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_nym_type_get);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_nym_id_set);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_nym_id_get);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_public_key_set);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_public_key_get);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_memo_set);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_memo_get);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_GetServerInfoCount);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_GetServerInfo);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_RemoveServerInfo);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_AddServerInfo);
ZEND_NAMED_FUNCTION(_wrap_ContactNym_dynamic_cast);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_server_type_set);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_server_type_get);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_server_id_set);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_server_id_get);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_asset_type_id_set);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_asset_type_id_get);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_acct_id_set);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_acct_id_get);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_nym_id_set);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_nym_id_get);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_memo_set);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_memo_get);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_public_key_set);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_public_key_get);
ZEND_NAMED_FUNCTION(_wrap_ContactAcct_dynamic_cast);
ZEND_NAMED_FUNCTION(_wrap_Contact_contact_id_set);
ZEND_NAMED_FUNCTION(_wrap_Contact_contact_id_get);
ZEND_NAMED_FUNCTION(_wrap_Contact_email_set);
ZEND_NAMED_FUNCTION(_wrap_Contact_email_get);
ZEND_NAMED_FUNCTION(_wrap_Contact_memo_set);
ZEND_NAMED_FUNCTION(_wrap_Contact_memo_get);
ZEND_NAMED_FUNCTION(_wrap_Contact_public_key_set);
ZEND_NAMED_FUNCTION(_wrap_Contact_public_key_get);
ZEND_NAMED_FUNCTION(_wrap_Contact_GetContactNymCount);
ZEND_NAMED_FUNCTION(_wrap_Contact_GetContactNym);
ZEND_NAMED_FUNCTION(_wrap_Contact_RemoveContactNym);
ZEND_NAMED_FUNCTION(_wrap_Contact_AddContactNym);
ZEND_NAMED_FUNCTION(_wrap_Contact_GetContactAcctCount);
ZEND_NAMED_FUNCTION(_wrap_Contact_GetContactAcct);
ZEND_NAMED_FUNCTION(_wrap_Contact_RemoveContactAcct);
ZEND_NAMED_FUNCTION(_wrap_Contact_AddContactAcct);
ZEND_NAMED_FUNCTION(_wrap_Contact_dynamic_cast);
ZEND_NAMED_FUNCTION(_wrap_AddressBook_GetContactCount);
ZEND_NAMED_FUNCTION(_wrap_AddressBook_GetContact);
ZEND_NAMED_FUNCTION(_wrap_AddressBook_RemoveContact);
ZEND_NAMED_FUNCTION(_wrap_AddressBook_AddContact);
ZEND_NAMED_FUNCTION(_wrap_AddressBook_dynamic_cast);
ZEND_NAMED_FUNCTION(_wrap_WalletData_GetBitcoinServerCount);
ZEND_NAMED_FUNCTION(_wrap_WalletData_GetBitcoinServer);
ZEND_NAMED_FUNCTION(_wrap_WalletData_RemoveBitcoinServer);
ZEND_NAMED_FUNCTION(_wrap_WalletData_AddBitcoinServer);
ZEND_NAMED_FUNCTION(_wrap_WalletData_GetBitcoinAcctCount);
ZEND_NAMED_FUNCTION(_wrap_WalletData_GetBitcoinAcct);
ZEND_NAMED_FUNCTION(_wrap_WalletData_RemoveBitcoinAcct);
ZEND_NAMED_FUNCTION(_wrap_WalletData_AddBitcoinAcct);
ZEND_NAMED_FUNCTION(_wrap_WalletData_dynamic_cast);
#endif /* PHP_OTAPI_H */
