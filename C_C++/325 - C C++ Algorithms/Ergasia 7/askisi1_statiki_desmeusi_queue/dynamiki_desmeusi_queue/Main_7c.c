  #include <stdio.h>
  #include <stdlib.h>
  #include "Graph_7.h"
  
  void bfs(GRAPH *g ,int descover[g->N], int start);
  
  void main(){
  	GRAPH g;//grafos 
  	

  	 	
  	graph_init_from_file(&g,"ECE325_graph.txt");
	ektipwsi_graphou(g);
  	
  	int descover[g.N];//pinakas descover 
					  	int i ; 
						  for (i=0;i<g.N;i++){
						  	descover[i]=0;
						  }  
	  
  bfs(&g, descover, 0); 
						 
  
  }
  
  void bfs(GRAPH *g ,int descover[g->N], int start){
	int temp_i , temp_j ;
 
    Queue *q =(Queue*)malloc(sizeof(Queue));  //allocate memory gia QUEUE
  descover[start]=1;
  	printf("edsw")					  ;

  Enqueue(q,start);
  	printf("edw") ;

  printf("%d",start);
  printf("() ");
  

  int i = start ; //i =0 
  

  int j; 

  while(!IsEmptyQueue(q)){ 
  
  	 	Dequeue(q);
		temp_i= i;
		temp_j=	j;
  	
		  for(temp_j=0 ;temp_j<g->N ;temp_j++){
	  		  		
		  		if(	(g->array[temp_i][temp_j]!=0)&& descover[temp_j]==0 ){//(iparxi diadromi )&&(o komvos p thelw na paw den episkeuthike )
					descover[temp_j]=1;
		  			Enqueue(q,temp_j);

		  			printf("%d",temp_j);
		  			printf("(%d) ",temp_i);
		  		
				  }		  
		  }
		descover[temp_i]=1;	
		
	
  }
  exit(0);
  
}
  

  


