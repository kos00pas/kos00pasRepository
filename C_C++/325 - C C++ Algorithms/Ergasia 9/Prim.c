#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 #define TRUE 1
  #define FALSE 0 
  #include <stdbool.h>


struct graph {
	int **array; 
	int N; //korifes 
};


typedef struct graph GRAPH;
void ektipwsi_graphou(GRAPH g);
void add_akmi(GRAPH *g , int korifi_1 , int korifi_2 , int weight);
int  graph_init_from_file(GRAPH *g , char *filename);
int prim(GRAPH g );

  
  int  main(void){
  	GRAPH g; 
  	  	
   graph_init_from_file(&g,"ECE325_undirected_graph.txt");


	prim(g);
	return 0 ; 
}

int prim(GRAPH g ){//den vrisko to visit 

	int arxikos_komvos = 0 ; //edw arxiko komvo 
	printf("\n\nArxikos komvos: %d \n",arxikos_komvos);
	
	bool vt[9]={0,0,0,0,0,0,0,0,0};//komvoi pou kataxwrithikan //
	int et=0;//++counter diadromon pou exoun kalifthi 
	vt[arxikos_komvos]=1;//kataxwrite o komvos tis afaiterias 		
	int i , mst=0 , smaller[]={0,0,99999999}; 	//smaller arxiko varos =apeiro  gia na mporei na kanei sosta tis sigkrisis 		
	//smaller{apoPou,sePoionKomvoPaw,me_posoVaros



	ektipwsi_graphou(g);//******akoma kai an perni swsta tis times o grafos meta den exo swsti prosvasi 
	printf("\n");
	for(i=0;i<g.N;i++){	//vriski tin mikroteri diadromi apo ton arxiko komvo
		
		if(g.array[arxikos_komvos][i] !=0 &&( g.array[arxikos_komvos][i] < smaller[2] ) ){
			smaller[0]=arxikos_komvos ;
			smaller[1]= i;
			smaller[2]= g.array[arxikos_komvos][i];
		//	printf("\ninside in if :%d - %d (w:%d) \n",smaller[0],smaller[1] , smaller[2]);//*****den mpeni sto if 

		}

	}//vrike tin mikroteri arxiki diadromi

	printf("\n\nfisrts: %d - %d (w:%d) \n",smaller[0],smaller[1] , smaller[2]);
	
	et++;			  //++counter diadromon pou exoun kalifthi 
	vt[smaller[1]]=1; // kataxori ton epomeno komvo 
	mst=smaller[2];   //mpeni to proto varos tis protis diadromis 
	

	for (i=1;i<(g.N-1);i++){//mexri ton aritho ton diadromwn 
		int j , k ;
		
		for(k=0;k<g.N;k++){//y aksonas
			for (j=0 ; j<g.N ; j++){//x aksonas 			
				if((vt[j]==0)&&vt[k]==1&&g.array[k][j]!=0 &&(g.array[k][j] < smaller[2] )){ 
																									// pithani diadromi (exi varos )
																									//&& smaller=> pithani diadromio 
																									// &&diadromi den episkeuthe
						//gia tin mikroteri diadromi 
						smaller[0]=k;				//pou eimai (apo pio komvo tha paw stin nea diadromi )
						smaller[1]=j;				//pou tha paw 
						smaller[2]=g.array[k][j];   //me ti varos 
				}
			}
		}
		//vrika pia einai epomeni mikroteri diadromi 
		et++;		    	//++counter diadromon pou exoun kalifthi  
		vt[smaller[1]]=1;//vrika ton epomeno komvo 
		
 		printf("\t%d - %d (w:%d) \n",smaller[0],smaller[1] , smaller[2]);
		mst=mst+smaller[2];
		
		//ousia tou prim ->|na dialeksi apo tis pithanes diadromes  [olon ton komvon pou exoume idi episkeuthi] tin epomeni mikroteri diadromi  
		smaller[0]=0;
		smaller[1]=0;
		smaller[2]=9999999;//arxikopoiisi ksana |gia tis epomenes sigkrisis tis epomenis pithanis diadromis 
	}
	
	
	printf("\nMST: %d\n",mst);
	return 0 ;
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
			g->array[korifi_2][korifi_1]=weight;
			printf("-->%d %d %d <--\n" ,korifi_1,korifi_2, g->array[korifi_1][korifi_2]) ; //gia skopous epiveveosis 		
			}
}

void ektipwsi_graphou(GRAPH g){
	int i,j;
//	printf("----->%d",g.array[0][0]);
	printf("\n");
	printf("    ");
	for (i=0; i<g.N; i++)
		printf("%3d", i);

	printf("\n---------------------------------\n");
	for (i=0; i<g.N; i++)
	{
		printf("%3d|", i);//katakorides grammes 
		for (j=0; j<g.N; j++){// gia kathe xwra , to apotelesma 
			printf("%3d", g.array[i][j]);
		}
		printf("\n");
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
		
