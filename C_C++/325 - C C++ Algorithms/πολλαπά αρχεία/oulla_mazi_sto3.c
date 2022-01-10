#include <stdio.h> 
#include <stdlib.h>

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

void main(){

    int choise , elem , i ;
    STACK st ;  
    arxikopoiei(&st);

    while(1){
        printf("\n menou stivas \n                -------------\n        1. othisi\n        2.eksagogi\n        3.ektyposi\n        4.esodos\n\n        dwse tin epilogi sou ");
		scanf("%d",&choise);
		
        //-----------------------------------------------
    switch (choise){
    	
            case 1: //1. othisi
                        printf("Dwse stoixeio\n"); 
                        scanf("%d",&elem);
                            if(push(&st ,elem)){
                                printf("othisi DONE\n");
                            }
                            else 
                                printf("othisi NOT_DONE");
                break;
            //-----------------------------------------------

            case 2: //2.eksagogi
                        if(pop(&st,&elem)){
                            printf("eksagogi %d DONE",elem);
                        }                                                                                               
                        else 
                            printf("eksagogi NOT_DONE (empty stack)");

                break;
            //-----------------------------------------------

            case 3: //3.ektyposi
                        printf("H stoiva exei %d stoixeia: ", st.top+1);
                        for(i=0;i<=st.top;i++){
                            printf("|%3d",st.array[i]);
                        }


                break;
            //-----------------------------------------------

            case 4: //4.esodos
                        printf("eksodos");
                        exit(0);
                break;       
            //-----------------------------------------------

            default:
                        printf("inside default");                        
                break;
            }
    }
}


void arxikopoiei(STACK *s){
    s->top=-1;
}

int empty(STACK *s){
    return (s->top==-1) ; 
}

int full(STACK s ){
    return s.top==stack_size-1 ; 
}

int push( STACK *s , elem x ){
    if (full(*s)){
        return false ; 
    }
    else {
        s->top++;
        s->array[s->top]=x;
        return true; 
    }
}

int pop (STACK *s , elem *x){
    if(empty(s)){
        return false; 
    }
    else {
        *x=s->array[s->top];
        s->top--;
        return true ; 
    }
}
