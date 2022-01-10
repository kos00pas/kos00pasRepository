 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
 #define TRUE 1
  #define FALSE 0 
  #define SIZE 5
  #include <stdbool.h>


struct graph {
	int **array; 
	int N; //korifes 
};

typedef struct graph GRAPH;
void ektipwsi_graphou(GRAPH g);
void add_akmi(GRAPH *g , int korifi_1 , int korifi_2 , int weight);
int  graph_init_from_file(GRAPH *g , char *filename);
void Floyd(GRAPH g);
void print_D(int D[SIZE][SIZE] );

 
  int  main(void){
  	GRAPH g;   	  	
    graph_init_from_file(&g,"ECE325_graph.txt");
	ektipwsi_graphou(g);
	Floyd(g);

	return 0 ; 
}

void Floyd(GRAPH g){
	
	int  D[g.N][g.N];
	//arxikopoiisi me ta idia stoixia me ton grafo 
	int i,j,k; 
	/* D0*/ 		printf("\n\n\nD0:\n");
	for (i=0; i<(g.N); i++){	//arxikopoiisi me ta idia stoixia me ton grafo 		 
		for (j=0; j<(g.N); j++){
			D[i][j]= g.array[i][j];
			
			if(g.array[i][j]==0){
				D[i][j]=1000;
			}
		}	
	}
	print_D(D);//sinartsi pou na perni to D kai na to ektipwnei [eisodos: D]  
	
	/*D1-meta */ // FLoyd from lecture
	for (i=0; i<(g.N); i++){	//[][]=0		 
		D[i][i]=0;
	}
	for(k=0;k<SIZE;k++){
		for(i=0;i<SIZE;i++){
			for(j=0;j<SIZE;j++){
				//new D
				//printf("D[%d][%d]=%d\n",i,j,D[i][j]);
				if( (D[i][j]) > (D[i][k] + D[k][j]) ){
					D[i][j]= D[i][k] + D[k][j]  ;
				//	printf("**D[%d][%d]=%d\n**",i,j,D[i][j]);
				}
			}
		}
	printf("D%d: \n",k);	
	print_D(D);//kathe neo D	
	}
	
}



void print_D(int D[SIZE][SIZE]){
		int i , j ; 
		for (i=0; i<SIZE; i++){						printf("%3d|", i);//katakorides grammes 
	
		for (j=0; j<SIZE; j++){// gia kathe xwra , to apotelesma 
			if(D[i][j]==1000){
				printf("%3c",221);	
			}
			else{
			printf("%3d", D[i][j] );
			}
		}
		printf("\n");
	}
}



void ektipwsi_graphou(GRAPH g){
	int i,j; 	printf("\n"); 	printf("    ");
	for (i=0; i<SIZE; i++)   printf("%3d", i);  	printf("\n---------------------------------\n");
	
	for (i=0; i<SIZE; i++){						printf("%3d|", i);//katakorides grammes 
	
		for (j=0; j<SIZE; j++){// gia kathe xwra , to apotelesma 
			printf("%3d", g.array[i][j]);
		}
		printf("\n");
	}

}








void add_akmi(GRAPH* g , int korifi_1 , int korifi_2 , int weight){
	
	//ean eimaste ektos oriwn 
	if(korifi_1 <0 || korifi_2<0 ||korifi_1>g->N ||korifi_2>g->N){

		printf("extos oriwn");
		exit(0);
	}
	//ean iparxi idi i akmi 	
	
	if(g->array[korifi_1][korifi_2]==1){

		printf("H akmi (%d , %d) yparxi idi", korifi_1,korifi_2);
	}
	//alliws vazv to stoixeio
		else{	
			g->array[korifi_1][korifi_2]=weight;
			printf("-->%d %d %d <--\n" ,korifi_1,korifi_2, g->array[korifi_1][korifi_2]) ; //gia skopous epiveveosis 		
			}
}



int  graph_init_from_file(GRAPH *g , char *filename){
		
	int i , j , w,d;
	FILE *fo;
	
	fo=fopen(filename , "r");  
	fscanf(fo ,"%d", &g->N);
	printf("diavazw %d xwres \n", g->N);
	
	g->array =(int**)malloc(sizeof(int*)*g->N);	 //xwres 	

				if(!g->array){
					printf("adinamia desmeusiss");
					exit(0);
				}
						
	for(i=0 ; i<g->N; i++){// pithanes diadromes gia kathe xwra 
		g->array[i]= (int*)malloc(sizeof(int)*g->N);

				if(!g->array[i]){
					printf("adinamia desmeusisss");
					exit(0);
				}
					
			
			for(j=0;j<g->N;j++){ // arxikopoiisi me midenika 
				g->array[i][j]=0;
			}
		}
	fscanf(fo ,"%d", &d);
	printf("diavazw %d diadromes \n",d );	
	while(fscanf(fo,"%d %d %d", &i , &j , &w)  !=EOF ){
			add_akmi(g ,i,j, w);	
			g->array[i][i]=0;
	}

	fclose(fo);
	return 0 ; 
}
	
