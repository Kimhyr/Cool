#pragma once
#ifndef SINGLY_H
#define SINGLY_H

#include "Include.H"

template<typename Type_T>
struct Singly {
    Type_T Value;
    SIngly *Next;

public:
    Singly(Type_T value);

public:
    Void Destroy();
    Void Insert(Singly<Type_T> *node);
    Bool Delete(Singly<Type_T> *target);
    Size GetLength();
};

#endif // SINGLY_H
