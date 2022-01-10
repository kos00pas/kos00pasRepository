  #include <stdio.h>
  #include <stdlib.h>
  
  void main(){
  	FILE * read ; 
  	
  	char name[25];
  	int age ;
  	char phone[20];
  	
  	char name_to_find[25];
  	int name_found=0 ; 
  	
  	read=fopen("diavase.c","r");
  	
  	if(!read){
  		printf("error opening file!\n");
  		exit(-1);
	  }
	  
	  printf("dwse mou onoma ");
	  scanf("%s", name_to_find);
	  -------------------------
	  
	  while(!feof(read)){
	  	
	  	fscanf(read ,"%s %d %s", name , &age, phone);
	  	
	  	if(strcmp(name_to_find,name)==0){
	  		name_found=1;
	  		break; 
		  }
	  	
	  }-------------------------
				  if(name_found==1){
				  	printf("to tilefono tou %s einai %s",name_to_find,phone);
				  }
				  else {
				  	printf("to tilefono tou %s den iparxi",name_to_find);
				  }
  }
