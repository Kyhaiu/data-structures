#include "../headers/TTie.h"

template <typename T> TTie<T>::TTie(){

}

template <typename T> TTie<T>::TTie(T _value, TTie<T>* _previous, TTie<T>* _next){
    setValue(_value);
    setPrevious(_previous);
    setNext(_next);
}

template <typename T> T TTie<T>::getValue(){
    return value;
}

template <typename T> TTie<T>* TTie<T>::getPrevious(){
    return previous;
}

template <typename T> TTie<T>* TTie<T>::getNext(){
    return next;
}

template <typename T> void TTie<T>::setValue(T _value){
    value = _value;
}

template <typename T> void TTie<T>::setPrevious(TTie<T>* _previous){
    previous = _previous;
}

template <typename T> void TTie<T>::setNext(TTie<T>* _next){
    next = _next;
}