 #include <stdio.h>
 #include <stdlib.h>
 
 typedef int elem ; 
 
 struct node {
 	elem data; 
 	struct node * next ; 
 };
 
 typedef struct node list_node;// komvos 
 typedef struct node * list_ptr; // sinonimo komvou 
