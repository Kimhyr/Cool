#pragma once
#ifndef TABLE_H
#define TABLE_H

#include "Include.H"
#include "Entry.H"
#include "Singly.H"

template<typename Key_T, typename Value_T, Size Length_V>
struct Table {
    Singly<Entry<Key_T, Value_T>> Entrties[Length_V];

    Size Hash(Key_T key);

    Void Insert(Entry<Key_T, Value_T> entry);
    Void Delete(Key_T key);

};

#endif // TABLE_H
