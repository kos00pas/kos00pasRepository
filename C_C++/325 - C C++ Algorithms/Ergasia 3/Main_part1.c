  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "Graph.h"
  #define TRUE 1
  #define  FALSE 0 
  
  int main(void){
  	GRAPH g; 
  	int i , j ; 
  	int num_of_countries; 
  	
	
  	
  	num_of_countries = graph_init_from_file(&g,"graph.graph");
  	ektipwsi_graphou(g);
  	ektypwsi_visit(g);

  return 0 ;
}
