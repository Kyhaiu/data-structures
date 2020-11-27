#include <iostream>

#include "../headers/TList.h"
#include "TTie.cpp"

template <typename T> TList<T>::TList(){
    TList<T>::setHead(nullptr);
    TList<T>::setTail(nullptr);
    _size = 0;
}

template <typename T> TList<T>::TList(TTie<T>* _head, TTie<T>* _tail){
    TList<T>::setHead(_head);
    TList<T>::setTail(_tail);
    if(_head != nullptr and _tail != nullptr){
        _size = 1;
    } else{
        _size = 0;
    }
}

template <typename T> TList<T>* TList<T>::getList(){
    return list;
}

template <typename T> TTie<T>* TList<T>::getHead(){
    return head;
}

template <typename T> TTie<T>* TList<T>::getTail(){
    return tail;
}

template <typename T> int TList<T>::getSize(){
    return _size;
}

template <typename T> void TList<T>::setList(TList<T>* _list){
    list = _list;
}

template <typename T> void TList<T>::setHead(TTie<T>* _head){
    head = _head;
}

template <typename T> void TList<T>::setTail(TTie<T>* _tail){
    tail = _tail;
}

template <typename T> void TList<T>::updateSize(int _newSize){
    _size += _newSize;
}

template <typename T> void TList<T>::insertBegin(T _info){    
    TTie<T>* tie =  new TTie<T>(_info, nullptr);
    
    if (getHead() == nullptr){
        TList<T>::setHead(tie);
        TList<T>::setTail(tie);
        updateSize(1);
    } else{
        TTie<T>* oldHead = getHead();
        tie->setNext(oldHead);
        TList<T>::setHead(tie);
        TList<T>::updateSize(1);
    }
}

template <typename T> void TList<T>::insertEnd(T _info){    
    TTie<T>* tie =  new TTie<T>(_info, nullptr);
    
    if (getHead() == nullptr){
        TList<T>::setHead(tie);
        TList<T>::setTail(tie);
        updateSize(1);
    } else{
        TTie<T>* element = getHead();

        while(element->getNext() != nullptr){
            element = element->getNext();
        }

        element->setNext(tie);
        updateSize(1);
    }
}

template <typename T> void TList<T>::removeBegin(){
    TTie<T>* oldHead = getHead();
    setHead(oldHead->getNext());

    delete oldHead;
}

template <typename T> void TList<T>::printl(){
    TTie<T>* element = getHead();

    while (element != nullptr){
        std::cout << element->getValue() << std::endl;
        element = element->getNext();
    }
}