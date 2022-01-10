
#include "par.c"


int main(){
 
 struct node *root = create();
 char fname[70];
 char s[10] ; 
 int arth ; 
 bool ret; 

//////////////////rwta ton xristi gia to onoma tou arxeiou 
  printf("dwse mu to onoma tou arxiou: ");
  gets(fname);

//////////////////////////// //diavasma arxeiou 
FILE *read;
read=fopen(fname, "r");

	if(read==NULL){ //an den anoiksei 
            printf("den entopisame to arxeio \n");
            exit(-1);   
        }

while(!feof(read)){		// mexri na teliosi to diavasma 
fscanf(read, "%s",s);
InsertNode(root , s); 
//////////////////////////////////////////telos diavasmatos arxeiou 
}
   ///////////////////////////////////dwse mou to kouponi 
   char  kouponi[10];
    while(1){		//gia oses fores tou zitisw 
    
		   printf(" \nDwse \"telos\"  gia eksodo \n\ndwse moy to kouponi  sou:");
		   gets(kouponi); // diavasma kouponiou 
		  
		   	char telos[5]="telos";


		   if( strcmp(kouponi,telos ) == 0 ){ // eksodos apo programma 

				   printf("exit");                   
				   	exit(-1);
		   }
		   
		 	else if (strlen(kouponi) != 10){   //lathos megethos kouponiou 

					printf("lathos megethos , ksanadwse ");
					continue; 
			}
			else{  								//psakse gia to kouponi
					printf("\nkouponi :%s \n", kouponi);
					ret=search(root , kouponi ) ; // psaksimo 	 
			}
	}

fclose(read);
//olous tous komvous free , na perna pou kathe komvo p ta fila mexri panw 
//mls teliosi to programma kamni to 
}
