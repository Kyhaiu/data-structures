#include "../headers/TStack.h"
#include "../headers/TList.h"

template <typename T> TStack<T>::TStack(){
    TList<T>* _stack = new TList<T>();
    TStack<T>::setStack(_stack);
}

template <typename T> TStack<T>::TStack(TList<T>* _stack){
    TStack<T>::setStack(_stack);
}

template <typename T> TList<T>* TStack<T>::getStack(){
    return stack;
}

template <typename T> void TStack<T>::setStack(TList<T>* _stack){
    stack = _stack;
}

template <typename T> void TStack<T>::push(T value){
    TStack<T>::getStack()->insertBegin(value);
}

template <typename T> void TStack<T>::pop(){
    TStack<T>::getStack()->removeBegin();
}

template <typename T> T TStack<T>::top(){
    return TStack<T>::getStack()->getHead()->getValue();
}