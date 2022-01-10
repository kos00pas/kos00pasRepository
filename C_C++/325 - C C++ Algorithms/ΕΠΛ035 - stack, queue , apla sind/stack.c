#include <stdio.h>
#include "stack.h"
#include <stdlib.h>
//THIMISOU to elem για να αλλάζεις σε οποιοδίποτε τύπο 

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
        printf("4: is it empty ?\n");
    	printf("5: is it full ?\n");
        printf("6: eksodos\n\n--------\n");
        
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
                printf("|%d|\n",st.array[i]);
                }       
        break;
        
    case 4:
			if (TRUE == (is_it_empty_stack(&st))){
				printf("H stiva einai ADEIA ");
				break; 
			}   
			else{
				printf("H stiva DEN  einai ADEIA");
			} 
	
	case 5:
			if (TRUE == (is_it_full_stack(&st))){
				printf("H stiva einai GEMATI ");
				break; 
			}   
			else{
				printf("H stiva DEN einai GEMATI");
			} 
        
        
        
        

    case 6:
            printf("end");
            exit(0);        
        break;  

    default:
        break;
    }
}
}
