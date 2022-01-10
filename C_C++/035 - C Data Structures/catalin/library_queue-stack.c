#include "library_queue-stack.h" // dilosi vivliothikis pou dimiourgisame

//SINARTISIS STACK APO TIN YLOPOISH TIS TAXIS

int MakeEmptyStack(STACK *S){
    S->size = 0;
    S->head = NULL;
                            }


void Pop(STACK *S){

    NODE *p = NULL;
    if ((S->size) > 0){
        p = S->head;
        S->head = p->next;
        free(p);
        (S->size)--;
                      }
                  }


void Push(STACK *S,char x){
    
    NODE *p = NULL; 
      p=(NODE *)malloc(sizeof(NODE));
      p->data = x;
      p->next = S->head;
      S->head = p;
      (S->size)++;
                          }




type Top(STACK *S){

      if ((S->size) > 0){
      return S->head->data;
                        }
                  }

int IsEmpty(STACK *S){

    return(S->size==0);
}

//SINARTISIS QUEUE APO LAB5

int IsEmptyQueue(Queue *q){
	if(q->size>0)
		return 0;

	return 1;
}

Queue * InitQueue(){
	Queue *newQueue;

    
    
	return newQueue;
}

Node * InitQueueNode(){
	Node *newNode = (Node *) malloc(sizeof(Node));
	newNode->next=NULL;

	return newNode;
}

void Enqueue(Queue *q, char x){
	Node *node = InitQueueNode();
	node->data= x;
	
	if(q->head==NULL)
		q->head=node;
	else
		q->tail->next=node;
	q->tail=node;
	(q->size)++;
}


void Dequeue(Queue *p){
	if(p->head==NULL)
		return;
	Node *temp= p->head;
	p->head= p->head->next;
	free(temp);
	(p->size)--;
	return;
}

void PrintQueue(Queue *q){
	int i;
    if (!IsEmptyQueue(q)) {
	  Node *tmp = q->head;
	  for(i=0; i<q->size; i++, tmp=tmp->next) printf("%d\t", tmp->data);
        printf("\n");
    }
    else
        printf("Queue is Empty\n");
}

void PrintFirst(Queue *q){
    if (!IsEmptyQueue(q))
        printf("First Node:%d\n", q->head->data);
    else
        printf("Queue is Empty\n");
}

void PrintLast(Queue *q){
    if (!IsEmptyQueue(q))
        printf("Last Node:%d\n", q->tail->data);
    else
        printf("Queue is Empty\n");
}

type top(Queue *q){

	if(!IsEmptyQueue(q))
		return q->head->data;
}


