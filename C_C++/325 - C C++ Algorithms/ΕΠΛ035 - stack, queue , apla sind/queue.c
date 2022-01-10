#include <stdio.h>
#include "queue.h"
#include <stdlib.h>


//THIMISOU to elem για να αλλάζεις σε οποιοδίποτε τύπο 
void main(){
    int choise , elem , i ; 
    QUEUE q ; 
    
    queue_arxikopiw(&q);

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
    		printf("Dwse stoixeio: \n");
    		scanf("%d" , &elem);
    		if (queue_enqueue(&q,elem)){
    			printf("egine eisagwgi");
    		}
				else{
    				printf("den egine eisagogi\n");
    				
				}
				printf("\n");
				for(i=0 ; i<=q.finish ; i++){
				printf("|%d|" , q.array[i]);
			}
			break;
	case 2:
		if (queue_dequeue(&q,&elem)){
			printf("**\teksagogi toy| %d |" , elem);
			}
		else{
			printf("den egine afairesi");
		}
		printf("\n");
		for(i=0 ; i<=q.finish ; i++){
				printf("|%d|" , q.array[i]);
			}
		break;
				
    case 3:
		printf("h oura exei %d stoixeia\n",q.finish+1);
			printf("\n");
			for(i=0 ; i<=q.finish ; i++){
				printf("|%d|" , q.array[i]);
			}
			break;
	
	case 4:
		printf("end");
		exit(0);
		
	default: 
		printf("default");}
	
	}
}
