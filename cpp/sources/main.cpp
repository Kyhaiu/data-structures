#include <iostream>

#include "../sources/TList.cpp"
#include "../sources/TStack.cpp"
#include "../sources/TQueue.cpp"

int main(){

    TList<int>* lista = new TList<int>();

    int x = 1;
    lista->insertEnd(x);
    x++;
    lista->insertEnd(x);
    x++;
    lista->insertEnd(x);
    
    std::cout << "Lista simplesmente encadeada" << std::endl;
    lista->printl();

    delete lista;

    TStack<int>* stack = new TStack<int>();

    x = 1;
    stack->push(x);
    x++;
    stack->push(x);
    x++;
    stack->push(x);

    std::cout << "Pilha" << std::endl;
    std::cout << stack->top() << " ";
    stack->pop();
    std::cout << stack->top() << " ";
    stack->pop();
    std::cout << stack->top() << "\n";
    stack->pop();
    
    delete stack;

    TQueue<int>* queue = new TQueue<int>();

    x = 1;
    queue->enqueue(x);
    x++;
    queue->enqueue(x);
    x++;
    queue->enqueue(x);
    
    std::cout << "Fila" << std::endl;
    std::cout << queue->dequeue() << " ";
    std::cout << queue->dequeue() << " ";
    std::cout << queue->dequeue() << " ";

    return 0;
}