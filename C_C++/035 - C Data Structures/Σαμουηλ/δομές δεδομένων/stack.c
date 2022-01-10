#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

void main(){
    int choise , elem , i ; 
    STACK st ; 

    arxikopiw_stack(&st) ; 

    while(TRUE){
        printf("MENU \n");
        printf("---------\n");
        printf("1: othisi \n");
        printf("2: eksagogi\n");
        printf("3: ektypws\n");
        printf("4: eksodos\n\n--------\n");
        
          printf("Dwse epilogi"); 
          scanf("%d",&choise);       
    

    switch (choise){
    case 1:
            printf("Dwse stoixeio \n");
              scanf("%d" , &elem);
              
            if(push_in_stack(&st , elem )){
                printf("Egine othisi \n");
            }  
            else{
                printf("Den egine othisi \n");
            }
        break;

    case 2:
            if(pop_in_stack(&st , &elem)){
                printf("Airethike to stoixeio%d \n" ,elem);
                }
            else{
                printf("Den afairethike stoixeio  \n");
                }
        break;
    
    case 3:
            printf("I stoiva exei %d stoixeia \n ", st.top+1);
            for(i=0 ; i<=st.top ; i++){
                printf("|%d",st.array[i]);
                }       
        break;

    case 4:
            printf("end");
            exit(0);        
        break;  

    default:
        break;
    }
}
}
