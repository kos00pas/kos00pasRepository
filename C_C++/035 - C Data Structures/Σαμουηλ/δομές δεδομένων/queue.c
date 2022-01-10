#include <stdio.h>
#include "queue.h"
#include <stdlib.h>
////////SOSOSOSOSOSOSOSOSOSOSO
//exei thema sto dequeue //gia n t deis  vale stoixeia bgaze kai ektiponee 
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
			break;
	case 2:
		if (queue_dequeue(&q,&elem)){
			printf("eksagogi toy %d" , elem);
			}
		else{
			printf("den egine afairesi");
		}
		break;
				
    case 3:
		printf("h oura exei %d stoixeia\n",q.finish+1);
			for(i=0 ; i<=q.finish ; i++){
				printf("|%d" , q.array[i]);
			}
			break;
	
	case 4:
		printf("end");
		exit(0);
		
	default: 
		printf("default");}
	
	}
}
