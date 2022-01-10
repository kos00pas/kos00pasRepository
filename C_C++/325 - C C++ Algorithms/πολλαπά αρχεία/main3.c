#include <stdio.h> 
#include <stdlib.h>
#include "second3.h"

void main(){

    int choise , elem , i ;
    STACK st ;  
    arxikopoiei(&st);

    while(1){
        printf(" menou stivas \n                -------------\n        1. othisi\n        2.eksagogi\n        3.ektyposi\n        4.esodos\n\n        dwse tin epilogi sou ");
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
                            printf("eksagogi %c DONE",elem);
                        }                                                                                               
                        else 
                            printf("eksagogi NOT_DONE (empty stack)");

                break;
            //-----------------------------------------------

            case 3: //3.ektyposi
                        printf("H stoiva exei %d stoixeia: ", st.top+1);
                        for(i=0;i<=st.top;i++){
                            printf("|%3c",st.array[i]);
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