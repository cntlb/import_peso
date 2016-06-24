//
// Created by user on 2016/6/24.
//

#ifndef IMPORT_PESO_SUPERUSER_H
#define IMPORT_PESO_SUPERUSER_H

#include "User.h"
class SuperUser:public User{
public:

    SuperUser(std::string name);
    SuperUser(int age, int score, std::string name);

    virtual void setScore(int score);

    virtual void show();
};
#endif //IMPORT_PESO_SUPERUSER_H
