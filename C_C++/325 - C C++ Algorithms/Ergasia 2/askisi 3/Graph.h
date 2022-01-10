#include <stdio.h>
#include <stdlib.h>

struct graph {
	int **array; 
	int N; //korifes 
};

typedef struct graph GRAPH;
void ektipwsi_graphou(GRAPH g);
void add_akmi(GRAPH g , int korifi_1 , int korifi_2 , int weight);

void graph_init_from_file(GRAPH *g , char *filename);
void GR_print(GRAPH g);




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
			g.array[korifi_2][korifi_1]=weight;

			}
}

void ektipwsi_graphou(GRAPH g){
	int i,j;

	printf("\n");
	for (i=0; i<g.N; i++)
		printf("%3d", i);

	printf("\n---------------------------------\n");

	for (i=1; i<g.N; i++)
	{
		printf("%3d|", i);//katakorides grammes 
		for (j=1; j<g.N; j++){// gia kathe xwra , to apotelesma 
			printf("%3d", g.array[i][j]);
		}
		printf("\n");
	}

}


void graph_init_from_file(GRAPH *g , char *filename){
		
	int i , j , w;
	FILE *fo;
	
	fo=fopen(filename , "r");  
	fscanf(fo ,"%d", &g->N);// N= korifes
	printf("%d\n", g->N);
	
	g->array =(int**)malloc(sizeof(int*)*g->N);	 //xwres 	
				if(!g->array){
					printf("adinamia desmeusiss");
					exit(0);
				}		
	for(i=1 ; i<g->N; i++){// pithanes diadromes gia kathe xwra 
		g->array[i]= (int*)malloc(sizeof(int)*g->N);
		
				if(!g->array[i]){
					printf("adinamia desmeusisss");
					exit(0);
				}
			
			for(j=0;j<g->N;j++){ // arxikopoiisi me midenika 
				g->array[i][j]=0;
			}
		}
						
	while(fscanf(fo,"%d %d %d", &i , &j , &w)  !=EOF ){
		add_akmi(*g , i,j, w);	
	    printf("-->%d %d %d <--\n" ,i,j , w) ; //gia skopous epiveveosis 		

	}	
		fclose(fo);
	}	

