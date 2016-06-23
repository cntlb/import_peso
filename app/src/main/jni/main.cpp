//
// Created by user on 2016/6/22.
//
#include "User.h"
#include <jni.h>
#include <android/log.h>
#define  LOGE(format, args...)  __android_log_print(ANDROID_LOG_ERROR, "main.cpp", format, ##args);

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL Java_com_example_importpeso_MainActivity_test
        (JNIEnv *, jobject){
    User *u = new User;
    u->setAge(30);
    int age = u->getAge();
    LOGE("getAge: %d", age)
    LOGE("getScore: %d", u->getScore())
    u->setScore(300);
    LOGE("getScore: %d", u->getScore())
    delete u;
    return age;
}

#ifdef __cplusplus
}
#endif

