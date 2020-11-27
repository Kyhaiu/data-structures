#ifndef TSTACK_H_INCLUDED
#define TSTACK_H_INCLUDED

#include "../headers/TList.h"

template <typename T> class TStack{

    private:
        TList<T>* stack;
    
    public:
        TStack();
        TStack(TList<T>* _list);

        TList<T>* getStack();
        void setStack(TList<T>* _stack);
        
        //Metodos da pilha
        T top(); //Retorna o topo da pilha mas não retira
        void push(T value); //Insere no topo da pilha
        void pop(); //Remove o elemento do topo da pilha

        
};

#endif // TSTACK_H_INCLUDED