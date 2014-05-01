/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ibm_jusb_os_linux_JavaxUsb */

#ifndef _Included_com_ibm_jusb_os_linux_JavaxUsb
#define _Included_com_ibm_jusb_os_linux_JavaxUsb
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: msgLevelTable */
#undef com_ibm_jusb_os_linux_JavaxUsb_SPEED_UNKNOWN
#define com_ibm_jusb_os_linux_JavaxUsb_SPEED_UNKNOWN 0L
#undef com_ibm_jusb_os_linux_JavaxUsb_SPEED_LOW
#define com_ibm_jusb_os_linux_JavaxUsb_SPEED_LOW 1L
#undef com_ibm_jusb_os_linux_JavaxUsb_SPEED_FULL
#define com_ibm_jusb_os_linux_JavaxUsb_SPEED_FULL 2L
/*
 * Class:     com_ibm_jusb_os_linux_JavaxUsb
 * Method:    nativeSetTracing
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_ibm_jusb_os_linux_JavaxUsb_nativeSetTracing
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_ibm_jusb_os_linux_JavaxUsb
 * Method:    nativeSetTraceType
 * Signature: (ZLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_ibm_jusb_os_linux_JavaxUsb_nativeSetTraceType
  (JNIEnv *, jclass, jboolean, jstring);

/*
 * Class:     com_ibm_jusb_os_linux_JavaxUsb
 * Method:    nativeSetTraceLevel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_ibm_jusb_os_linux_JavaxUsb_nativeSetTraceLevel
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ibm_jusb_os_linux_JavaxUsb
 * Method:    nativeSetTraceOutput
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_ibm_jusb_os_linux_JavaxUsb_nativeSetTraceOutput
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_ibm_jusb_os_linux_JavaxUsb
 * Method:    nativeTopologyUpdater
 * Signature: (Lcom/ibm/jusb/os/linux/LinuxUsbServices;Ljava/util/List;Ljava/util/List;)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_jusb_os_linux_JavaxUsb_nativeTopologyUpdater
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     com_ibm_jusb_os_linux_JavaxUsb
 * Method:    nativeGetActiveConfigurationNumber
 * Signature: (Lcom/ibm/jusb/os/linux/LinuxDeviceOsImp;)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_jusb_os_linux_JavaxUsb_nativeGetActiveConfigurationNumber
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ibm_jusb_os_linux_JavaxUsb
 * Method:    nativeGetActiveInterfaceSettingNumber
 * Signature: (Lcom/ibm/jusb/os/linux/LinuxDeviceOsImp;I)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_jusb_os_linux_JavaxUsb_nativeGetActiveInterfaceSettingNumber
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_ibm_jusb_os_linux_JavaxUsb
 * Method:    nativeTopologyListener
 * Signature: (Lcom/ibm/jusb/os/linux/LinuxUsbServices;)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_jusb_os_linux_JavaxUsb_nativeTopologyListener
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ibm_jusb_os_linux_JavaxUsb
 * Method:    nativeDeviceProxy
 * Signature: (Lcom/ibm/jusb/os/linux/LinuxDeviceProxy;)V
 */
JNIEXPORT void JNICALL Java_com_ibm_jusb_os_linux_JavaxUsb_nativeDeviceProxy
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ibm_jusb_os_linux_JavaxUsb
 * Method:    nativeGetErrorMessage
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ibm_jusb_os_linux_JavaxUsb_nativeGetErrorMessage
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif