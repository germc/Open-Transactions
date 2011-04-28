/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.31
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


using System;
using System.Runtime.InteropServices;

public class otapi {
  public static int OT_API_Init(string szClientPath) {
    int ret = otapiPINVOKE.OT_API_Init(szClientPath);
    return ret;
  }

  public static int OT_API_LoadWallet(string szPath) {
    int ret = otapiPINVOKE.OT_API_LoadWallet(szPath);
    return ret;
  }

  public static int OT_API_SwitchWallet(string szDataFolderPath, string szWalletFilename) {
    int ret = otapiPINVOKE.OT_API_SwitchWallet(szDataFolderPath, szWalletFilename);
    return ret;
  }

  public static int OT_API_GetMemlogSize() {
    int ret = otapiPINVOKE.OT_API_GetMemlogSize();
    return ret;
  }

  public static string OT_API_GetMemlogAtIndex(int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetMemlogAtIndex(nIndex);
    return ret;
  }

  public static string OT_API_PeekMemlogFront() {
    string ret = otapiPINVOKE.OT_API_PeekMemlogFront();
    return ret;
  }

  public static string OT_API_PeekMemlogBack() {
    string ret = otapiPINVOKE.OT_API_PeekMemlogBack();
    return ret;
  }

  public static int OT_API_PopMemlogFront() {
    int ret = otapiPINVOKE.OT_API_PopMemlogFront();
    return ret;
  }

  public static int OT_API_PopMemlogBack() {
    int ret = otapiPINVOKE.OT_API_PopMemlogBack();
    return ret;
  }

  public static string OT_API_CreateNym() {
    string ret = otapiPINVOKE.OT_API_CreateNym();
    return ret;
  }

  public static int OT_API_AddServerContract(string szContract) {
    int ret = otapiPINVOKE.OT_API_AddServerContract(szContract);
    return ret;
  }

  public static int OT_API_AddAssetContract(string szContract) {
    int ret = otapiPINVOKE.OT_API_AddAssetContract(szContract);
    return ret;
  }

  public static int OT_API_GetServerCount() {
    int ret = otapiPINVOKE.OT_API_GetServerCount();
    return ret;
  }

  public static int OT_API_GetAssetTypeCount() {
    int ret = otapiPINVOKE.OT_API_GetAssetTypeCount();
    return ret;
  }

  public static int OT_API_GetAccountCount() {
    int ret = otapiPINVOKE.OT_API_GetAccountCount();
    return ret;
  }

  public static int OT_API_GetNymCount() {
    int ret = otapiPINVOKE.OT_API_GetNymCount();
    return ret;
  }

  public static string OT_API_GetServer_ID(int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetServer_ID(nIndex);
    return ret;
  }

  public static string OT_API_GetServer_Name(string SERVER_ID) {
    string ret = otapiPINVOKE.OT_API_GetServer_Name(SERVER_ID);
    return ret;
  }

  public static string OT_API_GetAssetType_ID(int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetAssetType_ID(nIndex);
    return ret;
  }

  public static string OT_API_GetAssetType_Name(string ASSET_TYPE_ID) {
    string ret = otapiPINVOKE.OT_API_GetAssetType_Name(ASSET_TYPE_ID);
    return ret;
  }

  public static string OT_API_GetAccountWallet_ID(int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetAccountWallet_ID(nIndex);
    return ret;
  }

  public static string OT_API_GetAccountWallet_Name(string ACCOUNT_ID) {
    string ret = otapiPINVOKE.OT_API_GetAccountWallet_Name(ACCOUNT_ID);
    return ret;
  }

  public static string OT_API_GetAccountWallet_Balance(string ACCOUNT_ID) {
    string ret = otapiPINVOKE.OT_API_GetAccountWallet_Balance(ACCOUNT_ID);
    return ret;
  }

  public static string OT_API_GetAccountWallet_Type(string ACCOUNT_ID) {
    string ret = otapiPINVOKE.OT_API_GetAccountWallet_Type(ACCOUNT_ID);
    return ret;
  }

  public static string OT_API_GetAccountWallet_AssetTypeID(string ACCOUNT_ID) {
    string ret = otapiPINVOKE.OT_API_GetAccountWallet_AssetTypeID(ACCOUNT_ID);
    return ret;
  }

  public static string OT_API_GetAccountWallet_ServerID(string ACCOUNT_ID) {
    string ret = otapiPINVOKE.OT_API_GetAccountWallet_ServerID(ACCOUNT_ID);
    return ret;
  }

  public static string OT_API_GetAccountWallet_NymID(string ACCOUNT_ID) {
    string ret = otapiPINVOKE.OT_API_GetAccountWallet_NymID(ACCOUNT_ID);
    return ret;
  }

  public static int OT_API_VerifyAccountReceipt(string SERVER_ID, string NYM_ID, string ACCT_ID) {
    int ret = otapiPINVOKE.OT_API_VerifyAccountReceipt(SERVER_ID, NYM_ID, ACCT_ID);
    return ret;
  }

  public static int OT_API_GetNym_TransactionNumCount(string SERVER_ID, string NYM_ID) {
    int ret = otapiPINVOKE.OT_API_GetNym_TransactionNumCount(SERVER_ID, NYM_ID);
    return ret;
  }

  public static string OT_API_GetNym_ID(int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetNym_ID(nIndex);
    return ret;
  }

  public static string OT_API_GetNym_Name(string NYM_ID) {
    string ret = otapiPINVOKE.OT_API_GetNym_Name(NYM_ID);
    return ret;
  }

  public static string OT_API_GetNym_Stats(string NYM_ID) {
    string ret = otapiPINVOKE.OT_API_GetNym_Stats(NYM_ID);
    return ret;
  }

  public static int OT_API_IsNym_RegisteredAtServer(string NYM_ID, string SERVER_ID) {
    int ret = otapiPINVOKE.OT_API_IsNym_RegisteredAtServer(NYM_ID, SERVER_ID);
    return ret;
  }

  public static int OT_API_GetNym_MailCount(string NYM_ID) {
    int ret = otapiPINVOKE.OT_API_GetNym_MailCount(NYM_ID);
    return ret;
  }

  public static string OT_API_GetNym_MailContentsByIndex(string NYM_ID, int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetNym_MailContentsByIndex(NYM_ID, nIndex);
    return ret;
  }

  public static string OT_API_GetNym_MailSenderIDByIndex(string NYM_ID, int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetNym_MailSenderIDByIndex(NYM_ID, nIndex);
    return ret;
  }

  public static string OT_API_GetNym_MailServerIDByIndex(string NYM_ID, int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetNym_MailServerIDByIndex(NYM_ID, nIndex);
    return ret;
  }

  public static int OT_API_Nym_RemoveMailByIndex(string NYM_ID, int nIndex) {
    int ret = otapiPINVOKE.OT_API_Nym_RemoveMailByIndex(NYM_ID, nIndex);
    return ret;
  }

  public static int OT_API_Nym_VerifyMailByIndex(string NYM_ID, int nIndex) {
    int ret = otapiPINVOKE.OT_API_Nym_VerifyMailByIndex(NYM_ID, nIndex);
    return ret;
  }

  public static int OT_API_GetNym_OutmailCount(string NYM_ID) {
    int ret = otapiPINVOKE.OT_API_GetNym_OutmailCount(NYM_ID);
    return ret;
  }

  public static string OT_API_GetNym_OutmailContentsByIndex(string NYM_ID, int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetNym_OutmailContentsByIndex(NYM_ID, nIndex);
    return ret;
  }

  public static string OT_API_GetNym_OutmailRecipientIDByIndex(string NYM_ID, int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetNym_OutmailRecipientIDByIndex(NYM_ID, nIndex);
    return ret;
  }

  public static string OT_API_GetNym_OutmailServerIDByIndex(string NYM_ID, int nIndex) {
    string ret = otapiPINVOKE.OT_API_GetNym_OutmailServerIDByIndex(NYM_ID, nIndex);
    return ret;
  }

  public static int OT_API_Nym_RemoveOutmailByIndex(string NYM_ID, int nIndex) {
    int ret = otapiPINVOKE.OT_API_Nym_RemoveOutmailByIndex(NYM_ID, nIndex);
    return ret;
  }

  public static int OT_API_Nym_VerifyOutmailByIndex(string NYM_ID, int nIndex) {
    int ret = otapiPINVOKE.OT_API_Nym_VerifyOutmailByIndex(NYM_ID, nIndex);
    return ret;
  }

  public static int OT_API_Wallet_CanRemoveServer(string SERVER_ID) {
    int ret = otapiPINVOKE.OT_API_Wallet_CanRemoveServer(SERVER_ID);
    return ret;
  }

  public static int OT_API_Wallet_RemoveServer(string SERVER_ID) {
    int ret = otapiPINVOKE.OT_API_Wallet_RemoveServer(SERVER_ID);
    return ret;
  }

  public static int OT_API_Wallet_CanRemoveAssetType(string ASSET_ID) {
    int ret = otapiPINVOKE.OT_API_Wallet_CanRemoveAssetType(ASSET_ID);
    return ret;
  }

  public static int OT_API_Wallet_RemoveAssetType(string ASSET_ID) {
    int ret = otapiPINVOKE.OT_API_Wallet_RemoveAssetType(ASSET_ID);
    return ret;
  }

  public static int OT_API_Wallet_CanRemoveNym(string NYM_ID) {
    int ret = otapiPINVOKE.OT_API_Wallet_CanRemoveNym(NYM_ID);
    return ret;
  }

  public static int OT_API_Wallet_RemoveNym(string NYM_ID) {
    int ret = otapiPINVOKE.OT_API_Wallet_RemoveNym(NYM_ID);
    return ret;
  }

  public static int OT_API_Wallet_CanRemoveAccount(string ACCOUNT_ID) {
    int ret = otapiPINVOKE.OT_API_Wallet_CanRemoveAccount(ACCOUNT_ID);
    return ret;
  }

  public static int OT_API_Wallet_RemoveAccount(string ACCOUNT_ID) {
    int ret = otapiPINVOKE.OT_API_Wallet_RemoveAccount(ACCOUNT_ID);
    return ret;
  }

  public static string OT_API_Wallet_ImportNym(string DISPLAY_NAME, string KEY_FILE_CONTENTS) {
    string ret = otapiPINVOKE.OT_API_Wallet_ImportNym(DISPLAY_NAME, KEY_FILE_CONTENTS);
    return ret;
  }

  public static int OT_API_SetNym_Name(string NYM_ID, string SIGNER_NYM_ID, string NYM_NEW_NAME) {
    int ret = otapiPINVOKE.OT_API_SetNym_Name(NYM_ID, SIGNER_NYM_ID, NYM_NEW_NAME);
    return ret;
  }

  public static int OT_API_SetAccountWallet_Name(string ACCT_ID, string SIGNER_NYM_ID, string ACCT_NEW_NAME) {
    int ret = otapiPINVOKE.OT_API_SetAccountWallet_Name(ACCT_ID, SIGNER_NYM_ID, ACCT_NEW_NAME);
    return ret;
  }

  public static int OT_API_SetAssetType_Name(string ASSET_ID, string STR_NEW_NAME) {
    int ret = otapiPINVOKE.OT_API_SetAssetType_Name(ASSET_ID, STR_NEW_NAME);
    return ret;
  }

  public static int OT_API_SetServer_Name(string SERVER_ID, string STR_NEW_NAME) {
    int ret = otapiPINVOKE.OT_API_SetServer_Name(SERVER_ID, STR_NEW_NAME);
    return ret;
  }

  public static string OT_API_VerifyAndRetrieveXMLContents(string THE_CONTRACT, string USER_ID) {
    string ret = otapiPINVOKE.OT_API_VerifyAndRetrieveXMLContents(THE_CONTRACT, USER_ID);
    return ret;
  }

  public static string OT_API_WriteCheque(string SERVER_ID, string CHEQUE_AMOUNT, string VALID_FROM, string VALID_TO, string SENDER_ACCT_ID, string SENDER_USER_ID, string CHEQUE_MEMO, string RECIPIENT_USER_ID) {
    string ret = otapiPINVOKE.OT_API_WriteCheque(SERVER_ID, CHEQUE_AMOUNT, VALID_FROM, VALID_TO, SENDER_ACCT_ID, SENDER_USER_ID, CHEQUE_MEMO, RECIPIENT_USER_ID);
    return ret;
  }

  public static string OT_API_WritePaymentPlan(string SERVER_ID, string VALID_FROM, string VALID_TO, string SENDER_ACCT_ID, string SENDER_USER_ID, string PLAN_CONSIDERATION, string RECIPIENT_ACCT_ID, string RECIPIENT_USER_ID, string INITIAL_PAYMENT_AMOUNT, string INITIAL_PAYMENT_DELAY, string PAYMENT_PLAN_AMOUNT, string PAYMENT_PLAN_DELAY, string PAYMENT_PLAN_PERIOD, string PAYMENT_PLAN_LENGTH, string PAYMENT_PLAN_MAX_PAYMENTS) {
    string ret = otapiPINVOKE.OT_API_WritePaymentPlan(SERVER_ID, VALID_FROM, VALID_TO, SENDER_ACCT_ID, SENDER_USER_ID, PLAN_CONSIDERATION, RECIPIENT_ACCT_ID, RECIPIENT_USER_ID, INITIAL_PAYMENT_AMOUNT, INITIAL_PAYMENT_DELAY, PAYMENT_PLAN_AMOUNT, PAYMENT_PLAN_DELAY, PAYMENT_PLAN_PERIOD, PAYMENT_PLAN_LENGTH, PAYMENT_PLAN_MAX_PAYMENTS);
    return ret;
  }

  public static string OT_API_LoadUserPubkey(string USER_ID) {
    string ret = otapiPINVOKE.OT_API_LoadUserPubkey(USER_ID);
    return ret;
  }

  public static string OT_API_LoadPubkey(string USER_ID) {
    string ret = otapiPINVOKE.OT_API_LoadPubkey(USER_ID);
    return ret;
  }

  public static int OT_API_VerifyUserPrivateKey(string USER_ID) {
    int ret = otapiPINVOKE.OT_API_VerifyUserPrivateKey(USER_ID);
    return ret;
  }

  public static string OT_API_LoadPurse(string SERVER_ID, string ASSET_TYPE_ID, string USER_ID) {
    string ret = otapiPINVOKE.OT_API_LoadPurse(SERVER_ID, ASSET_TYPE_ID, USER_ID);
    return ret;
  }

  public static string OT_API_LoadMint(string SERVER_ID, string ASSET_TYPE_ID) {
    string ret = otapiPINVOKE.OT_API_LoadMint(SERVER_ID, ASSET_TYPE_ID);
    return ret;
  }

  public static string OT_API_LoadAssetContract(string ASSET_TYPE_ID) {
    string ret = otapiPINVOKE.OT_API_LoadAssetContract(ASSET_TYPE_ID);
    return ret;
  }

  public static string OT_API_LoadServerContract(string SERVER_ID) {
    string ret = otapiPINVOKE.OT_API_LoadServerContract(SERVER_ID);
    return ret;
  }

  public static int OT_API_IsBasketCurrency(string ASSET_TYPE_ID) {
    int ret = otapiPINVOKE.OT_API_IsBasketCurrency(ASSET_TYPE_ID);
    return ret;
  }

  public static int OT_API_Basket_GetMemberCount(string BASKET_ASSET_TYPE_ID) {
    int ret = otapiPINVOKE.OT_API_Basket_GetMemberCount(BASKET_ASSET_TYPE_ID);
    return ret;
  }

  public static string OT_API_Basket_GetMemberType(string BASKET_ASSET_TYPE_ID, int nIndex) {
    string ret = otapiPINVOKE.OT_API_Basket_GetMemberType(BASKET_ASSET_TYPE_ID, nIndex);
    return ret;
  }

  public static string OT_API_Basket_GetMinimumTransferAmount(string BASKET_ASSET_TYPE_ID) {
    string ret = otapiPINVOKE.OT_API_Basket_GetMinimumTransferAmount(BASKET_ASSET_TYPE_ID);
    return ret;
  }

  public static string OT_API_Basket_GetMemberMinimumTransferAmount(string BASKET_ASSET_TYPE_ID, int nIndex) {
    string ret = otapiPINVOKE.OT_API_Basket_GetMemberMinimumTransferAmount(BASKET_ASSET_TYPE_ID, nIndex);
    return ret;
  }

  public static string OT_API_LoadAssetAccount(string SERVER_ID, string USER_ID, string ACCOUNT_ID) {
    string ret = otapiPINVOKE.OT_API_LoadAssetAccount(SERVER_ID, USER_ID, ACCOUNT_ID);
    return ret;
  }

  public static string OT_API_LoadInbox(string SERVER_ID, string USER_ID, string ACCOUNT_ID) {
    string ret = otapiPINVOKE.OT_API_LoadInbox(SERVER_ID, USER_ID, ACCOUNT_ID);
    return ret;
  }

  public static string OT_API_LoadOutbox(string SERVER_ID, string USER_ID, string ACCOUNT_ID) {
    string ret = otapiPINVOKE.OT_API_LoadOutbox(SERVER_ID, USER_ID, ACCOUNT_ID);
    return ret;
  }

  public static int OT_API_Ledger_GetCount(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_LEDGER) {
    int ret = otapiPINVOKE.OT_API_Ledger_GetCount(SERVER_ID, USER_ID, ACCOUNT_ID, THE_LEDGER);
    return ret;
  }

  public static string OT_API_Ledger_CreateResponse(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string ORIGINAL_LEDGER) {
    string ret = otapiPINVOKE.OT_API_Ledger_CreateResponse(SERVER_ID, USER_ID, ACCOUNT_ID, ORIGINAL_LEDGER);
    return ret;
  }

  public static string OT_API_Ledger_GetTransactionByIndex(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_LEDGER, int nIndex) {
    string ret = otapiPINVOKE.OT_API_Ledger_GetTransactionByIndex(SERVER_ID, USER_ID, ACCOUNT_ID, THE_LEDGER, nIndex);
    return ret;
  }

  public static string OT_API_Ledger_GetTransactionByID(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_LEDGER, string TRANSACTION_NUMBER) {
    string ret = otapiPINVOKE.OT_API_Ledger_GetTransactionByID(SERVER_ID, USER_ID, ACCOUNT_ID, THE_LEDGER, TRANSACTION_NUMBER);
    return ret;
  }

  public static string OT_API_Ledger_GetTransactionIDByIndex(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_LEDGER, int nIndex) {
    string ret = otapiPINVOKE.OT_API_Ledger_GetTransactionIDByIndex(SERVER_ID, USER_ID, ACCOUNT_ID, THE_LEDGER, nIndex);
    return ret;
  }

  public static string OT_API_Ledger_AddTransaction(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_LEDGER, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Ledger_AddTransaction(SERVER_ID, USER_ID, ACCOUNT_ID, THE_LEDGER, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_Transaction_CreateResponse(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string RESPONSE_LEDGER, string ORIGINAL_TRANSACTION, int BOOL_DO_I_ACCEPT) {
    string ret = otapiPINVOKE.OT_API_Transaction_CreateResponse(SERVER_ID, USER_ID, ACCOUNT_ID, RESPONSE_LEDGER, ORIGINAL_TRANSACTION, BOOL_DO_I_ACCEPT);
    return ret;
  }

  public static string OT_API_Ledger_FinalizeResponse(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_LEDGER) {
    string ret = otapiPINVOKE.OT_API_Ledger_FinalizeResponse(SERVER_ID, USER_ID, ACCOUNT_ID, THE_LEDGER);
    return ret;
  }

  public static string OT_API_Transaction_GetType(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Transaction_GetType(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_Transaction_GetVoucher(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Transaction_GetVoucher(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static int OT_API_Transaction_GetSuccess(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    int ret = otapiPINVOKE.OT_API_Transaction_GetSuccess(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_Transaction_GetDateSigned(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Transaction_GetDateSigned(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_Transaction_GetAmount(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Transaction_GetAmount(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_Pending_GetNote(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Pending_GetNote(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_Transaction_GetSenderUserID(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Transaction_GetSenderUserID(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_Transaction_GetSenderAcctID(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Transaction_GetSenderAcctID(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_Transaction_GetRecipientUserID(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Transaction_GetRecipientUserID(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_Transaction_GetRecipientAcctID(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Transaction_GetRecipientAcctID(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_Transaction_GetDisplayReferenceToNum(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_TRANSACTION) {
    string ret = otapiPINVOKE.OT_API_Transaction_GetDisplayReferenceToNum(SERVER_ID, USER_ID, ACCOUNT_ID, THE_TRANSACTION);
    return ret;
  }

  public static string OT_API_CreatePurse(string SERVER_ID, string ASSET_TYPE_ID, string USER_ID) {
    string ret = otapiPINVOKE.OT_API_CreatePurse(SERVER_ID, ASSET_TYPE_ID, USER_ID);
    return ret;
  }

  public static int OT_API_SavePurse(string SERVER_ID, string ASSET_TYPE_ID, string USER_ID, string THE_PURSE) {
    int ret = otapiPINVOKE.OT_API_SavePurse(SERVER_ID, ASSET_TYPE_ID, USER_ID, THE_PURSE);
    return ret;
  }

  public static string OT_API_Purse_GetTotalValue(string SERVER_ID, string ASSET_TYPE_ID, string THE_PURSE) {
    string ret = otapiPINVOKE.OT_API_Purse_GetTotalValue(SERVER_ID, ASSET_TYPE_ID, THE_PURSE);
    return ret;
  }

  public static int OT_API_Purse_Count(string SERVER_ID, string ASSET_TYPE_ID, string THE_PURSE) {
    int ret = otapiPINVOKE.OT_API_Purse_Count(SERVER_ID, ASSET_TYPE_ID, THE_PURSE);
    return ret;
  }

  public static string OT_API_Purse_Peek(string SERVER_ID, string ASSET_TYPE_ID, string USER_ID, string THE_PURSE) {
    string ret = otapiPINVOKE.OT_API_Purse_Peek(SERVER_ID, ASSET_TYPE_ID, USER_ID, THE_PURSE);
    return ret;
  }

  public static string OT_API_Purse_Pop(string SERVER_ID, string ASSET_TYPE_ID, string USER_ID, string THE_PURSE) {
    string ret = otapiPINVOKE.OT_API_Purse_Pop(SERVER_ID, ASSET_TYPE_ID, USER_ID, THE_PURSE);
    return ret;
  }

  public static string OT_API_Purse_Push(string SERVER_ID, string ASSET_TYPE_ID, string USER_ID, string THE_PURSE, string THE_TOKEN) {
    string ret = otapiPINVOKE.OT_API_Purse_Push(SERVER_ID, ASSET_TYPE_ID, USER_ID, THE_PURSE, THE_TOKEN);
    return ret;
  }

  public static int OT_API_Wallet_ImportPurse(string SERVER_ID, string ASSET_TYPE_ID, string USER_ID, string THE_PURSE) {
    int ret = otapiPINVOKE.OT_API_Wallet_ImportPurse(SERVER_ID, ASSET_TYPE_ID, USER_ID, THE_PURSE);
    return ret;
  }

  public static void OT_API_exchangePurse(string SERVER_ID, string ASSET_TYPE_ID, string USER_ID, string THE_PURSE) {
    otapiPINVOKE.OT_API_exchangePurse(SERVER_ID, ASSET_TYPE_ID, USER_ID, THE_PURSE);
  }

  public static string OT_API_Token_ChangeOwner(string SERVER_ID, string ASSET_TYPE_ID, string THE_TOKEN, string OLD_OWNER_NYM_ID, string NEW_OWNER_NYM_ID) {
    string ret = otapiPINVOKE.OT_API_Token_ChangeOwner(SERVER_ID, ASSET_TYPE_ID, THE_TOKEN, OLD_OWNER_NYM_ID, NEW_OWNER_NYM_ID);
    return ret;
  }

  public static string OT_API_Token_GetID(string SERVER_ID, string ASSET_TYPE_ID, string THE_TOKEN) {
    string ret = otapiPINVOKE.OT_API_Token_GetID(SERVER_ID, ASSET_TYPE_ID, THE_TOKEN);
    return ret;
  }

  public static string OT_API_Token_GetDenomination(string SERVER_ID, string ASSET_TYPE_ID, string THE_TOKEN) {
    string ret = otapiPINVOKE.OT_API_Token_GetDenomination(SERVER_ID, ASSET_TYPE_ID, THE_TOKEN);
    return ret;
  }

  public static int OT_API_Token_GetSeries(string SERVER_ID, string ASSET_TYPE_ID, string THE_TOKEN) {
    int ret = otapiPINVOKE.OT_API_Token_GetSeries(SERVER_ID, ASSET_TYPE_ID, THE_TOKEN);
    return ret;
  }

  public static string OT_API_Token_GetValidFrom(string SERVER_ID, string ASSET_TYPE_ID, string THE_TOKEN) {
    string ret = otapiPINVOKE.OT_API_Token_GetValidFrom(SERVER_ID, ASSET_TYPE_ID, THE_TOKEN);
    return ret;
  }

  public static string OT_API_Token_GetValidTo(string SERVER_ID, string ASSET_TYPE_ID, string THE_TOKEN) {
    string ret = otapiPINVOKE.OT_API_Token_GetValidTo(SERVER_ID, ASSET_TYPE_ID, THE_TOKEN);
    return ret;
  }

  public static string OT_API_Token_GetAssetID(string THE_TOKEN) {
    string ret = otapiPINVOKE.OT_API_Token_GetAssetID(THE_TOKEN);
    return ret;
  }

  public static string OT_API_Token_GetServerID(string THE_TOKEN) {
    string ret = otapiPINVOKE.OT_API_Token_GetServerID(THE_TOKEN);
    return ret;
  }

  public static void OT_API_checkServerID(string SERVER_ID, string USER_ID) {
    otapiPINVOKE.OT_API_checkServerID(SERVER_ID, USER_ID);
  }

  public static void OT_API_createUserAccount(string SERVER_ID, string USER_ID) {
    otapiPINVOKE.OT_API_createUserAccount(SERVER_ID, USER_ID);
  }

  public static void OT_API_checkUser(string SERVER_ID, string USER_ID, string USER_ID_CHECK) {
    otapiPINVOKE.OT_API_checkUser(SERVER_ID, USER_ID, USER_ID_CHECK);
  }

  public static void OT_API_sendUserMessage(string SERVER_ID, string USER_ID, string USER_ID_RECIPIENT, string RECIPIENT_PUBKEY, string THE_MESSAGE) {
    otapiPINVOKE.OT_API_sendUserMessage(SERVER_ID, USER_ID, USER_ID_RECIPIENT, RECIPIENT_PUBKEY, THE_MESSAGE);
  }

  public static void OT_API_getRequest(string SERVER_ID, string USER_ID) {
    otapiPINVOKE.OT_API_getRequest(SERVER_ID, USER_ID);
  }

  public static void OT_API_getTransactionNumber(string SERVER_ID, string USER_ID) {
    otapiPINVOKE.OT_API_getTransactionNumber(SERVER_ID, USER_ID);
  }

  public static void OT_API_issueAssetType(string SERVER_ID, string USER_ID, string THE_CONTRACT) {
    otapiPINVOKE.OT_API_issueAssetType(SERVER_ID, USER_ID, THE_CONTRACT);
  }

  public static void OT_API_getContract(string SERVER_ID, string USER_ID, string ASSET_ID) {
    otapiPINVOKE.OT_API_getContract(SERVER_ID, USER_ID, ASSET_ID);
  }

  public static void OT_API_getMint(string SERVER_ID, string USER_ID, string ASSET_ID) {
    otapiPINVOKE.OT_API_getMint(SERVER_ID, USER_ID, ASSET_ID);
  }

  public static void OT_API_createAssetAccount(string SERVER_ID, string USER_ID, string ASSET_ID) {
    otapiPINVOKE.OT_API_createAssetAccount(SERVER_ID, USER_ID, ASSET_ID);
  }

  public static void OT_API_getAccount(string SERVER_ID, string USER_ID, string ACCT_ID) {
    otapiPINVOKE.OT_API_getAccount(SERVER_ID, USER_ID, ACCT_ID);
  }

  public static string OT_API_GenerateBasketCreation(string USER_ID, string MINIMUM_TRANSFER) {
    string ret = otapiPINVOKE.OT_API_GenerateBasketCreation(USER_ID, MINIMUM_TRANSFER);
    return ret;
  }

  public static string OT_API_AddBasketCreationItem(string USER_ID, string THE_BASKET, string ASSET_TYPE_ID, string MINIMUM_TRANSFER) {
    string ret = otapiPINVOKE.OT_API_AddBasketCreationItem(USER_ID, THE_BASKET, ASSET_TYPE_ID, MINIMUM_TRANSFER);
    return ret;
  }

  public static void OT_API_issueBasket(string SERVER_ID, string USER_ID, string THE_BASKET) {
    otapiPINVOKE.OT_API_issueBasket(SERVER_ID, USER_ID, THE_BASKET);
  }

  public static string OT_API_GenerateBasketExchange(string SERVER_ID, string USER_ID, string BASKET_ASSET_TYPE_ID, string BASKET_ASSET_ACCT_ID, int TRANSFER_MULTIPLE) {
    string ret = otapiPINVOKE.OT_API_GenerateBasketExchange(SERVER_ID, USER_ID, BASKET_ASSET_TYPE_ID, BASKET_ASSET_ACCT_ID, TRANSFER_MULTIPLE);
    return ret;
  }

  public static string OT_API_AddBasketExchangeItem(string SERVER_ID, string USER_ID, string THE_BASKET, string ASSET_TYPE_ID, string ASSET_ACCT_ID) {
    string ret = otapiPINVOKE.OT_API_AddBasketExchangeItem(SERVER_ID, USER_ID, THE_BASKET, ASSET_TYPE_ID, ASSET_ACCT_ID);
    return ret;
  }

  public static void OT_API_exchangeBasket(string SERVER_ID, string USER_ID, string BASKET_ASSET_ID, string THE_BASKET, int BOOL_EXCHANGE_IN_OR_OUT) {
    otapiPINVOKE.OT_API_exchangeBasket(SERVER_ID, USER_ID, BASKET_ASSET_ID, THE_BASKET, BOOL_EXCHANGE_IN_OR_OUT);
  }

  public static void OT_API_notarizeWithdrawal(string SERVER_ID, string USER_ID, string ACCT_ID, string AMOUNT) {
    otapiPINVOKE.OT_API_notarizeWithdrawal(SERVER_ID, USER_ID, ACCT_ID, AMOUNT);
  }

  public static void OT_API_notarizeDeposit(string SERVER_ID, string USER_ID, string ACCT_ID, string THE_PURSE) {
    otapiPINVOKE.OT_API_notarizeDeposit(SERVER_ID, USER_ID, ACCT_ID, THE_PURSE);
  }

  public static void OT_API_notarizeTransfer(string SERVER_ID, string USER_ID, string ACCT_FROM, string ACCT_TO, string AMOUNT, string NOTE) {
    otapiPINVOKE.OT_API_notarizeTransfer(SERVER_ID, USER_ID, ACCT_FROM, ACCT_TO, AMOUNT, NOTE);
  }

  public static void OT_API_getInbox(string SERVER_ID, string USER_ID, string ACCT_ID) {
    otapiPINVOKE.OT_API_getInbox(SERVER_ID, USER_ID, ACCT_ID);
  }

  public static void OT_API_getOutbox(string SERVER_ID, string USER_ID, string ACCT_ID) {
    otapiPINVOKE.OT_API_getOutbox(SERVER_ID, USER_ID, ACCT_ID);
  }

  public static void OT_API_getNymbox(string SERVER_ID, string USER_ID) {
    otapiPINVOKE.OT_API_getNymbox(SERVER_ID, USER_ID);
  }

  public static string OT_API_LoadNymbox(string SERVER_ID, string USER_ID) {
    string ret = otapiPINVOKE.OT_API_LoadNymbox(SERVER_ID, USER_ID);
    return ret;
  }

  public static void OT_API_processInbox(string SERVER_ID, string USER_ID, string ACCT_ID, string ACCT_LEDGER) {
    otapiPINVOKE.OT_API_processInbox(SERVER_ID, USER_ID, ACCT_ID, ACCT_LEDGER);
  }

  public static void OT_API_processNymbox(string SERVER_ID, string USER_ID, string ACCT_LEDGER) {
    otapiPINVOKE.OT_API_processNymbox(SERVER_ID, USER_ID, ACCT_LEDGER);
  }

  public static void OT_API_withdrawVoucher(string SERVER_ID, string USER_ID, string ACCT_ID, string RECIPIENT_USER_ID, string CHEQUE_MEMO, string AMOUNT) {
    otapiPINVOKE.OT_API_withdrawVoucher(SERVER_ID, USER_ID, ACCT_ID, RECIPIENT_USER_ID, CHEQUE_MEMO, AMOUNT);
  }

  public static void OT_API_depositCheque(string SERVER_ID, string USER_ID, string ACCT_ID, string THE_CHEQUE) {
    otapiPINVOKE.OT_API_depositCheque(SERVER_ID, USER_ID, ACCT_ID, THE_CHEQUE);
  }

  public static void OT_API_depositPaymentPlan(string SERVER_ID, string USER_ID, string THE_PAYMENT_PLAN) {
    otapiPINVOKE.OT_API_depositPaymentPlan(SERVER_ID, USER_ID, THE_PAYMENT_PLAN);
  }

  public static void OT_API_issueMarketOffer(string SERVER_ID, string USER_ID, string ASSET_TYPE_ID, string ASSET_ACCT_ID, string CURRENCY_TYPE_ID, string CURRENCY_ACCT_ID, string MARKET_SCALE, string MINIMUM_INCREMENT, string TOTAL_ASSETS_ON_OFFER, string PRICE_LIMIT, int bBuyingOrSelling) {
    otapiPINVOKE.OT_API_issueMarketOffer(SERVER_ID, USER_ID, ASSET_TYPE_ID, ASSET_ACCT_ID, CURRENCY_TYPE_ID, CURRENCY_ACCT_ID, MARKET_SCALE, MINIMUM_INCREMENT, TOTAL_ASSETS_ON_OFFER, PRICE_LIMIT, bBuyingOrSelling);
  }

  public static string OT_API_PopMessageBuffer() {
    string ret = otapiPINVOKE.OT_API_PopMessageBuffer();
    return ret;
  }

  public static void OT_API_FlushMessageBuffer() {
    otapiPINVOKE.OT_API_FlushMessageBuffer();
  }

  public static string OT_API_Message_GetCommand(string THE_MESSAGE) {
    string ret = otapiPINVOKE.OT_API_Message_GetCommand(THE_MESSAGE);
    return ret;
  }

  public static int OT_API_Message_GetSuccess(string THE_MESSAGE) {
    int ret = otapiPINVOKE.OT_API_Message_GetSuccess(THE_MESSAGE);
    return ret;
  }

  public static int OT_API_Message_GetTransactionSuccess(string SERVER_ID, string USER_ID, string ACCOUNT_ID, string THE_MESSAGE) {
    int ret = otapiPINVOKE.OT_API_Message_GetTransactionSuccess(SERVER_ID, USER_ID, ACCOUNT_ID, THE_MESSAGE);
    return ret;
  }

  public static string OT_API_Message_GetLedger(string THE_MESSAGE) {
    string ret = otapiPINVOKE.OT_API_Message_GetLedger(THE_MESSAGE);
    return ret;
  }

  public static string OT_API_Message_GetNewAssetTypeID(string THE_MESSAGE) {
    string ret = otapiPINVOKE.OT_API_Message_GetNewAssetTypeID(THE_MESSAGE);
    return ret;
  }

  public static string OT_API_Message_GetNewIssuerAcctID(string THE_MESSAGE) {
    string ret = otapiPINVOKE.OT_API_Message_GetNewIssuerAcctID(THE_MESSAGE);
    return ret;
  }

  public static string OT_API_Message_GetNewAcctID(string THE_MESSAGE) {
    string ret = otapiPINVOKE.OT_API_Message_GetNewAcctID(THE_MESSAGE);
    return ret;
  }

  public static int OT_API_ConnectServer(string SERVER_ID, string USER_ID, string szCA_FILE, string szKEY_FILE, string szKEY_PASSWORD) {
    int ret = otapiPINVOKE.OT_API_ConnectServer(SERVER_ID, USER_ID, szCA_FILE, szKEY_FILE, szKEY_PASSWORD);
    return ret;
  }

  public static int OT_API_ProcessSockets() {
    int ret = otapiPINVOKE.OT_API_ProcessSockets();
    return ret;
  }

}
