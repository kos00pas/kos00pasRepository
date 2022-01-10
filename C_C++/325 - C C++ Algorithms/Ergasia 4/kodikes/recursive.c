#include <stdio.h >
#include <time.h>

void main(){
	
	// to store the execution time of code
    double time_spent = 0.0;
        clock_t begin = clock();

    //
	int f=0; 
	int calc=0 ; 
	printf("Give me the number you want to calculate the fiboansss(recursive)"); 
	scanf("%d",&f);
	calc = fibonas(f);
	printf("the answer is %d",calc);
	//
	clock_t end = clock();
	//
	time_spent +=(double)(end-begin) / CLOCKS_PER_SEC; 
	    printf("\nThe elapsed time is %f seconds", time_spent);


}
 int fibonas(int f ){

 	if(f <0){
 		printf("your number is arnitikeision");
 		exit(-1);
	 }
 		if( f ==0){return 0 ; }
		 else if(f ==1){return 1;}
		 
		 else {
		 	return fibonas( f-1) + fibonas(f-2);
		 }
 	
 }
