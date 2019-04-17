#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

int MAX_SIZE = 500;

template<class itemType>
class ArrayStack
{   
    private:
        itemType stack[MAX_SIZE]; //Array implementation of a stack
        int top; //position for the top of the stack
    public:
        ArrayStack();
        bool isEmpty();
        bool push(const itemType& newEntry);
        bool pop();
        itemType peek();
};

#include "ArrayStack.cpp"
#endif