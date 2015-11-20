/* Replace "dll.h" with the name of your header */
#include "com_liuxiaobai_TeaJniNative.h"
#include "tea_encrypt.h"

JNIEXPORT jbyteArray JNICALL Java_com_liuxiaobai_TeaJniNative_encrypt
  (JNIEnv *env, jobject obj, jbyteArray input)
  {
  	jbyte *pJbyte = (*env)->GetByteArrayElements(env, input, JNI_FALSE);
  	jsize len = (*env)->GetArrayLength(env, input);

  	uint8_t *v = (uint8_t *)pJbyte;

  	uint32_t offset;
	for(offset = 0;(offset + 8) <= len;offset += 8)
	{
	  	encrypt((uint32_t *)(v + offset));
	}

  	jbyteArray output = (*env)->NewByteArray(env, len);
  	(*env)->SetByteArrayRegion(env, output, 0, len, pJbyte);

  	return output;
  }


JNIEXPORT jbyteArray JNICALL Java_com_liuxiaobai_TeaJniNative_decrypt
  (JNIEnv *env, jobject obj, jbyteArray input)
  {
  	jbyte *pJbyte = (*env)->GetByteArrayElements(env, input, JNI_FALSE);
  	jsize len = (*env)->GetArrayLength(env, input);

  	uint8_t *v = (uint8_t *)pJbyte;

  	uint32_t offset;
  	for(offset = 0;(offset + 8) <= len;offset += 8)
  	{
  		decrypt((uint32_t *)(v + offset));
	}

  	jbyteArray output = (*env)->NewByteArray(env, len);
  	(*env)->SetByteArrayRegion(env, output, 0, len, pJbyte);

  	return output;

  }