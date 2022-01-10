# include <stdio.h>
#define TRUE 1
#define FALSE 0 
#define STACK_SIZE 10

typedef int element ; //Το element είναι τύπου int 
                      //¨οταν αλλάξω το int σε οποιοδήποτε άλλο τύπο δεδομένων 
                      // Τότε όταν γράφω element στο πρόγραμμα θα εννοώ εκείνον 
                      //Στην περίπτωση μας element = int 

struct stack{
    element array[STACK_SIZE];
    int top ; 
};

typedef struct stack STACK ; 

//Συναρτήσεις STACK 


void arxikopiw_stack(STACK *s){
    s->top=-1;
}

int is_it_empty_stack(STACK *s){
    return (s->top==-1) ; 
}

int is_it_full_stack(STACK *s){
    return (s->top==STACK_SIZE-1);
}

int push_in_stack(STACK *s , element x){
    if((is_it_full_stack(s) == TRUE )){
        return FALSE ; 
    }
    else{
        s->top++ ;
        s->array[s->top]=x; 
        return TRUE;  
    }
}

int pop_in_stack(STACK *s , element *x){
    if((is_it_empty_stack(s) == TRUE)){
        return FALSE ; 
    }
    else {
        *x=s->array[s->top];
        s->top--;
        return TRUE; 
    }    
}
