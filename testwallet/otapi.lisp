

;;;SWIG wrapper code starts here

(cl:defmacro defanonenum (&body enums)
   "Converts anonymous enums to defconstants."
  `(cl:progn ,@(cl:loop for value in enums
                        for index = 0 then (cl:1+ index)
                        when (cl:listp value) do (cl:setf index (cl:second value)
                                                          value (cl:first value))
                        collect `(cl:defconstant ,value ,index))))

(cl:eval-when (:compile-toplevel :load-toplevel)
  (cl:unless (cl:fboundp 'swig-lispify)
    (cl:defun swig-lispify (name flag cl:&optional (package cl:*package*))
      (cl:labels ((helper (lst last rest cl:&aux (c (cl:car lst)))
                    (cl:cond
                      ((cl:null lst)
                       rest)
                      ((cl:upper-case-p c)
                       (helper (cl:cdr lst) 'upper
                               (cl:case last
                                 ((lower digit) (cl:list* c #\- rest))
                                 (cl:t (cl:cons c rest)))))
                      ((cl:lower-case-p c)
                       (helper (cl:cdr lst) 'lower (cl:cons (cl:char-upcase c) rest)))
                      ((cl:digit-char-p c)
                       (helper (cl:cdr lst) 'digit 
                               (cl:case last
                                 ((upper lower) (cl:list* c #\- rest))
                                 (cl:t (cl:cons c rest)))))
                      ((cl:char-equal c #\_)
                       (helper (cl:cdr lst) '_ (cl:cons #\- rest)))
                      (cl:t
                       (cl:error "Invalid character: ~A" c)))))
        (cl:let ((fix (cl:case flag
                        ((constant enumvalue) "+")
                        (variable "*")
                        (cl:t ""))))
          (cl:intern
           (cl:concatenate
            'cl:string
            fix
            (cl:nreverse (helper (cl:concatenate 'cl:list name) cl:nil cl:nil))
            fix)
           package))))))

;;;SWIG wrapper code ends here


(cffi:defcfun ("OT_API_Init" OT_API_Init) :int
  (szClientPath :string))

(cffi:defcfun ("OT_API_LoadWallet" OT_API_LoadWallet) :int
  (szPath :string))

(cffi:defcfun ("OT_API_SwitchWallet" OT_API_SwitchWallet) :int
  (szDataFolderPath :string)
  (szWalletFilename :string))

(cffi:defcfun ("OT_API_GetMemlogSize" OT_API_GetMemlogSize) :int)

(cffi:defcfun ("OT_API_GetMemlogAtIndex" OT_API_GetMemlogAtIndex) :string
  (nIndex :int))

(cffi:defcfun ("OT_API_PeekMemlogFront" OT_API_PeekMemlogFront) :string)

(cffi:defcfun ("OT_API_PeekMemlogBack" OT_API_PeekMemlogBack) :string)

(cffi:defcfun ("OT_API_PopMemlogFront" OT_API_PopMemlogFront) :int)

(cffi:defcfun ("OT_API_PopMemlogBack" OT_API_PopMemlogBack) :int)

(cffi:defcfun ("OT_API_CreateNym" OT_API_CreateNym) :string)

(cffi:defcfun ("OT_API_AddServerContract" OT_API_AddServerContract) :int
  (szContract :string))

(cffi:defcfun ("OT_API_AddAssetContract" OT_API_AddAssetContract) :int
  (szContract :string))

(cffi:defcfun ("OT_API_GetServerCount" OT_API_GetServerCount) :int)

(cffi:defcfun ("OT_API_GetAssetTypeCount" OT_API_GetAssetTypeCount) :int)

(cffi:defcfun ("OT_API_GetAccountCount" OT_API_GetAccountCount) :int)

(cffi:defcfun ("OT_API_GetNymCount" OT_API_GetNymCount) :int)

(cffi:defcfun ("OT_API_GetServer_ID" OT_API_GetServer_ID) :string
  (nIndex :int))

(cffi:defcfun ("OT_API_GetServer_Name" OT_API_GetServer_Name) :string
  (SERVER_ID :string))

(cffi:defcfun ("OT_API_GetAssetType_ID" OT_API_GetAssetType_ID) :string
  (nIndex :int))

(cffi:defcfun ("OT_API_GetAssetType_Name" OT_API_GetAssetType_Name) :string
  (ASSET_TYPE_ID :string))

(cffi:defcfun ("OT_API_GetAccountWallet_ID" OT_API_GetAccountWallet_ID) :string
  (nIndex :int))

(cffi:defcfun ("OT_API_GetAccountWallet_Name" OT_API_GetAccountWallet_Name) :string
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_GetAccountWallet_Balance" OT_API_GetAccountWallet_Balance) :string
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_GetAccountWallet_Type" OT_API_GetAccountWallet_Type) :string
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_GetAccountWallet_AssetTypeID" OT_API_GetAccountWallet_AssetTypeID) :string
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_GetAccountWallet_ServerID" OT_API_GetAccountWallet_ServerID) :string
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_GetAccountWallet_NymID" OT_API_GetAccountWallet_NymID) :string
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_GetNym_TransactionNumCount" OT_API_GetNym_TransactionNumCount) :int
  (SERVER_ID :string)
  (NYM_ID :string))

(cffi:defcfun ("OT_API_GetNym_ID" OT_API_GetNym_ID) :string
  (nIndex :int))

(cffi:defcfun ("OT_API_GetNym_Name" OT_API_GetNym_Name) :string
  (NYM_ID :string))

(cffi:defcfun ("OT_API_GetNym_Stats" OT_API_GetNym_Stats) :string
  (NYM_ID :string))

(cffi:defcfun ("OT_API_IsNym_RegisteredAtServer" OT_API_IsNym_RegisteredAtServer) :int
  (NYM_ID :string)
  (SERVER_ID :string))

(cffi:defcfun ("OT_API_GetNym_MailCount" OT_API_GetNym_MailCount) :int
  (NYM_ID :string))

(cffi:defcfun ("OT_API_GetNym_MailContentsByIndex" OT_API_GetNym_MailContentsByIndex) :string
  (NYM_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_GetNym_MailSenderIDByIndex" OT_API_GetNym_MailSenderIDByIndex) :string
  (NYM_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_GetNym_MailServerIDByIndex" OT_API_GetNym_MailServerIDByIndex) :string
  (NYM_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_Nym_RemoveMailByIndex" OT_API_Nym_RemoveMailByIndex) :int
  (NYM_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_Nym_VerifyMailByIndex" OT_API_Nym_VerifyMailByIndex) :int
  (NYM_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_GetNym_OutmailCount" OT_API_GetNym_OutmailCount) :int
  (NYM_ID :string))

(cffi:defcfun ("OT_API_GetNym_OutmailContentsByIndex" OT_API_GetNym_OutmailContentsByIndex) :string
  (NYM_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_GetNym_OutmailRecipientIDByIndex" OT_API_GetNym_OutmailRecipientIDByIndex) :string
  (NYM_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_GetNym_OutmailServerIDByIndex" OT_API_GetNym_OutmailServerIDByIndex) :string
  (NYM_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_Nym_RemoveOutmailByIndex" OT_API_Nym_RemoveOutmailByIndex) :int
  (NYM_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_Nym_VerifyOutmailByIndex" OT_API_Nym_VerifyOutmailByIndex) :int
  (NYM_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_Wallet_CanRemoveServer" OT_API_Wallet_CanRemoveServer) :int
  (SERVER_ID :string))

(cffi:defcfun ("OT_API_Wallet_RemoveServer" OT_API_Wallet_RemoveServer) :int
  (SERVER_ID :string))

(cffi:defcfun ("OT_API_Wallet_CanRemoveAssetType" OT_API_Wallet_CanRemoveAssetType) :int
  (ASSET_ID :string))

(cffi:defcfun ("OT_API_Wallet_RemoveAssetType" OT_API_Wallet_RemoveAssetType) :int
  (ASSET_ID :string))

(cffi:defcfun ("OT_API_Wallet_CanRemoveNym" OT_API_Wallet_CanRemoveNym) :int
  (NYM_ID :string))

(cffi:defcfun ("OT_API_Wallet_RemoveNym" OT_API_Wallet_RemoveNym) :int
  (NYM_ID :string))

(cffi:defcfun ("OT_API_Wallet_CanRemoveAccount" OT_API_Wallet_CanRemoveAccount) :int
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_Wallet_RemoveAccount" OT_API_Wallet_RemoveAccount) :int
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_SetNym_Name" OT_API_SetNym_Name) :int
  (NYM_ID :string)
  (SIGNER_NYM_ID :string)
  (NYM_NEW_NAME :string))

(cffi:defcfun ("OT_API_SetAccountWallet_Name" OT_API_SetAccountWallet_Name) :int
  (ACCT_ID :string)
  (SIGNER_NYM_ID :string)
  (ACCT_NEW_NAME :string))

(cffi:defcfun ("OT_API_SetAssetType_Name" OT_API_SetAssetType_Name) :int
  (ASSET_ID :string)
  (STR_NEW_NAME :string))

(cffi:defcfun ("OT_API_SetServer_Name" OT_API_SetServer_Name) :int
  (SERVER_ID :string)
  (STR_NEW_NAME :string))

(cffi:defcfun ("OT_API_VerifyAndRetrieveXMLContents" OT_API_VerifyAndRetrieveXMLContents) :string
  (THE_CONTRACT :string)
  (USER_ID :string))

(cffi:defcfun ("OT_API_WriteCheque" OT_API_WriteCheque) :string
  (SERVER_ID :string)
  (CHEQUE_AMOUNT :string)
  (VALID_FROM :string)
  (VALID_TO :string)
  (SENDER_ACCT_ID :string)
  (SENDER_USER_ID :string)
  (CHEQUE_MEMO :string)
  (RECIPIENT_USER_ID :string))

(cffi:defcfun ("OT_API_WritePaymentPlan" OT_API_WritePaymentPlan) :string
  (SERVER_ID :string)
  (VALID_FROM :string)
  (VALID_TO :string)
  (SENDER_ACCT_ID :string)
  (SENDER_USER_ID :string)
  (PLAN_CONSIDERATION :string)
  (RECIPIENT_ACCT_ID :string)
  (RECIPIENT_USER_ID :string)
  (INITIAL_PAYMENT_AMOUNT :string)
  (INITIAL_PAYMENT_DELAY :string)
  (PAYMENT_PLAN_AMOUNT :string)
  (PAYMENT_PLAN_DELAY :string)
  (PAYMENT_PLAN_PERIOD :string)
  (PAYMENT_PLAN_LENGTH :string)
  (PAYMENT_PLAN_MAX_PAYMENTS :string))

(cffi:defcfun ("OT_API_LoadUserPubkey" OT_API_LoadUserPubkey) :string
  (USER_ID :string))

(cffi:defcfun ("OT_API_LoadPubkey" OT_API_LoadPubkey) :string
  (USER_ID :string))

(cffi:defcfun ("OT_API_VerifyUserPrivateKey" OT_API_VerifyUserPrivateKey) :int
  (USER_ID :string))

(cffi:defcfun ("OT_API_LoadPurse" OT_API_LoadPurse) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (USER_ID :string))

(cffi:defcfun ("OT_API_LoadMint" OT_API_LoadMint) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string))

(cffi:defcfun ("OT_API_LoadAssetContract" OT_API_LoadAssetContract) :string
  (ASSET_TYPE_ID :string))

(cffi:defcfun ("OT_API_LoadServerContract" OT_API_LoadServerContract) :string
  (SERVER_ID :string))

(cffi:defcfun ("OT_API_IsBasketCurrency" OT_API_IsBasketCurrency) :int
  (ASSET_TYPE_ID :string))

(cffi:defcfun ("OT_API_Basket_GetMemberCount" OT_API_Basket_GetMemberCount) :int
  (BASKET_ASSET_TYPE_ID :string))

(cffi:defcfun ("OT_API_Basket_GetMemberType" OT_API_Basket_GetMemberType) :string
  (BASKET_ASSET_TYPE_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_Basket_GetMinimumTransferAmount" OT_API_Basket_GetMinimumTransferAmount) :string
  (BASKET_ASSET_TYPE_ID :string))

(cffi:defcfun ("OT_API_Basket_GetMemberMinimumTransferAmount" OT_API_Basket_GetMemberMinimumTransferAmount) :string
  (BASKET_ASSET_TYPE_ID :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_LoadAssetAccount" OT_API_LoadAssetAccount) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_LoadInbox" OT_API_LoadInbox) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_LoadOutbox" OT_API_LoadOutbox) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string))

(cffi:defcfun ("OT_API_Ledger_GetCount" OT_API_Ledger_GetCount) :int
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_LEDGER :string))

(cffi:defcfun ("OT_API_Ledger_CreateResponse" OT_API_Ledger_CreateResponse) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (ORIGINAL_LEDGER :string))

(cffi:defcfun ("OT_API_Ledger_GetTransactionByIndex" OT_API_Ledger_GetTransactionByIndex) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_LEDGER :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_Ledger_GetTransactionByID" OT_API_Ledger_GetTransactionByID) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_LEDGER :string)
  (TRANSACTION_NUMBER :string))

(cffi:defcfun ("OT_API_Ledger_GetTransactionIDByIndex" OT_API_Ledger_GetTransactionIDByIndex) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_LEDGER :string)
  (nIndex :int))

(cffi:defcfun ("OT_API_Ledger_AddTransaction" OT_API_Ledger_AddTransaction) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_LEDGER :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Transaction_CreateResponse" OT_API_Transaction_CreateResponse) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (RESPONSE_LEDGER :string)
  (ORIGINAL_TRANSACTION :string)
  (BOOL_DO_I_ACCEPT :int))

(cffi:defcfun ("OT_API_Ledger_FinalizeResponse" OT_API_Ledger_FinalizeResponse) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_LEDGER :string))

(cffi:defcfun ("OT_API_Transaction_GetType" OT_API_Transaction_GetType) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Transaction_GetVoucher" OT_API_Transaction_GetVoucher) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Transaction_GetSuccess" OT_API_Transaction_GetSuccess) :int
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Transaction_GetDateSigned" OT_API_Transaction_GetDateSigned) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Transaction_GetAmount" OT_API_Transaction_GetAmount) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Pending_GetNote" OT_API_Pending_GetNote) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Transaction_GetSenderUserID" OT_API_Transaction_GetSenderUserID) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Transaction_GetSenderAcctID" OT_API_Transaction_GetSenderAcctID) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Transaction_GetRecipientUserID" OT_API_Transaction_GetRecipientUserID) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Transaction_GetRecipientAcctID" OT_API_Transaction_GetRecipientAcctID) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_Transaction_GetDisplayReferenceToNum" OT_API_Transaction_GetDisplayReferenceToNum) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_TRANSACTION :string))

(cffi:defcfun ("OT_API_CreatePurse" OT_API_CreatePurse) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (USER_ID :string))

(cffi:defcfun ("OT_API_SavePurse" OT_API_SavePurse) :int
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (USER_ID :string)
  (THE_PURSE :string))

(cffi:defcfun ("OT_API_Purse_GetTotalValue" OT_API_Purse_GetTotalValue) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (THE_PURSE :string))

(cffi:defcfun ("OT_API_Purse_Count" OT_API_Purse_Count) :int
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (THE_PURSE :string))

(cffi:defcfun ("OT_API_Purse_Peek" OT_API_Purse_Peek) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (USER_ID :string)
  (THE_PURSE :string))

(cffi:defcfun ("OT_API_Purse_Pop" OT_API_Purse_Pop) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (USER_ID :string)
  (THE_PURSE :string))

(cffi:defcfun ("OT_API_Purse_Push" OT_API_Purse_Push) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (USER_ID :string)
  (THE_PURSE :string)
  (THE_TOKEN :string))

(cffi:defcfun ("OT_API_Wallet_ImportPurse" OT_API_Wallet_ImportPurse) :int
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (USER_ID :string)
  (THE_PURSE :string))

(cffi:defcfun ("OT_API_exchangePurse" OT_API_exchangePurse) :void
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (USER_ID :string)
  (THE_PURSE :string))

(cffi:defcfun ("OT_API_Token_GetID" OT_API_Token_GetID) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (THE_TOKEN :string))

(cffi:defcfun ("OT_API_Token_GetDenomination" OT_API_Token_GetDenomination) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (THE_TOKEN :string))

(cffi:defcfun ("OT_API_Token_GetSeries" OT_API_Token_GetSeries) :int
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (THE_TOKEN :string))

(cffi:defcfun ("OT_API_Token_GetValidFrom" OT_API_Token_GetValidFrom) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (THE_TOKEN :string))

(cffi:defcfun ("OT_API_Token_GetValidTo" OT_API_Token_GetValidTo) :string
  (SERVER_ID :string)
  (ASSET_TYPE_ID :string)
  (THE_TOKEN :string))

(cffi:defcfun ("OT_API_Token_GetAssetID" OT_API_Token_GetAssetID) :string
  (THE_TOKEN :string))

(cffi:defcfun ("OT_API_Token_GetServerID" OT_API_Token_GetServerID) :string
  (THE_TOKEN :string))

(cffi:defcfun ("OT_API_checkServerID" OT_API_checkServerID) :void
  (SERVER_ID :string)
  (USER_ID :string))

(cffi:defcfun ("OT_API_createUserAccount" OT_API_createUserAccount) :void
  (SERVER_ID :string)
  (USER_ID :string))

(cffi:defcfun ("OT_API_checkUser" OT_API_checkUser) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (USER_ID_CHECK :string))

(cffi:defcfun ("OT_API_sendUserMessage" OT_API_sendUserMessage) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (USER_ID_RECIPIENT :string)
  (RECIPIENT_PUBKEY :string)
  (THE_MESSAGE :string))

(cffi:defcfun ("OT_API_getRequest" OT_API_getRequest) :void
  (SERVER_ID :string)
  (USER_ID :string))

(cffi:defcfun ("OT_API_getTransactionNumber" OT_API_getTransactionNumber) :void
  (SERVER_ID :string)
  (USER_ID :string))

(cffi:defcfun ("OT_API_issueAssetType" OT_API_issueAssetType) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (THE_CONTRACT :string))

(cffi:defcfun ("OT_API_getContract" OT_API_getContract) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ASSET_ID :string))

(cffi:defcfun ("OT_API_getMint" OT_API_getMint) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ASSET_ID :string))

(cffi:defcfun ("OT_API_createAssetAccount" OT_API_createAssetAccount) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ASSET_ID :string))

(cffi:defcfun ("OT_API_getAccount" OT_API_getAccount) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCT_ID :string))

(cffi:defcfun ("OT_API_GenerateBasketCreation" OT_API_GenerateBasketCreation) :string
  (USER_ID :string)
  (MINIMUM_TRANSFER :string))

(cffi:defcfun ("OT_API_AddBasketCreationItem" OT_API_AddBasketCreationItem) :string
  (USER_ID :string)
  (THE_BASKET :string)
  (ASSET_TYPE_ID :string)
  (MINIMUM_TRANSFER :string))

(cffi:defcfun ("OT_API_issueBasket" OT_API_issueBasket) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (THE_BASKET :string))

(cffi:defcfun ("OT_API_GenerateBasketExchange" OT_API_GenerateBasketExchange) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (BASKET_ASSET_TYPE_ID :string)
  (BASKET_ASSET_ACCT_ID :string)
  (TRANSFER_MULTIPLE :int))

(cffi:defcfun ("OT_API_AddBasketExchangeItem" OT_API_AddBasketExchangeItem) :string
  (SERVER_ID :string)
  (USER_ID :string)
  (THE_BASKET :string)
  (ASSET_TYPE_ID :string)
  (ASSET_ACCT_ID :string))

(cffi:defcfun ("OT_API_exchangeBasket" OT_API_exchangeBasket) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (BASKET_ASSET_ID :string)
  (THE_BASKET :string)
  (BOOL_EXCHANGE_IN_OR_OUT :int))

(cffi:defcfun ("OT_API_notarizeWithdrawal" OT_API_notarizeWithdrawal) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCT_ID :string)
  (AMOUNT :string))

(cffi:defcfun ("OT_API_notarizeDeposit" OT_API_notarizeDeposit) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCT_ID :string)
  (THE_PURSE :string))

(cffi:defcfun ("OT_API_notarizeTransfer" OT_API_notarizeTransfer) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCT_FROM :string)
  (ACCT_TO :string)
  (AMOUNT :string)
  (NOTE :string))

(cffi:defcfun ("OT_API_getInbox" OT_API_getInbox) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCT_ID :string))

(cffi:defcfun ("OT_API_getOutbox" OT_API_getOutbox) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCT_ID :string))

(cffi:defcfun ("OT_API_getNymbox" OT_API_getNymbox) :void
  (SERVER_ID :string)
  (USER_ID :string))

(cffi:defcfun ("OT_API_LoadNymbox" OT_API_LoadNymbox) :string
  (SERVER_ID :string)
  (USER_ID :string))

(cffi:defcfun ("OT_API_processInbox" OT_API_processInbox) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCT_ID :string)
  (ACCT_LEDGER :string))

(cffi:defcfun ("OT_API_processNymbox" OT_API_processNymbox) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCT_LEDGER :string))

(cffi:defcfun ("OT_API_withdrawVoucher" OT_API_withdrawVoucher) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCT_ID :string)
  (RECIPIENT_USER_ID :string)
  (CHEQUE_MEMO :string)
  (AMOUNT :string))

(cffi:defcfun ("OT_API_depositCheque" OT_API_depositCheque) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCT_ID :string)
  (THE_CHEQUE :string))

(cffi:defcfun ("OT_API_depositPaymentPlan" OT_API_depositPaymentPlan) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (THE_PAYMENT_PLAN :string))

(cffi:defcfun ("OT_API_issueMarketOffer" OT_API_issueMarketOffer) :void
  (SERVER_ID :string)
  (USER_ID :string)
  (ASSET_TYPE_ID :string)
  (ASSET_ACCT_ID :string)
  (CURRENCY_TYPE_ID :string)
  (CURRENCY_ACCT_ID :string)
  (MARKET_SCALE :string)
  (MINIMUM_INCREMENT :string)
  (TOTAL_ASSETS_ON_OFFER :string)
  (PRICE_LIMIT :string)
  (bBuyingOrSelling :int))

(cffi:defcfun ("OT_API_PopMessageBuffer" OT_API_PopMessageBuffer) :string)

(cffi:defcfun ("OT_API_FlushMessageBuffer" OT_API_FlushMessageBuffer) :void)

(cffi:defcfun ("OT_API_Message_GetCommand" OT_API_Message_GetCommand) :string
  (THE_MESSAGE :string))

(cffi:defcfun ("OT_API_Message_GetSuccess" OT_API_Message_GetSuccess) :int
  (THE_MESSAGE :string))

(cffi:defcfun ("OT_API_Message_GetTransactionSuccess" OT_API_Message_GetTransactionSuccess) :int
  (SERVER_ID :string)
  (USER_ID :string)
  (ACCOUNT_ID :string)
  (THE_MESSAGE :string))

(cffi:defcfun ("OT_API_Message_GetLedger" OT_API_Message_GetLedger) :string
  (THE_MESSAGE :string))

(cffi:defcfun ("OT_API_Message_GetNewAssetTypeID" OT_API_Message_GetNewAssetTypeID) :string
  (THE_MESSAGE :string))

(cffi:defcfun ("OT_API_Message_GetNewIssuerAcctID" OT_API_Message_GetNewIssuerAcctID) :string
  (THE_MESSAGE :string))

(cffi:defcfun ("OT_API_Message_GetNewAcctID" OT_API_Message_GetNewAcctID) :string
  (THE_MESSAGE :string))

(cffi:defcfun ("OT_API_ConnectServer" OT_API_ConnectServer) :int
  (SERVER_ID :string)
  (USER_ID :string)
  (szCA_FILE :string)
  (szKEY_FILE :string)
  (szKEY_PASSWORD :string))

(cffi:defcfun ("OT_API_ProcessSockets" OT_API_ProcessSockets) :int)


