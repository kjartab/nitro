/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class nitf_SegmentReader */

#ifndef _Included_nitf_SegmentReader
#define _Included_nitf_SegmentReader
#ifdef __cplusplus
extern "C" {
#endif
#undef nitf_SegmentReader_INVALID_ADDRESS
#define nitf_SegmentReader_INVALID_ADDRESS 0L
/*
 * Class:     nitf_SegmentReader
 * Method:    destructMemory
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nitf_SegmentReader_destructMemory
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SegmentReader
 * Method:    read
 * Signature: ([BI)Z
 */
JNIEXPORT jboolean JNICALL Java_nitf_SegmentReader_read
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     nitf_SegmentReader
 * Method:    seek
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_nitf_SegmentReader_seek
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     nitf_SegmentReader
 * Method:    tell
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_nitf_SegmentReader_tell
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SegmentReader
 * Method:    getSize
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_nitf_SegmentReader_getSize
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
