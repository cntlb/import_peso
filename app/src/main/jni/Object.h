//
// Created by user on 2016/6/24.
//

#ifndef IMPORT_PESO_OBJECT_H
#define IMPORT_PESO_OBJECT_H


class Object {
public:
    virtual ~Object();
    virtual void vf();
    virtual void pure_vf()=0;
    virtual void pure_vf2()=0;
    virtual void vf2();
};


#endif //IMPORT_PESO_OBJECT_H
