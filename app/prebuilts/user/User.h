#ifndef IMPORT_PESO_USER_H
#define IMPORT_PESO_USER_H

#include <string>
#include "Object.h"

class User:public Object{
public:
	int age;
	int score;
    std::string name;
    //静态变量根据符号进行初始化的, 顺序可以不一致
	static User* ZHANGSAN;
	static User* LISI;

    User();
	User(int age, int score, std::string name);
    //普通函数个数可以随意 ==>顺序无所谓
	void setAge(int age=0);
	int getAge();
    //虚函数表通过索引初始化具体实现的, 顺序必须保持一致,否则不能调用正确的函数
    virtual void pure_vf();
    virtual void pure_vf2();
    virtual ~User();
	virtual void setScore(int score = 0);
	virtual int getScore();
    virtual void show();
};

#endif