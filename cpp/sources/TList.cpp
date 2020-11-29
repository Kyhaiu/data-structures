#include <iostream>

#include "../headers/TList.h"
#include "../sources/TTie.cpp"

template <typename T> TList<T>::TList(){
    TList<T>::setHead(NULL);
    TList<T>::setTail(NULL);
    _size = 0;
}

template <typename T> TList<T>::TList(TTie<T>* _head, TTie<T>* _tail){
    TList<T>::setHead(_head);
    TList<T>::setTail(_tail);
    if(_head != NULL and _tail != NULL){
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
    //cria um novo nó que sera o inicio da lista(head)    
    TTie<T>* tie =  new TTie<T>(_info, NULL, NULL);
    
    //caso a lista seja vazia, apenas altera-se a head e tail.
    if (getHead() == nullptr){
        TList<T>::setHead(tie);
        TList<T>::setTail(tie);
        updateSize(1);
    } else{
        TTie<T>* oldHead = TList<T>::getHead();
        tie->setNext(oldHead);
        oldHead->setPrevious(tie);
        TList<T>::setHead(tie);
        TList<T>::updateSize(1);
    }
}

template <typename T> void TList<T>::insertEnd(T _info){
    //cria um novo nó que sera inserido no final da lista  
    TTie<T>* tie =  new TTie<T>(_info, NULL, NULL);
    
    //caso a lista seja vazia, apenas altera-se a head e tail.
    if (getTail() == nullptr){
        TList<T>::setHead(tie);
        TList<T>::setTail(tie);
        updateSize(1);
    } else{
        TTie<T>* oldTail = getTail();
        //faz a antiga tail referenciar sua sucessora.
        oldTail->setNext(tie);
        //faz a nova cauda referenciar a sua antecessora.
        tie->setPrevious(oldTail);
        //Atualiza a referencia da cauda
        TList<T>::setTail(tie);
        updateSize(1);
    }
}

template <typename T> void TList<T>::removeBegin(){
    TTie<T>* oldHead = TList<T>::getHead();
    TTie<T>* newHead = TList<T>::getHead()->getNext();

    if(newHead == NULL){
        return;
    }
    newHead->setPrevious(NULL);

    TList<T>::setHead(newHead);
    delete oldHead;
}

template <typename T> void TList<T>::printl(){
    TTie<T>* element = TList<T>::getTail();

    while (element != NULL){
        std::cout << element->getValue() << std::endl;
        element = element->getPrevious();
    }
}