/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.31
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class OTAPI {
  public static int OT_API_Init(String szClientPath) {
    return OTAPIJNI.OT_API_Init(szClientPath);
  }

  public static int OT_API_loadWallet(String szPath) {
    return OTAPIJNI.OT_API_loadWallet(szPath);
  }

  public static int OT_API_connectServer(String SERVER_ID, String USER_ID, String szCA_FILE, String szKEY_FILE, String szKEY_PASSWORD) {
    return OTAPIJNI.OT_API_connectServer(SERVER_ID, USER_ID, szCA_FILE, szKEY_FILE, szKEY_PASSWORD);
  }

  public static int OT_API_processSockets() {
    return OTAPIJNI.OT_API_processSockets();
  }

  public static void OT_API_checkServerID(String SERVER_ID, String USER_ID) {
    OTAPIJNI.OT_API_checkServerID(SERVER_ID, USER_ID);
  }

  public static void OT_API_createUserAccount(String SERVER_ID, String USER_ID) {
    OTAPIJNI.OT_API_createUserAccount(SERVER_ID, USER_ID);
  }

  public static void OT_API_checkUser(String SERVER_ID, String USER_ID, String USER_ID_CHECK) {
    OTAPIJNI.OT_API_checkUser(SERVER_ID, USER_ID, USER_ID_CHECK);
  }

  public static void OT_API_getRequest(String SERVER_ID, String USER_ID) {
    OTAPIJNI.OT_API_getRequest(SERVER_ID, USER_ID);
  }

  public static void OT_API_issueAssetType(String SERVER_ID, String USER_ID, String THE_CONTRACT) {
    OTAPIJNI.OT_API_issueAssetType(SERVER_ID, USER_ID, THE_CONTRACT);
  }

  public static void OT_API_getContract(String SERVER_ID, String USER_ID, String ASSET_ID) {
    OTAPIJNI.OT_API_getContract(SERVER_ID, USER_ID, ASSET_ID);
  }

  public static void OT_API_getMint(String SERVER_ID, String USER_ID, String ASSET_ID) {
    OTAPIJNI.OT_API_getMint(SERVER_ID, USER_ID, ASSET_ID);
  }

  public static void OT_API_createAssetAccount(String SERVER_ID, String USER_ID, String ASSET_ID) {
    OTAPIJNI.OT_API_createAssetAccount(SERVER_ID, USER_ID, ASSET_ID);
  }

  public static void OT_API_getAccount(String SERVER_ID, String USER_ID, String ACCT_ID) {
    OTAPIJNI.OT_API_getAccount(SERVER_ID, USER_ID, ACCT_ID);
  }

  public static void OT_API_issueBasket(String SERVER_ID, String USER_ID, String BASKET_INFO) {
    OTAPIJNI.OT_API_issueBasket(SERVER_ID, USER_ID, BASKET_INFO);
  }

  public static void OT_API_exchangeBasket(String SERVER_ID, String USER_ID, String BASKET_ASSET_ID, String BASKET_INFO) {
    OTAPIJNI.OT_API_exchangeBasket(SERVER_ID, USER_ID, BASKET_ASSET_ID, BASKET_INFO);
  }

  public static void OT_API_getTransactionNumber(String SERVER_ID, String USER_ID) {
    OTAPIJNI.OT_API_getTransactionNumber(SERVER_ID, USER_ID);
  }

  public static void OT_API_notarizeWithdrawal(String SERVER_ID, String USER_ID, String ACCT_ID, String AMOUNT) {
    OTAPIJNI.OT_API_notarizeWithdrawal(SERVER_ID, USER_ID, ACCT_ID, AMOUNT);
  }

  public static void OT_API_notarizeDeposit(String SERVER_ID, String USER_ID, String ACCT_ID, String THE_PURSE) {
    OTAPIJNI.OT_API_notarizeDeposit(SERVER_ID, USER_ID, ACCT_ID, THE_PURSE);
  }

  public static void OT_API_notarizeTransfer(String SERVER_ID, String USER_ID, String ACCT_FROM, String ACCT_TO, String AMOUNT, String NOTE) {
    OTAPIJNI.OT_API_notarizeTransfer(SERVER_ID, USER_ID, ACCT_FROM, ACCT_TO, AMOUNT, NOTE);
  }

  public static void OT_API_getInbox(String SERVER_ID, String USER_ID, String ACCT_ID) {
    OTAPIJNI.OT_API_getInbox(SERVER_ID, USER_ID, ACCT_ID);
  }

  public static void OT_API_processInbox(String SERVER_ID, String USER_ID, String ACCT_ID, String ACCT_LEDGER) {
    OTAPIJNI.OT_API_processInbox(SERVER_ID, USER_ID, ACCT_ID, ACCT_LEDGER);
  }

  public static void OT_API_withdrawVoucher(String SERVER_ID, String USER_ID, String ACCT_ID, String RECIPIENT_USER_ID, String CHEQUE_MEMO, String AMOUNT) {
    OTAPIJNI.OT_API_withdrawVoucher(SERVER_ID, USER_ID, ACCT_ID, RECIPIENT_USER_ID, CHEQUE_MEMO, AMOUNT);
  }

  public static void OT_API_depositCheque(String SERVER_ID, String USER_ID, String ACCT_ID, String THE_CHEQUE) {
    OTAPIJNI.OT_API_depositCheque(SERVER_ID, USER_ID, ACCT_ID, THE_CHEQUE);
  }

  public static int OT_API_getNymCount() {
    return OTAPIJNI.OT_API_getNymCount();
  }

  public static int OT_API_getServerCount() {
    return OTAPIJNI.OT_API_getServerCount();
  }

  public static int OT_API_getAssetTypeCount() {
    return OTAPIJNI.OT_API_getAssetTypeCount();
  }

  public static int OT_API_getAccountCount() {
    return OTAPIJNI.OT_API_getAccountCount();
  }

  public static int OT_API_getNym(int iIndex, String NYM_ID, String NYM_NAME) {
    return OTAPIJNI.OT_API_getNym(iIndex, NYM_ID, NYM_NAME);
  }

  public static int OT_API_getServer(int iIndex, String THE_ID, String THE_NAME) {
    return OTAPIJNI.OT_API_getServer(iIndex, THE_ID, THE_NAME);
  }

  public static int OT_API_getAssetType(int iIndex, String THE_ID, String THE_NAME) {
    return OTAPIJNI.OT_API_getAssetType(iIndex, THE_ID, THE_NAME);
  }

  public static int OT_API_GetAccountWallet(int iIndex, String THE_ID, String THE_NAME) {
    return OTAPIJNI.OT_API_GetAccountWallet(iIndex, THE_ID, THE_NAME);
  }

}