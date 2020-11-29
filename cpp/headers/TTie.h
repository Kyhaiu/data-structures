#ifndef TTIE_H_INCLUDED
#define TTIE_H_INCLUDED

template <typename T> class TTie{

    private:
        T value;
        TTie<T>* next;
        TTie<T>* previous;

    public:
        //Construtores da classe
        TTie();
        TTie(T _value, TTie<T>* _previous, TTie<T>* _next);

        //Metodos da classe
        T getValue();       //retorna o conteudo do nó
        TTie<T>* getPrevious(); //retorna o nó anterior caso esteja lidando com uma lista duplamente encadeada
        TTie<T>* getNext(); //retorna o proximo nó se existir

        void setValue(T _value);      //atribui um valor ao nó.
        void setPrevious(TTie<T>* _previous); //referencia um nó ao seu anteior caso exista.
        void setNext(TTie<T>* _next); //referencia um outro nó ao seu posterior caso exista.
};

#endif // TTIE_H_INCLUDED