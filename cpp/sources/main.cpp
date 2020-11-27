#include <iostream>

#include "../sources/TList.cpp"
#include "../sources/TStack.cpp"

int main(){

    TList<int>* lista = new TList<int>();

    int x = 1;
    lista->insertEnd(x);
    x++;
    lista->insertEnd(x);
    x++;
    lista->insertEnd(x);
    lista->printl();

    TStack<int>* stack = new TStack<int>();

    x = 1;
    stack->push(x);
    x++;
    stack->push(x);
    x++;
    stack->push(x);

    std::cout << stack->top() << " ";
    stack->pop();
    std::cout << stack->top() << " ";
    stack->pop();
    std::cout << stack->top() << " ";
    stack->pop();

    return 0;
}