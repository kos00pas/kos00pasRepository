 #include <stdio.h>
 
 void main(){
 	
 	int ena, dio , tria ; 
 	 
 	FILE *diavase;
	 FILE *typwse;
	
	diavase=fopen("diavase.c" , "r");
	typwse=fopen("typwse.txt", "w");
	
	while(!feof(diavase)){
		
	if(fscanf(diavase,"%d %d %d",&ena ,&dio , &tria) != EOF)	{
		fprintf(typwse , "ena %d dio %d tria %d\n",ena,dio,tria);
	}
		
	}
	
	
	
	
 }
