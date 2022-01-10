 #include <stdio.h>
 
 void main(){
 	
 	float lires ; 
 	float rate ; 
 	 
 	FILE *diavase;
	 FILE *typwse;
	 
	 if(!diavase){
	 	printf("error 1");
	 	exit(-1);
	 }
	
	 diavase = fopen("diavase.c","r");
	 typwse = fopen("typwse.c","w");
	 
	 fscanf(diavase,"%f %f",&lires , &rate); 
 	 fprintf(typwse, "oi  lires einai %.2f to rate %.2f , oi lires me rate %.2f",lires , rate , lires*rate );
 	
 	fclose(diavase);
	 fclose(typwse); 	
 	
 }
