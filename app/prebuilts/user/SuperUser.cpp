//
// Created by user on 2016/6/24.
//
#include "SuperUser.h"
#include <android/log.h>
#include "mylog.h"


SuperUser::SuperUser(std::string name):User(0,0,name){};

SuperUser::SuperUser(int age, int score, std::string name) : User(age, score, name) {}

void SuperUser::setScore(int score) {
    User::setScore(score);
    LOGE("SuperUser::setScore")
}

void SuperUser::show() {
    User::show();
    LOGE("SuperUser:%s, age:%d, score:%d", this->name.c_str(), this->age, this->score)
}

