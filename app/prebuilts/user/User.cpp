#include "User.h"
#include <android/log.h>
#include "mylog.h"

User* User::ZHANGSAN = new User(0, 20, "张三");
User* User::LISI = new User(20, 30, "李四");
User::User(){
	this->age = 0;
	this->score = 100;
	this->name = "hello world";
}
User::User(int age, int score, std::string name){
	this->age = age;
	this->score = score;
	this->name = name;
}

void User::pure_vf(){
	LOGE("invoke User::pure_vf()")
};
void User::pure_vf2(){
	LOGE("invoke User::pure_vf2()")
};

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
void User::show(){
	LOGE("user:%s, age:%d, score%d", this->name.c_str(), this->age, this->score)
}


User::~User() {
	LOGE("delete User")
}