//
// Created by user on 2016/6/22.
//
#include "User.h"
#include "SuperUser.h"
#include <jni.h>
#include <android/log.h>
#include "mylog.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL Java_com_example_importpeso_MainActivity_test
        (JNIEnv *, jobject){
    User::ZHANGSAN->show();
    User::LISI->show();
    LOGE("---------------------------------")
    User *u = new User();
    u->pure_vf();
    u->vf();
    u->setAge(30);
    int age = u->getAge();
    LOGE("getAge: %d", age)
    LOGE("getScore: %d", u->getScore())
    u->setScore(300);
    LOGE("getScore: %d", u->getScore())
    delete u;

    LOGE("--------------继承---------------")
    SuperUser su("haha");
    su.show();
    su.setScore(10000);
    su.show();
    return age;
}

#ifdef __cplusplus
}
#endif

