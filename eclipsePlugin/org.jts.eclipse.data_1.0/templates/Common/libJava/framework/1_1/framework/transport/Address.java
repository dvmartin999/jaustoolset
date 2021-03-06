/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package framework.transport;

public class Address {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Address(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Address obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        JausAddressJNI.delete_Address(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Address() {
    this(JausAddressJNI.new_Address__SWIG_0(), true);
  }

  public Address(Address from) {
    this(JausAddressJNI.new_Address__SWIG_1(Address.getCPtr(from), from), true);
  }

}
