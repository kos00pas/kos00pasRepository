#include <stdio.h>
#include <stdlib.h>
#define  queue_size 100

struct graph {
	int **array; 
	int N; //korifes 
	int E; //akmes 
};

typedef struct node {          //KOMVOS TOU QUEUE
 	int data;
	struct node *next;
} Node;

 
typedef struct queue{           //DOMI TOU QUEUE
	int size;          
	Node *head;
	Node *tail;
}Queue;



typedef struct graph GRAPH;
void ektipwsi_graphou(GRAPH g);
void add_akmi(GRAPH g , int korifi_1 , int korifi_2 , int weight);
void graph_init_from_file(GRAPH *g , char *filename);

		//queue   --------------------
	int IsEmptyQueue(Queue *q);        //EINAI ADIO TO QUEUE
	Queue * InitQueue();                //ANIXE QUEUE
	Node * InitQueueNode();               //DIMIOURGISE QUEUE
	void Enqueue(Queue *q, int x);         //PROSTHESE STO QUEUE
	void Dequeue(Queue *q);                 //AFERESE APO QUEUE

		//----------------------------

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

void Enqueue(Queue *q, int x){
	Node *node = InitQueueNode();
	node->data= x;

	if(q->head==NULL){
		q->head=node;
}
	else{
		q->tail->next=node;

}
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

		
// graph 
void add_akmi(GRAPH g , int korifi_1 , int korifi_2 , int weight){

	//ean eimaste ektos oriwn 
	if(korifi_1 <0 || korifi_2<0 ||korifi_1>g.N ||korifi_2>g.N){
		printf("extos oriwn");
		exit(0);
	}
	//ean iparxi idi i akmi 
	if(g.array[korifi_1][korifi_2]==1){
		printf("H akmi (%d , %d) yparxi idi", korifi_1,korifi_2);
	}
	//alliws vazv to stoixeio
		else{
			g.array[korifi_1][korifi_2]=weight;

			}
}

void ektipwsi_graphou(GRAPH g){
	int i,j;

	printf("\n    ");
	for (i=0; i<g.N; i++)//orizzonties grammes 
		printf("%3d", i);

	printf("\n   -----------------\n");

	for (i=0; i<g.N; i++)
	{
		printf("%3d|", i);//katakorides grammes 
		for (j=0; j<g.N; j++){// gia kathe xwra , to apotelesma 
			printf("%3d", g.array[i][j]);
		}
		printf("\n");
	}

}

void graph_init_from_file(GRAPH *g , char *filename){
		
	int i , j , w;
	FILE *fo;
	
	fo=fopen(filename , "r");  
	fscanf(fo ,"%d", &g->N);// n= korifes
	printf("korifes: %d\n", g->N);
	
	fscanf(fo ,"%d", &g->E);// E= akmes
	printf("akmes : %d\n", g->E);
	
	
	g->array =(int**)malloc(sizeof(int*)*g->N);	 //dimiourgia korifwn   	
				if(!g->array){
					printf("adinamia desmeusiss");
					exit(0);
				}		
	for(i=0 ; i<g->N; i++){// pithanes diadromes gia kathe xwra 
		g->array[i]= (int*)malloc(sizeof(int)*g->N);
		
				if(!g->array[i]){
					printf("adinamia desmeusisss");
					exit (0) ;
				}
			
			for(j=0;j<g->N;j++){ // arxikopoiisi me midenika 
				g->array[i][j]=0;
			}
		}
						
	while(fscanf(fo,"%d %d %d", &i , &j , &w)  !=EOF ){
		if(i< 0 || i>g->N||j< 0 || j>g->N||w<0){
			printf("error in the inputs [%d ,%d ,%d]",i,j,w);
					exit(0) ;
		}
		add_akmi(*g , i,j, w);	
	    printf("-->%d %d %d <--\n" ,i,j , w) ; //gia skopous epiveveosis 		

	}
		
		fclose(fo);
	
	}	


