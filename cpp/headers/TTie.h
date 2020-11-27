#ifndef TTIE_H_INCLUDED
#define TTIE_H_INCLUDED

template <typename T> class TTie{

    private:
        T value;
        TTie<T>* next;

    public:
        //Construtores da classe
        TTie();
        TTie(T _value, TTie<T>* _next);

        //Metodos da classe
        T getValue();       //retorna o conteudo do nó
        TTie<T>* getNext(); //retorna o proximo nó se existir

        void setValue(T _value);      //atribui um valor ao nó
        void setNext(TTie<T>* _next); //referencia um outro nó.
};

#endif // TTIE_H_INCLUDED