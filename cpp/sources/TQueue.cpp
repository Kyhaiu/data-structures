#include "../headers/TQueue.h"
#include "../headers/TList.h"

template <typename T> TQueue<T>::TQueue(){
    TList<T>* _newQueue = new TList<T>();
    setQueue(_newQueue);
}

template <typename T> TList<T>* TQueue<T>::getQueue(){
    return queue;
}

template <typename T> void TQueue<T>::setQueue(TList<T>* _queue){
    queue = _queue;
}

template <typename T> void TQueue<T>::enqueue(T _value){
    getQueue()->insertEnd(_value);
}

template <typename T> T TQueue<T>::dequeue(){
    T ret = getQueue()->getHead()->getValue();
    getQueue()->removeBegin();
    return ret;
}