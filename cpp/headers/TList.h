#ifndef TLIST_H_INCLUDED
#define TLIST_H_INCLUDED

#include "TTie.h"

template <typename T> class TList{

    private:
        TList<T>* list; // ponteiro que referencia a própia lista
        TTie<T>* head;  //primeiro nó da lista
        TTie<T>* tail;  //utlimo nó na lista
        int _size;

    public:
        //Construtores da classe
        TList();
        TList(TTie<T>* head, TTie<T>* tail);

        //Metodos de obtenção dos valores dos atributos
        TList<T>* getList();
        TTie<T>* getHead();
        TTie<T>* getTail();
        int getSize();

        ///Métodos de atribuição para os atributos da lista
        void setList(TList<T>* _list);
        void setHead(TTie<T>* _newHead);
        void setTail(TTie<T>* _newTail);
        void updateSize(int _newSize);
        
        ///Metodos de atribuição em um elemento especifico da lista
        void insertBegin(T _info);
        void insertEnd(T _info);
        void removeBegin();

        //Outros metodos
        void printl();

};

#endif // TTIE_H_INCLUDED