#include<stdlib.h>  //vivliothikes
#include<stdio.h>
#include<string.h>  //vivliothiki gia sinartisis string
#include <ctype.h>  //vilviothiki gia tin sinartisis tolow() gia na ta kani ola loweracse
#include"library_queue-stack.h"

int main(int argc, char* argv[]) {    //Perni parametro to plithos N ton fraseon

        STACK *stack=(STACK*)malloc(sizeof(STACK));        //allocate memory gia STACK
                                                         
        Queue *my_queue =(Queue*)malloc(sizeof(Queue));  //allocate memory gia QUEUE
        
        int trigger=1,k,newsize,N,i,size=0;   //dilosi metavliton
        char st1[50],ch,c1,c2;         //dilosi metavliton strings
        
   	N=atoi(argv[1]);       //FRASIS
	
        for(i=1;i<=N;i++){

            printf("\n Dwse  %dh frasi gia elegxo palindromias:",i);
	    gets(st1);
            size=strlen(st1);
	    MakeEmptyStack(stack);
	    newsize=size;

            for(int j=0; j<size; j++) {
             if((st1[j]>='A'&& st1[j]<='Z')||(st1[j]>='a'&& !st1[j]<='z')){
		        //apothikeusi lexis se queue kai stack
                	Push(stack, st1[j]);
                	Enqueue(my_queue, st1[j]);
                                                                           }

                              else
                              newsize--;        //aferese stoixia opws kommata kai special characters
		
                                      }
	

	          for(int j=0; j<newsize; j++) {   //elegxos an isounte to stack me to queue
 
		                                c1=tolower(Top(stack)); //kano olous tous xaraktires lowercase
		                                c2=tolower(top(my_queue)); //kano olous tou xaraktires lowercase

		                printf("STACK:%c  QUEUE:%c \n",c1,c2);   //EKTYPWSE PERIXOMENO STACK KAI QUEUE

		              if(c1!=c2){
			                trigger=0;
	         	                }

		                          Pop(stack);
		                          Dequeue(my_queue);

	                                       }    

	                               if(trigger==1)

		                       printf(" \n Einai palindromos!!!\n ");
	                               else 
		                       printf(" \n H frash den einai palindromos!!!\n ");
	    
                                        trigger=1;
	                                }
            free(stack); //apodesmevo  mnimi
            free(my_queue);
             return 0;
        
     }
