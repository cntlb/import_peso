//
// Created by user on 2016/6/24.
//

#include "Object.h"
#include <android/log.h>
#include "mylog.h"

Object::~Object(){}

void Object::vf(){
    LOGE("invoke Object::vf()")
}

void Object::vf2(){
    LOGE("invoke Object::vf2()")
}