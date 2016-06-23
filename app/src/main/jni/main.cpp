//
// Created by user on 2016/6/22.
//
#include "com_sj4399_import_peso_NativeUtil.h"
#include "AttributeInstance.h"
#include <jni.h>
#include <android/log.h>
#define  LOGE(format, args...)  __android_log_print(ANDROID_LOG_ERROR, "main.cpp", format, ##args);



JNIEXPORT jint JNICALL Java_com_sj4399_import_1peso_NativeUtil_test1
(JNIEnv * env, jclass clazz){
    AttributeInstance *ai = new AttributeInstance();
    LOGE("getDefaultValue: %d", ai->getDefaultValue(0))
    return ai->getDefaultValue(0);
}
