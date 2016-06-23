#include "User.h"
#include <iostream>
#include <android/log.h>
#define  LOGE(format, args...)  __android_log_print(ANDROID_LOG_ERROR, "User.cpp", format, ##args);
User::User(int age, int score){
	this->age = age;
	this->score = score;
}
void User::setAge(int age){
	this->age = age;
}
int User::getAge(){
	return this->age;
}

void User::setScore(int score){
	LOGE("first virtual function: User::setScore")
	this->score = score;
}
int User::getScore(){
	LOGE("second virtual function: User::getScore")
	return this->score;
}

User::~User() { }