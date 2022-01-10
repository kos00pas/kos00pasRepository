#include<stdlib.h>
#include<stdio.h>
#include<string.h>


//QUEUE

typedef char type;

typedef struct node {          //KOMVOS TOU QUEUE
 	type data;
	struct node *next;
} Node;

 
typedef struct queue{           //DOMI TOU QUEUE
	int size;          
	Node *head;
	Node *tail;
}Queue;





//EPIKEFALIDES QUEUE

int IsEmptyQueue(Queue *q);        //EINAI ADIO TO QUEUE
Queue * InitQueue();                //ANIXE QUEUE
Node * InitQueueNode();               //DIMIOURGISE QUEUE
void Enqueue(Queue *q, type x);         //PROSTHESE STO QUEUE
void Dequeue(Queue *q);                 //AFERESE APO QUEUE
void PrintQueue(Queue *q);              //TYPWSE QUEUE
void PrintFirst(Queue *q);            //TYPWSE ARXI
void PrintLast(Queue *q);           //TYPWSE TELOS
type top(Queue *q);            //TYPWSE KORIFI




//STACKS
 
typedef struct{  //domi tou komvou stack
   type data;
   struct node *next;
  }NODE;

typedef struct{    //domi tou stack

  NODE *head;
  int size;
  }STACK;



//EPIKEFALIDES STACKS

int MakeEmptyStack(STACK *S);  //DIMIOURGA KENO STACK
void Push(STACK *S,char x);    //PROSTHESE STO STACK
void Pop(STACK *S);             //AFERESE APO SATCK
type Top(STACK *S);             //KORIFI TOU STACK
int IsEmpty(STACK *S);          //EINAI ADIO TO STACK

