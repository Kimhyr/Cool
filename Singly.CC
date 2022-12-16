#include "Singly.H"

template<typename Type_T>
Singly<Type_T>::Singly(Type_T value)
    : Value(value),
      Next(NIL) {}

template<typename Type_T>
Void Singly<Type_T>::Destroy() {
    for (Singly<Type_T> *node; this; this = node) {
        node = this->Next;
        delete this;
    }
}

template<typename Type_T>
Void Singly<Type_T>::Insert(Singly<Type_T> *node) {
    singly<Type_T> **curr = &this->Next;
    while (*curr)
        curr = &(*curr)->Next;
    *curr = node;
}

template<typename Type_T>
Bool Singly<Type_T>::Delete(Singly<Type_T> *target) {
    Singly<Type_T> **curr = &this->Next;
    for (curr = &this->Next; *curr != target; curr = &(*curr)->Next)
        if (!curr)
            return false;
    *curr = target->Next;
    delete target;
    return true;
}

template<typename Type_T>
size Singly<Type_T>::GetLength() {
    Size size = 0;
    for (Singly<Type_T> *node = this->Next; node; ++size)
        node = node->Next;
    return size;
}

