/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.3
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


using System;
using System.Runtime.InteropServices;

public class Storage : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal Storage(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(Storage obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~Storage() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          otapiPINVOKE.delete_Storage(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public virtual bool Init(string oneStr, string twoStr, string threeStr, string fourStr, string fiveStr, string sixStr) {
    bool ret = otapiPINVOKE.Storage_Init__SWIG_0(swigCPtr, oneStr, twoStr, threeStr, fourStr, fiveStr, sixStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool Init(string oneStr, string twoStr, string threeStr, string fourStr, string fiveStr) {
    bool ret = otapiPINVOKE.Storage_Init__SWIG_1(swigCPtr, oneStr, twoStr, threeStr, fourStr, fiveStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool Init(string oneStr, string twoStr, string threeStr, string fourStr) {
    bool ret = otapiPINVOKE.Storage_Init__SWIG_2(swigCPtr, oneStr, twoStr, threeStr, fourStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool Init(string oneStr, string twoStr, string threeStr) {
    bool ret = otapiPINVOKE.Storage_Init__SWIG_3(swigCPtr, oneStr, twoStr, threeStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool Init(string oneStr, string twoStr) {
    bool ret = otapiPINVOKE.Storage_Init__SWIG_4(swigCPtr, oneStr, twoStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool Init(string oneStr) {
    bool ret = otapiPINVOKE.Storage_Init__SWIG_5(swigCPtr, oneStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool Init() {
    bool ret = otapiPINVOKE.Storage_Init__SWIG_6(swigCPtr);
    return ret;
  }

  public virtual bool Exists(string strFolder, string oneStr, string twoStr, string threeStr) {
    bool ret = otapiPINVOKE.Storage_Exists__SWIG_0(swigCPtr, strFolder, oneStr, twoStr, threeStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool Exists(string strFolder, string oneStr, string twoStr) {
    bool ret = otapiPINVOKE.Storage_Exists__SWIG_1(swigCPtr, strFolder, oneStr, twoStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool Exists(string strFolder, string oneStr) {
    bool ret = otapiPINVOKE.Storage_Exists__SWIG_2(swigCPtr, strFolder, oneStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool Exists(string strFolder) {
    bool ret = otapiPINVOKE.Storage_Exists__SWIG_3(swigCPtr, strFolder);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool StoreString(string strContents, string strFolder, string oneStr, string twoStr, string threeStr) {
    bool ret = otapiPINVOKE.Storage_StoreString__SWIG_0(swigCPtr, strContents, strFolder, oneStr, twoStr, threeStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool StoreString(string strContents, string strFolder, string oneStr, string twoStr) {
    bool ret = otapiPINVOKE.Storage_StoreString__SWIG_1(swigCPtr, strContents, strFolder, oneStr, twoStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool StoreString(string strContents, string strFolder, string oneStr) {
    bool ret = otapiPINVOKE.Storage_StoreString__SWIG_2(swigCPtr, strContents, strFolder, oneStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool StoreString(string strContents, string strFolder) {
    bool ret = otapiPINVOKE.Storage_StoreString__SWIG_3(swigCPtr, strContents, strFolder);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string QueryString(string strFolder, string oneStr, string twoStr, string threeStr) {
    string ret = otapiPINVOKE.Storage_QueryString__SWIG_0(swigCPtr, strFolder, oneStr, twoStr, threeStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string QueryString(string strFolder, string oneStr, string twoStr) {
    string ret = otapiPINVOKE.Storage_QueryString__SWIG_1(swigCPtr, strFolder, oneStr, twoStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string QueryString(string strFolder, string oneStr) {
    string ret = otapiPINVOKE.Storage_QueryString__SWIG_2(swigCPtr, strFolder, oneStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string QueryString(string strFolder) {
    string ret = otapiPINVOKE.Storage_QueryString__SWIG_3(swigCPtr, strFolder);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool StoreObject(Storable theContents, string strFolder, string oneStr, string twoStr, string threeStr) {
    bool ret = otapiPINVOKE.Storage_StoreObject__SWIG_0(swigCPtr, Storable.getCPtr(theContents), strFolder, oneStr, twoStr, threeStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool StoreObject(Storable theContents, string strFolder, string oneStr, string twoStr) {
    bool ret = otapiPINVOKE.Storage_StoreObject__SWIG_1(swigCPtr, Storable.getCPtr(theContents), strFolder, oneStr, twoStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool StoreObject(Storable theContents, string strFolder, string oneStr) {
    bool ret = otapiPINVOKE.Storage_StoreObject__SWIG_2(swigCPtr, Storable.getCPtr(theContents), strFolder, oneStr);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool StoreObject(Storable theContents, string strFolder) {
    bool ret = otapiPINVOKE.Storage_StoreObject__SWIG_3(swigCPtr, Storable.getCPtr(theContents), strFolder);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public Storable QueryObject(SWIGTYPE_p_StoredObjectType theObjectType, string strFolder, string oneStr, string twoStr, string threeStr) {
    IntPtr cPtr = otapiPINVOKE.Storage_QueryObject__SWIG_0(swigCPtr, SWIGTYPE_p_StoredObjectType.getCPtr(theObjectType), strFolder, oneStr, twoStr, threeStr);
    Storable ret = (cPtr == IntPtr.Zero) ? null : new Storable(cPtr, true);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public Storable QueryObject(SWIGTYPE_p_StoredObjectType theObjectType, string strFolder, string oneStr, string twoStr) {
    IntPtr cPtr = otapiPINVOKE.Storage_QueryObject__SWIG_1(swigCPtr, SWIGTYPE_p_StoredObjectType.getCPtr(theObjectType), strFolder, oneStr, twoStr);
    Storable ret = (cPtr == IntPtr.Zero) ? null : new Storable(cPtr, true);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public Storable QueryObject(SWIGTYPE_p_StoredObjectType theObjectType, string strFolder, string oneStr) {
    IntPtr cPtr = otapiPINVOKE.Storage_QueryObject__SWIG_2(swigCPtr, SWIGTYPE_p_StoredObjectType.getCPtr(theObjectType), strFolder, oneStr);
    Storable ret = (cPtr == IntPtr.Zero) ? null : new Storable(cPtr, true);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public Storable QueryObject(SWIGTYPE_p_StoredObjectType theObjectType, string strFolder) {
    IntPtr cPtr = otapiPINVOKE.Storage_QueryObject__SWIG_3(swigCPtr, SWIGTYPE_p_StoredObjectType.getCPtr(theObjectType), strFolder);
    Storable ret = (cPtr == IntPtr.Zero) ? null : new Storable(cPtr, true);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public Storable CreateObject(SWIGTYPE_p_StoredObjectType eType) {
    IntPtr cPtr = otapiPINVOKE.Storage_CreateObject(swigCPtr, SWIGTYPE_p_StoredObjectType.getCPtr(eType));
    Storable ret = (cPtr == IntPtr.Zero) ? null : new Storable(cPtr, false);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public static Storage Create(SWIGTYPE_p_StorageType eStorageType, SWIGTYPE_p_PackType ePackType) {
    IntPtr cPtr = otapiPINVOKE.Storage_Create(SWIGTYPE_p_StorageType.getCPtr(eStorageType), SWIGTYPE_p_PackType.getCPtr(ePackType));
    Storage ret = (cPtr == IntPtr.Zero) ? null : new Storage(cPtr, false);
    if (otapiPINVOKE.SWIGPendingException.Pending) throw otapiPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public SWIGTYPE_p_StorageType GetType() {
    SWIGTYPE_p_StorageType ret = new SWIGTYPE_p_StorageType(otapiPINVOKE.Storage_GetType(swigCPtr), true);
    return ret;
  }

}
