#ifndef TQUEUE_H_INCLUDED
#define TQUEUE_H_INCLUDED

#include "../headers/TList.h"

template <typename T> class TQueue{

    private:
        TList<T>* queue;
    
    public:
        //Construtor da classe(Cria uma fila vazia)
        TQueue();
        
        //Get e Set da classe
        TList<T>* getQueue();
        void setQueue(TList<T>* _queue);

        //Metodos da classe
        void enqueue(T _info); //coloca um elemento no final da lista
        T dequeue(); //retira o primeiro elemento da lista
        
};

#endif // TQUEUE_H_INCLUDED