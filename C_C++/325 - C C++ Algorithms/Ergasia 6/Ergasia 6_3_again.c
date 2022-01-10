  #include <stdio.h>
 #include <stdlib.h> 
 
 void main(){
 
 int i=0 ; //gia thesi coint sto result 
 int v[5] = {50,20,10,5,1}; //ti eidous kermata exw
 int sum ; //posa resta apomenoun 
 int result[5] = {0,0,0,0,0}; // posa kermata apo to kathena 
int x; // sinolo gia resta 
int j ; // gia ektipwsi 


			 
			 printf("Give me the amount in cents :"); // pernw ta resta 
			 scanf("%d" , &x); 
			 sum = x ; 
			 
			 while(sum != 0){
			 
				while(sum >=v[i]){//
					sum = sum-v[i];
					result[i]++;
				}
				i++;
				
			}
			printf("\n");
			
				for (j=0 ; j<=4 ; j++){
					printf("%d coint for %d cent  \n",result[j], v[j]);
				}
			 
			 
			 
		
			 
 }
