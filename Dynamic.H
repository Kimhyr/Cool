#pragma once
#ifndef DYNAMIC_H
#define DYNAMIC_H

#include "Include.H"

template<typename Type_T>
struct Dynamic {
    Size Space;
    Size Length;
    Type_T *Data;

public:
    enum {INITIAL_SPACE = 8};

public:
    Dynamic(Size space = INITIAL_SPACE);

public:
    Void Insert(Type_T value);
    Bool Delete(Size index);
};

#endif // DYNAMIC_H
