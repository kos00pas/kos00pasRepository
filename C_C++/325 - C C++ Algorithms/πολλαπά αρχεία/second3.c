#include "second3.h"

void arxikopoiei(STACK *s){
    s->top=-1;
}

int empty(STACK *s){
    return s.top==-1 ; 
}

int full(STACK s ){
    return s.top==stack_size-1 ; 
}

int push( STACK *s , elem x ){
    if (full(*s){
        return false ; 
    }
    else {
        s->top++;
        s->array[s->top]=x;
        return true; 
    }
}

int pop (STACK *s , elem *x){
    if(empty(*s)){
        return false; 
    }
    else {
        *x=s->array[s->top];
        s->top--;
        return true ; 
    }
}