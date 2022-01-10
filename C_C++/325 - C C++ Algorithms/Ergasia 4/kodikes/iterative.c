#include <stdio.h>
#include <time.h>


void main(){
	
		// to store the execution time of code
    double time_spent = 0.0;
        clock_t begin = clock();

    //
    
	int f=0; 
	int counter=0 ;
	int a=0 , b = 1 ;
	int epomenos = 0 ; 
	printf("Give me the number you want to calculate the fiboansss(iterative)"); 
	scanf("%d",&f);
	
	if(f <0){
 		printf("your number is arnitikeision");
 		exit(-1);
	 }
	
	int pinakas[f] ;
	for(counter = 0; counter<f ; counter++){
		printf("%d,\t",epomenos );
		epomenos = a+b ; 
		pinakas[counter] = epomenos;
		a=b;
		b=epomenos;			
 	
	}

	printf("\nThe answer is %d",a);
	//
	clock_t end = clock();
	//
	time_spent +=(double)(end-begin) / CLOCKS_PER_SEC; 
	    printf("\nThe elapsed time is %f seconds", time_spent);
}

