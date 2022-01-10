#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 #define TRUE 1
  #define FALSE 0 

struct graph {
	int **array; 
	int N; //korifes 
	int **visit; 
};


typedef struct graph GRAPH;
void ektipwsi_graphou(GRAPH g);
void ektypwsi_visit(GRAPH g );
void add_akmi(GRAPH g , int korifi_1 , int korifi_2 , int weight);
int graph_init_from_file(GRAPH *g , char *filename);
//char* concatenation(char *str1 , char *str2);

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

int graph_init_from_file(GRAPH *g , char *filename){
		
	int i , j , w;
	FILE *fo;
	
	fo=fopen(filename , "r");  
	fscanf(fo ,"%d", &g->N);
	printf("diavazw %d xwres \n", g->N);
	
	g->array =(int**)malloc(sizeof(int*)*g->N);	 //xwres 	
		g->visit =(int**)malloc(sizeof(int*)*g->N);	 //xwres 	

				if(!g->array){
					printf("adinamia desmeusiss");
					exit(0);
				}
					if(!g->visit){//
					printf("adinamia desmeusiss");
					exit(0);//
				}		
	for(i=1 ; i<g->N; i++){// pithanes diadromes gia kathe xwra 
		g->array[i]= (int*)malloc(sizeof(int)*g->N);
			g->visit[i]= (int*)malloc(sizeof(int)*g->N);//

				if(!g->array[i]){
					printf("adinamia desmeusisss");
					exit(0);
				}
					if(!g->visit){//
					printf("adinamia desmeusiss");
					exit(0);//
				}
			
			for(j=0;j<g->N;j++){ // arxikopoiisi me midenika 
				g->array[i][j]=0;
				g->visit[i][j]= FALSE ; //arxikopoiisi me midenika 
			}
		}
						
	while(fscanf(fo,"%d %d %d", &i , &j , &w)  !=EOF ){
		add_akmi(*g , i,j, w);	
	    printf("-->%d %d %d <--\n" ,i,j , w) ; //gia skopous epiveveosis 		

	}	
		fclose(fo);
		return g->N;
	}
		
void ektypwsi_visit(GRAPH g ){
	int i , j ; 
				printf("\n");

	for(i=1 ; i<g.N; i++){// 
			for(j=0;j<g.N;j++){ //
				
				printf("%d ", g.visit[i][j]);//
			}
			printf("\n");
		}
	}
	
/*
char* concatenation(char *str1 , char *str2){
	
  
    // Declare a new Strings
    // to store the concatenated String
    char *str3;
  
    int i = 0, j = 0;
  
  
    // Insert the first string in the new string
    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }
  
    // Insert the second string in the new string
    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
  
    // Print the concatenated string
    return str3 ; 
  //https://www.geeksforgeeks.org/c-program-to-concatenate-two-strings-without-using-strcat/
}
/*
char* Diadromi(GRAPH g , char* xwra_pou_eimai , char* epomeni_pithani_diadromi, char* diadromi_mexri_stigmis , int* varos_sinoliko){
	
 	for(epomeni_pithani_diadromi = 0;epomeni_pithani_diadromi<10 ; epomeni_pithani_diadromi++){
 		
		if(g.visit[xwra_pou_eimai][epomeni_pithani_diadromi] == 1){
			continue; 
		}
		else if(g.visit[xwra_pou_eimai][epomeni_pithani_diadromi] == 0){
			diadromi_mexri_stigmis =  Diadromi ();
			concatenation(diadromi_mexri_stigmis ,xwra_pou_eimai );
			continue;  
		}
			
		}

//epomeni_pithani_diadromi den iparxi 
return  "error : den mpori na ta episkeuthi mono mia fora "	;

}

	
	
	
	




















string Diadromi(GRAPH g , string xwra_pou_eimai , string diadromi_mexri_stigmis  ){
	
		if( (strcmp(str,"error") == 0 ){ // 
				return "error" ; 
			} 
		if(Strcmp(xwra_pou_eimai,"1") == 0){
		   str = "finish";
	     	return "finish"; // lathos giati tha xathi i diadromi   
	        }
	        
	for( ;(Strcmp(xwra_pou_eimai,"1") == 0)&&(strlen(diadromi_mexri_stigmis ) == 10 ); ){// mexru | ixwra_pou_eimai einai to 1 | kai 10 atoma tin diadromi 

		if((weight_xwra_pou_eimai == 0 )|| (g.visit[][] == 1) ){
			
		pithani_diadromi++; // epomeni pithani diadromi     
	     }
	     
		else if(weight_xwra_pou_eimai =! 0  ){ // 
		
			str = Diadromi(g , xwra_pou_eimai  );
		
			strcat(str,xwra_pou_eimai);	
			pithani_diadromi++;//epomeni pithani diadromi
			
			return str;	
		}
		
		else if(pithani_diadromi >=10){//not once oles tis diadromes 
			printf("error: den mpori na episkeuthi oles tis xores mono mia fora ");
			str = "error";
			return str  ; 
		}
		
	}
	if(Strcmp(xwra_pou_eimai,"1") == 0){
		str = "finish";
		return "finish";  
	}
	return str ; 
	
}		

*/
