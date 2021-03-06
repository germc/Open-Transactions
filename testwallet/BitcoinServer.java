/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.3
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.wrapper.core.jni;

public class BitcoinServer extends Server {
  private long swigCPtr;

  public BitcoinServer(long cPtr, boolean cMemoryOwn) {
    super(otapiJNI.BitcoinServer_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  public static long getCPtr(BitcoinServer obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        otapiJNI.delete_BitcoinServer(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public void setBitcoin_username(String value) {
    otapiJNI.BitcoinServer_bitcoin_username_set(swigCPtr, this, value);
  }

  public String getBitcoin_username() {
    return otapiJNI.BitcoinServer_bitcoin_username_get(swigCPtr, this);
  }

  public void setBitcoin_password(String value) {
    otapiJNI.BitcoinServer_bitcoin_password_set(swigCPtr, this, value);
  }

  public String getBitcoin_password() {
    return otapiJNI.BitcoinServer_bitcoin_password_get(swigCPtr, this);
  }

  public static BitcoinServer dynamic_cast(Storable pObject) {
    long cPtr = otapiJNI.BitcoinServer_dynamic_cast(Storable.getCPtr(pObject), pObject);
    return (cPtr == 0) ? null : new BitcoinServer(cPtr, false);
  }

}
