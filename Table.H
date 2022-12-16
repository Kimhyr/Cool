#pragma once
#ifndef TABLE_H
#define TABLE_H

#include "Include.H"

template<typename Key_T, typename Value_T>
struct Table {
    Size Hash(Key_T key);

    Void Insert(Key_T key, Value_T value);
    Void Delete(Key_T key);
    
};

#endif // TABLE_H
