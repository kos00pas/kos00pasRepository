void onomata(char* name[]);

void main(){
	int dwse=0; 
	int counter; 
	
	char* name[3];
	
	onomata(name);
	
	for(counter=0;counter<3;counter++){
		printf(" %d einai %s\n", counter+1 ,name[counter]);
	}
}

void onomata (char* name[]){
	
	int counter ; 
	
	for(counter=0;counter<3;counter++){
		name[counter]=(char *)malloc(sizeof(char)*20);
		printf("dwse m to onoma tou fititi %d:",counter+1);
		scanf("%s",name[counter]);
	}
}
