#include <cassert>
#include "arrayStack.h"

template<class itemType>
ArrayStack<itemType>::ArrayStack(){
    top = -1;
}

template<class itemType>
bool ArrayStack<itemType>::isEmpty(){
    return top < 0;          
}

template<class itemType>
bool ArrayStack<itemType>::push(const itemType& newEntry){
        bool result = false;
        if(top < MAX_SIZE - 1){
            top++;
            stack[top] = newEntry;
            result = true;
        }
    return result;
}

template<class itemType>
bool ArrayStack<itemType>::pop(){
    bool result = false;
    if(!isEmpty()){
        top--;
        result = true;
    }
    return result;
}

template<class itemType>
itemType ArrayStack<itemType>::peek(){
    assert(!isEmpty());
    return stack[top];
}
