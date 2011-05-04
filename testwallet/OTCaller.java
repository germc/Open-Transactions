/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.3
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.wrapper.core.jni;

public class OTCaller {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  public OTCaller(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  public static long getCPtr(OTCaller obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        otapiJNI.delete_OTCaller(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public OTCaller() {
    this(otapiJNI.new_OTCaller(), true);
  }

  public String GetPassword() {
    return otapiJNI.OTCaller_GetPassword(swigCPtr, this);
  }

  public void delCallback() {
    otapiJNI.OTCaller_delCallback(swigCPtr, this);
  }

  public void setCallback(OTCallback cb) {
    otapiJNI.OTCaller_setCallback(swigCPtr, this, OTCallback.getCPtr(cb), cb);
  }

  public boolean isCallbackSet() {
    return otapiJNI.OTCaller_isCallbackSet(swigCPtr, this);
  }

  public void call1() {
    otapiJNI.OTCaller_call1(swigCPtr, this);
  }

  public void call2() {
    otapiJNI.OTCaller_call2(swigCPtr, this);
  }

}
