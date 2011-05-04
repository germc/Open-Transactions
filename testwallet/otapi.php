<?php

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.3
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

// Try to load our extension if it's not already loaded.
if (!extension_loaded('otapi')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_otapi.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('otapi.so')) return;
    } else {
      if (!dl('otapi.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class otapi {
	static function OT_API_Init($szClientPath) {
		return OT_API_Init($szClientPath);
	}

	static function OT_API_LoadWallet($szPath) {
		return OT_API_LoadWallet($szPath);
	}

	static function OT_API_SwitchWallet($szDataFolderPath,$szWalletFilename) {
		return OT_API_SwitchWallet($szDataFolderPath,$szWalletFilename);
	}

	static function OT_API_GetMemlogSize() {
		return OT_API_GetMemlogSize();
	}

	static function OT_API_GetMemlogAtIndex($nIndex) {
		return OT_API_GetMemlogAtIndex($nIndex);
	}

	static function OT_API_PeekMemlogFront() {
		return OT_API_PeekMemlogFront();
	}

	static function OT_API_PeekMemlogBack() {
		return OT_API_PeekMemlogBack();
	}

	static function OT_API_PopMemlogFront() {
		return OT_API_PopMemlogFront();
	}

	static function OT_API_PopMemlogBack() {
		return OT_API_PopMemlogBack();
	}

	static function OT_API_CreateNym() {
		return OT_API_CreateNym();
	}

	static function OT_API_AddServerContract($szContract) {
		return OT_API_AddServerContract($szContract);
	}

	static function OT_API_AddAssetContract($szContract) {
		return OT_API_AddAssetContract($szContract);
	}

	static function OT_API_GetServerCount() {
		return OT_API_GetServerCount();
	}

	static function OT_API_GetAssetTypeCount() {
		return OT_API_GetAssetTypeCount();
	}

	static function OT_API_GetAccountCount() {
		return OT_API_GetAccountCount();
	}

	static function OT_API_GetNymCount() {
		return OT_API_GetNymCount();
	}

	static function OT_API_GetServer_ID($nIndex) {
		return OT_API_GetServer_ID($nIndex);
	}

	static function OT_API_GetServer_Name($SERVER_ID) {
		return OT_API_GetServer_Name($SERVER_ID);
	}

	static function OT_API_GetAssetType_ID($nIndex) {
		return OT_API_GetAssetType_ID($nIndex);
	}

	static function OT_API_GetAssetType_Name($ASSET_TYPE_ID) {
		return OT_API_GetAssetType_Name($ASSET_TYPE_ID);
	}

	static function OT_API_GetAccountWallet_ID($nIndex) {
		return OT_API_GetAccountWallet_ID($nIndex);
	}

	static function OT_API_GetAccountWallet_Name($ACCOUNT_ID) {
		return OT_API_GetAccountWallet_Name($ACCOUNT_ID);
	}

	static function OT_API_GetAccountWallet_Balance($ACCOUNT_ID) {
		return OT_API_GetAccountWallet_Balance($ACCOUNT_ID);
	}

	static function OT_API_GetAccountWallet_Type($ACCOUNT_ID) {
		return OT_API_GetAccountWallet_Type($ACCOUNT_ID);
	}

	static function OT_API_GetAccountWallet_AssetTypeID($ACCOUNT_ID) {
		return OT_API_GetAccountWallet_AssetTypeID($ACCOUNT_ID);
	}

	static function OT_API_GetAccountWallet_ServerID($ACCOUNT_ID) {
		return OT_API_GetAccountWallet_ServerID($ACCOUNT_ID);
	}

	static function OT_API_GetAccountWallet_NymID($ACCOUNT_ID) {
		return OT_API_GetAccountWallet_NymID($ACCOUNT_ID);
	}

	static function OT_API_VerifyAccountReceipt($SERVER_ID,$NYM_ID,$ACCT_ID) {
		return OT_API_VerifyAccountReceipt($SERVER_ID,$NYM_ID,$ACCT_ID);
	}

	static function OT_API_GetNym_TransactionNumCount($SERVER_ID,$NYM_ID) {
		return OT_API_GetNym_TransactionNumCount($SERVER_ID,$NYM_ID);
	}

	static function OT_API_GetNym_ID($nIndex) {
		return OT_API_GetNym_ID($nIndex);
	}

	static function OT_API_GetNym_Name($NYM_ID) {
		return OT_API_GetNym_Name($NYM_ID);
	}

	static function OT_API_GetNym_Stats($NYM_ID) {
		return OT_API_GetNym_Stats($NYM_ID);
	}

	static function OT_API_IsNym_RegisteredAtServer($NYM_ID,$SERVER_ID) {
		return OT_API_IsNym_RegisteredAtServer($NYM_ID,$SERVER_ID);
	}

	static function OT_API_GetNym_MailCount($NYM_ID) {
		return OT_API_GetNym_MailCount($NYM_ID);
	}

	static function OT_API_GetNym_MailContentsByIndex($NYM_ID,$nIndex) {
		return OT_API_GetNym_MailContentsByIndex($NYM_ID,$nIndex);
	}

	static function OT_API_GetNym_MailSenderIDByIndex($NYM_ID,$nIndex) {
		return OT_API_GetNym_MailSenderIDByIndex($NYM_ID,$nIndex);
	}

	static function OT_API_GetNym_MailServerIDByIndex($NYM_ID,$nIndex) {
		return OT_API_GetNym_MailServerIDByIndex($NYM_ID,$nIndex);
	}

	static function OT_API_Nym_RemoveMailByIndex($NYM_ID,$nIndex) {
		return OT_API_Nym_RemoveMailByIndex($NYM_ID,$nIndex);
	}

	static function OT_API_Nym_VerifyMailByIndex($NYM_ID,$nIndex) {
		return OT_API_Nym_VerifyMailByIndex($NYM_ID,$nIndex);
	}

	static function OT_API_GetNym_OutmailCount($NYM_ID) {
		return OT_API_GetNym_OutmailCount($NYM_ID);
	}

	static function OT_API_GetNym_OutmailContentsByIndex($NYM_ID,$nIndex) {
		return OT_API_GetNym_OutmailContentsByIndex($NYM_ID,$nIndex);
	}

	static function OT_API_GetNym_OutmailRecipientIDByIndex($NYM_ID,$nIndex) {
		return OT_API_GetNym_OutmailRecipientIDByIndex($NYM_ID,$nIndex);
	}

	static function OT_API_GetNym_OutmailServerIDByIndex($NYM_ID,$nIndex) {
		return OT_API_GetNym_OutmailServerIDByIndex($NYM_ID,$nIndex);
	}

	static function OT_API_Nym_RemoveOutmailByIndex($NYM_ID,$nIndex) {
		return OT_API_Nym_RemoveOutmailByIndex($NYM_ID,$nIndex);
	}

	static function OT_API_Nym_VerifyOutmailByIndex($NYM_ID,$nIndex) {
		return OT_API_Nym_VerifyOutmailByIndex($NYM_ID,$nIndex);
	}

	static function OT_API_Wallet_CanRemoveServer($SERVER_ID) {
		return OT_API_Wallet_CanRemoveServer($SERVER_ID);
	}

	static function OT_API_Wallet_RemoveServer($SERVER_ID) {
		return OT_API_Wallet_RemoveServer($SERVER_ID);
	}

	static function OT_API_Wallet_CanRemoveAssetType($ASSET_ID) {
		return OT_API_Wallet_CanRemoveAssetType($ASSET_ID);
	}

	static function OT_API_Wallet_RemoveAssetType($ASSET_ID) {
		return OT_API_Wallet_RemoveAssetType($ASSET_ID);
	}

	static function OT_API_Wallet_CanRemoveNym($NYM_ID) {
		return OT_API_Wallet_CanRemoveNym($NYM_ID);
	}

	static function OT_API_Wallet_RemoveNym($NYM_ID) {
		return OT_API_Wallet_RemoveNym($NYM_ID);
	}

	static function OT_API_Wallet_CanRemoveAccount($ACCOUNT_ID) {
		return OT_API_Wallet_CanRemoveAccount($ACCOUNT_ID);
	}

	static function OT_API_Wallet_RemoveAccount($ACCOUNT_ID) {
		return OT_API_Wallet_RemoveAccount($ACCOUNT_ID);
	}

	static function OT_API_Wallet_ImportNym($DISPLAY_NAME,$KEY_FILE_CONTENTS) {
		return OT_API_Wallet_ImportNym($DISPLAY_NAME,$KEY_FILE_CONTENTS);
	}

	static function OT_API_SetNym_Name($NYM_ID,$SIGNER_NYM_ID,$NYM_NEW_NAME) {
		return OT_API_SetNym_Name($NYM_ID,$SIGNER_NYM_ID,$NYM_NEW_NAME);
	}

	static function OT_API_SetAccountWallet_Name($ACCT_ID,$SIGNER_NYM_ID,$ACCT_NEW_NAME) {
		return OT_API_SetAccountWallet_Name($ACCT_ID,$SIGNER_NYM_ID,$ACCT_NEW_NAME);
	}

	static function OT_API_SetAssetType_Name($ASSET_ID,$STR_NEW_NAME) {
		return OT_API_SetAssetType_Name($ASSET_ID,$STR_NEW_NAME);
	}

	static function OT_API_SetServer_Name($SERVER_ID,$STR_NEW_NAME) {
		return OT_API_SetServer_Name($SERVER_ID,$STR_NEW_NAME);
	}

	static function OT_API_VerifyAndRetrieveXMLContents($THE_CONTRACT,$USER_ID) {
		return OT_API_VerifyAndRetrieveXMLContents($THE_CONTRACT,$USER_ID);
	}

	static function OT_API_WriteCheque($SERVER_ID,$CHEQUE_AMOUNT,$VALID_FROM,$VALID_TO,$SENDER_ACCT_ID,$SENDER_USER_ID,$CHEQUE_MEMO,$RECIPIENT_USER_ID) {
		return OT_API_WriteCheque($SERVER_ID,$CHEQUE_AMOUNT,$VALID_FROM,$VALID_TO,$SENDER_ACCT_ID,$SENDER_USER_ID,$CHEQUE_MEMO,$RECIPIENT_USER_ID);
	}

	static function OT_API_WritePaymentPlan($SERVER_ID,$VALID_FROM,$VALID_TO,$SENDER_ACCT_ID,$SENDER_USER_ID,$PLAN_CONSIDERATION,$RECIPIENT_ACCT_ID,$RECIPIENT_USER_ID,$INITIAL_PAYMENT_AMOUNT,$INITIAL_PAYMENT_DELAY,$PAYMENT_PLAN_AMOUNT,$PAYMENT_PLAN_DELAY,$PAYMENT_PLAN_PERIOD,$PAYMENT_PLAN_LENGTH,$PAYMENT_PLAN_MAX_PAYMENTS) {
		return OT_API_WritePaymentPlan($SERVER_ID,$VALID_FROM,$VALID_TO,$SENDER_ACCT_ID,$SENDER_USER_ID,$PLAN_CONSIDERATION,$RECIPIENT_ACCT_ID,$RECIPIENT_USER_ID,$INITIAL_PAYMENT_AMOUNT,$INITIAL_PAYMENT_DELAY,$PAYMENT_PLAN_AMOUNT,$PAYMENT_PLAN_DELAY,$PAYMENT_PLAN_PERIOD,$PAYMENT_PLAN_LENGTH,$PAYMENT_PLAN_MAX_PAYMENTS);
	}

	static function OT_API_LoadUserPubkey($USER_ID) {
		return OT_API_LoadUserPubkey($USER_ID);
	}

	static function OT_API_LoadPubkey($USER_ID) {
		return OT_API_LoadPubkey($USER_ID);
	}

	static function OT_API_VerifyUserPrivateKey($USER_ID) {
		return OT_API_VerifyUserPrivateKey($USER_ID);
	}

	static function OT_API_LoadPurse($SERVER_ID,$ASSET_TYPE_ID,$USER_ID) {
		return OT_API_LoadPurse($SERVER_ID,$ASSET_TYPE_ID,$USER_ID);
	}

	static function OT_API_LoadMint($SERVER_ID,$ASSET_TYPE_ID) {
		return OT_API_LoadMint($SERVER_ID,$ASSET_TYPE_ID);
	}

	static function OT_API_LoadAssetContract($ASSET_TYPE_ID) {
		return OT_API_LoadAssetContract($ASSET_TYPE_ID);
	}

	static function OT_API_LoadServerContract($SERVER_ID) {
		return OT_API_LoadServerContract($SERVER_ID);
	}

	static function OT_API_IsBasketCurrency($ASSET_TYPE_ID) {
		return OT_API_IsBasketCurrency($ASSET_TYPE_ID);
	}

	static function OT_API_Basket_GetMemberCount($BASKET_ASSET_TYPE_ID) {
		return OT_API_Basket_GetMemberCount($BASKET_ASSET_TYPE_ID);
	}

	static function OT_API_Basket_GetMemberType($BASKET_ASSET_TYPE_ID,$nIndex) {
		return OT_API_Basket_GetMemberType($BASKET_ASSET_TYPE_ID,$nIndex);
	}

	static function OT_API_Basket_GetMinimumTransferAmount($BASKET_ASSET_TYPE_ID) {
		return OT_API_Basket_GetMinimumTransferAmount($BASKET_ASSET_TYPE_ID);
	}

	static function OT_API_Basket_GetMemberMinimumTransferAmount($BASKET_ASSET_TYPE_ID,$nIndex) {
		return OT_API_Basket_GetMemberMinimumTransferAmount($BASKET_ASSET_TYPE_ID,$nIndex);
	}

	static function OT_API_LoadAssetAccount($SERVER_ID,$USER_ID,$ACCOUNT_ID) {
		return OT_API_LoadAssetAccount($SERVER_ID,$USER_ID,$ACCOUNT_ID);
	}

	static function OT_API_LoadInbox($SERVER_ID,$USER_ID,$ACCOUNT_ID) {
		return OT_API_LoadInbox($SERVER_ID,$USER_ID,$ACCOUNT_ID);
	}

	static function OT_API_LoadOutbox($SERVER_ID,$USER_ID,$ACCOUNT_ID) {
		return OT_API_LoadOutbox($SERVER_ID,$USER_ID,$ACCOUNT_ID);
	}

	static function OT_API_Ledger_GetCount($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER) {
		return OT_API_Ledger_GetCount($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER);
	}

	static function OT_API_Ledger_CreateResponse($SERVER_ID,$USER_ID,$ACCOUNT_ID,$ORIGINAL_LEDGER) {
		return OT_API_Ledger_CreateResponse($SERVER_ID,$USER_ID,$ACCOUNT_ID,$ORIGINAL_LEDGER);
	}

	static function OT_API_Ledger_GetTransactionByIndex($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER,$nIndex) {
		return OT_API_Ledger_GetTransactionByIndex($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER,$nIndex);
	}

	static function OT_API_Ledger_GetTransactionByID($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER,$TRANSACTION_NUMBER) {
		return OT_API_Ledger_GetTransactionByID($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER,$TRANSACTION_NUMBER);
	}

	static function OT_API_Ledger_GetTransactionIDByIndex($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER,$nIndex) {
		return OT_API_Ledger_GetTransactionIDByIndex($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER,$nIndex);
	}

	static function OT_API_Ledger_AddTransaction($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER,$THE_TRANSACTION) {
		return OT_API_Ledger_AddTransaction($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER,$THE_TRANSACTION);
	}

	static function OT_API_Transaction_CreateResponse($SERVER_ID,$USER_ID,$ACCOUNT_ID,$RESPONSE_LEDGER,$ORIGINAL_TRANSACTION,$BOOL_DO_I_ACCEPT) {
		return OT_API_Transaction_CreateResponse($SERVER_ID,$USER_ID,$ACCOUNT_ID,$RESPONSE_LEDGER,$ORIGINAL_TRANSACTION,$BOOL_DO_I_ACCEPT);
	}

	static function OT_API_Ledger_FinalizeResponse($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER) {
		return OT_API_Ledger_FinalizeResponse($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_LEDGER);
	}

	static function OT_API_Transaction_GetType($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Transaction_GetType($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_Transaction_GetVoucher($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Transaction_GetVoucher($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_Transaction_GetSuccess($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Transaction_GetSuccess($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_Transaction_GetDateSigned($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Transaction_GetDateSigned($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_Transaction_GetAmount($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Transaction_GetAmount($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_Pending_GetNote($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Pending_GetNote($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_Transaction_GetSenderUserID($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Transaction_GetSenderUserID($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_Transaction_GetSenderAcctID($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Transaction_GetSenderAcctID($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_Transaction_GetRecipientUserID($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Transaction_GetRecipientUserID($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_Transaction_GetRecipientAcctID($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Transaction_GetRecipientAcctID($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_Transaction_GetDisplayReferenceToNum($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION) {
		return OT_API_Transaction_GetDisplayReferenceToNum($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_TRANSACTION);
	}

	static function OT_API_CreatePurse($SERVER_ID,$ASSET_TYPE_ID,$USER_ID) {
		return OT_API_CreatePurse($SERVER_ID,$ASSET_TYPE_ID,$USER_ID);
	}

	static function OT_API_SavePurse($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE) {
		return OT_API_SavePurse($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE);
	}

	static function OT_API_Purse_GetTotalValue($SERVER_ID,$ASSET_TYPE_ID,$THE_PURSE) {
		return OT_API_Purse_GetTotalValue($SERVER_ID,$ASSET_TYPE_ID,$THE_PURSE);
	}

	static function OT_API_Purse_Count($SERVER_ID,$ASSET_TYPE_ID,$THE_PURSE) {
		return OT_API_Purse_Count($SERVER_ID,$ASSET_TYPE_ID,$THE_PURSE);
	}

	static function OT_API_Purse_Peek($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE) {
		return OT_API_Purse_Peek($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE);
	}

	static function OT_API_Purse_Pop($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE) {
		return OT_API_Purse_Pop($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE);
	}

	static function OT_API_Purse_Push($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE,$THE_TOKEN) {
		return OT_API_Purse_Push($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE,$THE_TOKEN);
	}

	static function OT_API_Wallet_ImportPurse($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE) {
		return OT_API_Wallet_ImportPurse($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE);
	}

	static function OT_API_exchangePurse($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE) {
		OT_API_exchangePurse($SERVER_ID,$ASSET_TYPE_ID,$USER_ID,$THE_PURSE);
	}

	static function OT_API_Token_ChangeOwner($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN,$OLD_OWNER_NYM_ID,$NEW_OWNER_NYM_ID) {
		return OT_API_Token_ChangeOwner($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN,$OLD_OWNER_NYM_ID,$NEW_OWNER_NYM_ID);
	}

	static function OT_API_Token_GetID($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN) {
		return OT_API_Token_GetID($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN);
	}

	static function OT_API_Token_GetDenomination($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN) {
		return OT_API_Token_GetDenomination($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN);
	}

	static function OT_API_Token_GetSeries($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN) {
		return OT_API_Token_GetSeries($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN);
	}

	static function OT_API_Token_GetValidFrom($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN) {
		return OT_API_Token_GetValidFrom($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN);
	}

	static function OT_API_Token_GetValidTo($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN) {
		return OT_API_Token_GetValidTo($SERVER_ID,$ASSET_TYPE_ID,$THE_TOKEN);
	}

	static function OT_API_Token_GetAssetID($THE_TOKEN) {
		return OT_API_Token_GetAssetID($THE_TOKEN);
	}

	static function OT_API_Token_GetServerID($THE_TOKEN) {
		return OT_API_Token_GetServerID($THE_TOKEN);
	}

	static function OT_API_checkServerID($SERVER_ID,$USER_ID) {
		OT_API_checkServerID($SERVER_ID,$USER_ID);
	}

	static function OT_API_createUserAccount($SERVER_ID,$USER_ID) {
		OT_API_createUserAccount($SERVER_ID,$USER_ID);
	}

	static function OT_API_checkUser($SERVER_ID,$USER_ID,$USER_ID_CHECK) {
		OT_API_checkUser($SERVER_ID,$USER_ID,$USER_ID_CHECK);
	}

	static function OT_API_sendUserMessage($SERVER_ID,$USER_ID,$USER_ID_RECIPIENT,$RECIPIENT_PUBKEY,$THE_MESSAGE) {
		OT_API_sendUserMessage($SERVER_ID,$USER_ID,$USER_ID_RECIPIENT,$RECIPIENT_PUBKEY,$THE_MESSAGE);
	}

	static function OT_API_getRequest($SERVER_ID,$USER_ID) {
		OT_API_getRequest($SERVER_ID,$USER_ID);
	}

	static function OT_API_getTransactionNumber($SERVER_ID,$USER_ID) {
		OT_API_getTransactionNumber($SERVER_ID,$USER_ID);
	}

	static function OT_API_issueAssetType($SERVER_ID,$USER_ID,$THE_CONTRACT) {
		OT_API_issueAssetType($SERVER_ID,$USER_ID,$THE_CONTRACT);
	}

	static function OT_API_getContract($SERVER_ID,$USER_ID,$ASSET_ID) {
		OT_API_getContract($SERVER_ID,$USER_ID,$ASSET_ID);
	}

	static function OT_API_getMint($SERVER_ID,$USER_ID,$ASSET_ID) {
		OT_API_getMint($SERVER_ID,$USER_ID,$ASSET_ID);
	}

	static function OT_API_createAssetAccount($SERVER_ID,$USER_ID,$ASSET_ID) {
		OT_API_createAssetAccount($SERVER_ID,$USER_ID,$ASSET_ID);
	}

	static function OT_API_getAccount($SERVER_ID,$USER_ID,$ACCT_ID) {
		OT_API_getAccount($SERVER_ID,$USER_ID,$ACCT_ID);
	}

	static function OT_API_GenerateBasketCreation($USER_ID,$MINIMUM_TRANSFER) {
		return OT_API_GenerateBasketCreation($USER_ID,$MINIMUM_TRANSFER);
	}

	static function OT_API_AddBasketCreationItem($USER_ID,$THE_BASKET,$ASSET_TYPE_ID,$MINIMUM_TRANSFER) {
		return OT_API_AddBasketCreationItem($USER_ID,$THE_BASKET,$ASSET_TYPE_ID,$MINIMUM_TRANSFER);
	}

	static function OT_API_issueBasket($SERVER_ID,$USER_ID,$THE_BASKET) {
		OT_API_issueBasket($SERVER_ID,$USER_ID,$THE_BASKET);
	}

	static function OT_API_GenerateBasketExchange($SERVER_ID,$USER_ID,$BASKET_ASSET_TYPE_ID,$BASKET_ASSET_ACCT_ID,$TRANSFER_MULTIPLE) {
		return OT_API_GenerateBasketExchange($SERVER_ID,$USER_ID,$BASKET_ASSET_TYPE_ID,$BASKET_ASSET_ACCT_ID,$TRANSFER_MULTIPLE);
	}

	static function OT_API_AddBasketExchangeItem($SERVER_ID,$USER_ID,$THE_BASKET,$ASSET_TYPE_ID,$ASSET_ACCT_ID) {
		return OT_API_AddBasketExchangeItem($SERVER_ID,$USER_ID,$THE_BASKET,$ASSET_TYPE_ID,$ASSET_ACCT_ID);
	}

	static function OT_API_exchangeBasket($SERVER_ID,$USER_ID,$BASKET_ASSET_ID,$THE_BASKET,$BOOL_EXCHANGE_IN_OR_OUT) {
		OT_API_exchangeBasket($SERVER_ID,$USER_ID,$BASKET_ASSET_ID,$THE_BASKET,$BOOL_EXCHANGE_IN_OR_OUT);
	}

	static function OT_API_notarizeWithdrawal($SERVER_ID,$USER_ID,$ACCT_ID,$AMOUNT) {
		OT_API_notarizeWithdrawal($SERVER_ID,$USER_ID,$ACCT_ID,$AMOUNT);
	}

	static function OT_API_notarizeDeposit($SERVER_ID,$USER_ID,$ACCT_ID,$THE_PURSE) {
		OT_API_notarizeDeposit($SERVER_ID,$USER_ID,$ACCT_ID,$THE_PURSE);
	}

	static function OT_API_notarizeTransfer($SERVER_ID,$USER_ID,$ACCT_FROM,$ACCT_TO,$AMOUNT,$NOTE) {
		OT_API_notarizeTransfer($SERVER_ID,$USER_ID,$ACCT_FROM,$ACCT_TO,$AMOUNT,$NOTE);
	}

	static function OT_API_getInbox($SERVER_ID,$USER_ID,$ACCT_ID) {
		OT_API_getInbox($SERVER_ID,$USER_ID,$ACCT_ID);
	}

	static function OT_API_getOutbox($SERVER_ID,$USER_ID,$ACCT_ID) {
		OT_API_getOutbox($SERVER_ID,$USER_ID,$ACCT_ID);
	}

	static function OT_API_getNymbox($SERVER_ID,$USER_ID) {
		OT_API_getNymbox($SERVER_ID,$USER_ID);
	}

	static function OT_API_LoadNymbox($SERVER_ID,$USER_ID) {
		return OT_API_LoadNymbox($SERVER_ID,$USER_ID);
	}

	static function OT_API_processInbox($SERVER_ID,$USER_ID,$ACCT_ID,$ACCT_LEDGER) {
		OT_API_processInbox($SERVER_ID,$USER_ID,$ACCT_ID,$ACCT_LEDGER);
	}

	static function OT_API_processNymbox($SERVER_ID,$USER_ID,$ACCT_LEDGER) {
		OT_API_processNymbox($SERVER_ID,$USER_ID,$ACCT_LEDGER);
	}

	static function OT_API_withdrawVoucher($SERVER_ID,$USER_ID,$ACCT_ID,$RECIPIENT_USER_ID,$CHEQUE_MEMO,$AMOUNT) {
		OT_API_withdrawVoucher($SERVER_ID,$USER_ID,$ACCT_ID,$RECIPIENT_USER_ID,$CHEQUE_MEMO,$AMOUNT);
	}

	static function OT_API_depositCheque($SERVER_ID,$USER_ID,$ACCT_ID,$THE_CHEQUE) {
		OT_API_depositCheque($SERVER_ID,$USER_ID,$ACCT_ID,$THE_CHEQUE);
	}

	static function OT_API_depositPaymentPlan($SERVER_ID,$USER_ID,$THE_PAYMENT_PLAN) {
		OT_API_depositPaymentPlan($SERVER_ID,$USER_ID,$THE_PAYMENT_PLAN);
	}

	static function OT_API_issueMarketOffer($SERVER_ID,$USER_ID,$ASSET_TYPE_ID,$ASSET_ACCT_ID,$CURRENCY_TYPE_ID,$CURRENCY_ACCT_ID,$MARKET_SCALE,$MINIMUM_INCREMENT,$TOTAL_ASSETS_ON_OFFER,$PRICE_LIMIT,$bBuyingOrSelling) {
		OT_API_issueMarketOffer($SERVER_ID,$USER_ID,$ASSET_TYPE_ID,$ASSET_ACCT_ID,$CURRENCY_TYPE_ID,$CURRENCY_ACCT_ID,$MARKET_SCALE,$MINIMUM_INCREMENT,$TOTAL_ASSETS_ON_OFFER,$PRICE_LIMIT,$bBuyingOrSelling);
	}

	static function OT_API_PopMessageBuffer() {
		return OT_API_PopMessageBuffer();
	}

	static function OT_API_FlushMessageBuffer() {
		OT_API_FlushMessageBuffer();
	}

	static function OT_API_Message_GetCommand($THE_MESSAGE) {
		return OT_API_Message_GetCommand($THE_MESSAGE);
	}

	static function OT_API_Message_GetSuccess($THE_MESSAGE) {
		return OT_API_Message_GetSuccess($THE_MESSAGE);
	}

	static function OT_API_Message_GetTransactionSuccess($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_MESSAGE) {
		return OT_API_Message_GetTransactionSuccess($SERVER_ID,$USER_ID,$ACCOUNT_ID,$THE_MESSAGE);
	}

	static function OT_API_Message_GetLedger($THE_MESSAGE) {
		return OT_API_Message_GetLedger($THE_MESSAGE);
	}

	static function OT_API_Message_GetNewAssetTypeID($THE_MESSAGE) {
		return OT_API_Message_GetNewAssetTypeID($THE_MESSAGE);
	}

	static function OT_API_Message_GetNewIssuerAcctID($THE_MESSAGE) {
		return OT_API_Message_GetNewIssuerAcctID($THE_MESSAGE);
	}

	static function OT_API_Message_GetNewAcctID($THE_MESSAGE) {
		return OT_API_Message_GetNewAcctID($THE_MESSAGE);
	}

	static function OT_API_ConnectServer($SERVER_ID,$USER_ID,$szCA_FILE,$szKEY_FILE,$szKEY_PASSWORD) {
		return OT_API_ConnectServer($SERVER_ID,$USER_ID,$szCA_FILE,$szKEY_FILE,$szKEY_PASSWORD);
	}

	static function OT_API_ProcessSockets() {
		return OT_API_ProcessSockets();
	}

	static function OT_API_Set_PasswordCallback($theCaller) {
		return OT_API_Set_PasswordCallback($theCaller);
	}
}

/* PHP Proxy Classes */
class OTCallback {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_otapi_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_otapi_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_OTCallback') {
			$this->_cPtr=$res;
			return;
		}
		if (get_class($this) === 'OTCallback') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_OTCallback($_this);
	}

	function run1() {
		return OTCallback_run1($this->_cPtr);
	}

	function run2() {
		return OTCallback_run2($this->_cPtr);
	}
}

class OTCaller {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_otapi_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_otapi_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_OTCaller') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_OTCaller();
	}

	function GetPassword() {
		return OTCaller_GetPassword($this->_cPtr);
	}

	function delCallback() {
		OTCaller_delCallback($this->_cPtr);
	}

	function setCallback($cb) {
		OTCaller_setCallback($this->_cPtr,$cb);
	}

	function isCallbackSet() {
		return OTCaller_isCallbackSet($this->_cPtr);
	}

	function call1() {
		OTCaller_call1($this->_cPtr);
	}

	function call2() {
		OTCaller_call2($this->_cPtr);
	}
}


?>
