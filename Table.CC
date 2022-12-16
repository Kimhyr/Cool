#include "Table.H"

template<typename Key_T, typename Value_T, Size Length_V>
Size Table<Key_T, Value_T, Length_V>::Hash(Key_T key) {
    Size result;
    for (Key_T ptr = key; ptr; ++ptr)
        result += *ptr;
    return result % Length_V;
}

template<typename Key_T, typename Value_T, Size Length_V>
Void Table<Key_T, Value_T, Length_V>::Insert(Entry<Key_T, Value_T> entry) {
    Size hash = Table::Hash(entry.Key);
    if (this->Entrties[hash]) {
        this->Entrties[hash] = entry;
        return;
    }
    this->Entrties[hash].Insert(entry);
}

