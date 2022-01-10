  #include <stdio.h>
 # define size 10
 
  typedef struct {
 	int list[size];
 	int front; 
 	int rear; 
 }queue;
 
 //orismos
		int is_emp(queue *q);
		void init(queue *q );
		void enqueue(int x , queue *q);
		void dequeue(queue *q );

 //telos orismos 

 void main(){
 	int i;
 	queue * q ; 
 	init(&q);
 	for(i=0;i<10;i++){
 		enqueue(i,&q);
	 }
	 printf("\n");
	 for(i=0;i<10;i++){
 		dequeue(&q);
	 }
 		printf("s");
 		
 }

  void init(queue *q ){
 	q->front=0;							
	q->rear=0;
 }
 
void enqueue(int x , queue *q){
	if(q->rear <size){
		q->list[q->rear]=x;
		printf("%d",q->list[q->rear]);
		q->rear++;
	}
}
 void dequeue(queue *q ){
	if(!is_emp(q) && ((q->front)<(q->rear))){
		printf("%d",q->list[q->front]);
		q->front +=1 ; 
	}
}

 int is_emp(queue *q){
 	return(q->front==q->rear);
 }
