/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_serial4j_core_serial_SerialPort */

#ifndef _Included_com_serial4j_core_serial_SerialPort
#define _Included_com_serial4j_core_serial_SerialPort
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    setLoggingEnabled0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_serial4j_core_serial_SerialPort_setLoggingEnabled0
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    setLoggingDisabled0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_serial4j_core_serial_SerialPort_setLoggingDisabled0
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    getSerialPorts0
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_serial4j_core_serial_SerialPort_getSerialPorts0
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    fetchSerialPorts0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_serial_SerialPort_fetchSerialPorts0
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    getBaudRate0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_serial_SerialPort_getBaudRate0
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    getReadBuffer0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_serial_SerialPort_getReadBuffer0
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    getFileDescriptor0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_serial_SerialPort_getFileDescriptor0
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    writeData0
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_serial4j_core_serial_SerialPort_writeData0
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    readData0
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_serial4j_core_serial_SerialPort_readData0
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    getErrno0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_serial_SerialPort_getErrno0
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    initTermios0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_serial_SerialPort_initTermios0
  (JNIEnv *, jobject);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    setBaudRate0
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_serial_SerialPort_setBaudRate0
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    openPort0
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_serial_SerialPort_openPort0
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_serial4j_core_serial_SerialPort
 * Method:    closePort0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_serial4j_core_serial_SerialPort_closePort0
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
