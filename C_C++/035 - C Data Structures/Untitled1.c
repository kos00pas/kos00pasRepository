#include <stdio.h>

#include <string.h>

void main (){

	char * name={ "abcd"};
	char * onoma={"ÁÂÃÄ"} ;
	int counter ; 
	
	for (counter=0;counter<4;counter++){
		printf("%d\t", name[counter]);
	}
	printf("\n");
	
	for (counter=0;counter<4;counter++){
		printf("%d\t", onoma [counter]);
	}
	
	////////////////////////////////
	
	char *dinamiki[]={};
	printf("\nxarise mou to onoma sou koukla \n ");
	scanf("%s",dinamiki);
	printf("\n%s\nse arithmous\n",dinamiki);
	for (counter=0;counter<4;counter++){
		printf("%d\t", dinamiki[counter]);
	}
	printf("\n");
		////////////////////////////////

}

