 #define TRUE  1
 #define FALSE 1 
# include <stdio.h>
 #define queue_size 10
 
 typedef int elem;
 
 struct queue{
 	elem array[queue_size];
	int finish ; 
 };
 
 typedef struct queue QUEUE;
 
 void queue_arxikopiw(QUEUE *q){
    q->finish=-1;
}
 
int queue_empty(QUEUE q ){
	return q.finish==-1;
	
}

int  queue_full(QUEUE q){
	return q.finish==queue_size ; 
}

int queue_enqueue(QUEUE *q , elem x ){
	
		if(queue_full(*q)){
			return FALSE;
		}
		else{
			q->finish++;
			q->array[q->finish] =x;
			return TRUE;
		}
}

int queue_dequeue (QUEUE *q, elem *x){
	int i ; 
	//otan DEN exei stoixeio na vgei 
	if(queue_empty(*q)){
		return FALSE; 
	}
	//otan exei stoixeio na vgei 
	else{ 
		//apothikeuse to stoixio pou eksagete 
		*x=q->array[0];
		
		for(i=0 ; i<q->finish ; i++ ){

			q->array[i]=q->array[i+1];
		
		
		}
			q->finish --;
			return TRUE; 
	}
}
