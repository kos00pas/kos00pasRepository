#define true 1 
#define false 0 

#define stack_size 10 

typedef int elem ; 

struct stack{
    elem array[stack_size];
    int top; 
};
typedef struct stack  STACK ; 

void arxikopoiei(STACK *s);
int empty(STACK *s);
int full(STACK s);
int push(STACK *s,elem x );
int pop(STACK *s, elem *x);