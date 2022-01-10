#include <stdio.h>

void name(int pinakas[5]);


void main (){
	
	int noumera[5];
	int counter; 
	
	name(noumera);
for(counter=0;counter<5;counter++)	{
	
	printf("%d\n",noumera[counter]);
}
}


void name(int pinakas[5]){
int counter ; 
int total=0 ; 
for(counter=0;counter<4;counter++){
	
	printf("------------");
	scanf("%d",&pinakas[counter]);
	total+=pinakas[counter];
	
	
}

pinakas[4]=total ; 


}
