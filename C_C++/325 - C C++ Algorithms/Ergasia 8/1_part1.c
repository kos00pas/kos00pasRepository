  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
 
 float  solve( float a, float b,float e,int   iter,int  N, int n, int c[n]);
 float f(float x , int n ,int c[n]);

  // όρισε το f(x) και δες τι παίζει με το fx 
  
  void main(void){
    
  	FILE *fo;
  	float a,b ;
  	const int N=2000;
	int n ;  
	float  e = 0.0001 ; 
	int i,j=0 ; 
	int  c[n];
	float result ; 
	
	fo=fopen("ECE325_function.txt" , "r");  
	fscanf(fo ,"%f", &a);	
	fscanf(fo ,"%f", &b);
	fscanf(fo ,"%d", &n);
	printf("interval[%f,%f] and n:%d\n",a,b,n);
	
	while(!feof(fo)){
					c[i]=0;
					fscanf(fo,"%d",&c[i]);
					printf("\nC[%d]=%d",i,c[i]);
							i++;
	}
	
	fclose(fo);

	 
	//Bisection method 
	int  iter=0;
 	result = solve(a,b,e,iter,N,n,c);
 	printf("\n\nresult:  %f ",result );
}


float f(float  x,  int n ,int c[n]){
	
	float sum=c[0] ; 
	int p ; 
	for(p=1;p<n+1;p++){
		
		sum=sum + c[p]*(pow(x,p));
			

	}
	return sum ; 
}


 float  solve( float a, float b,float e,int   iter,int  N, int n, int c[n]){
  
  float  x=(a+b)/2;
	 	if((b-a)<e || iter>N ){
	 		return x; 
		 }//periorismoi praksewn 
	 
  float fx=f(x,n ,c);
	 
		 if(fx==0){
		 	return x ; 
		 }//brethike to simio 
	 
		 if(fx*f(a,n,c)>0){//an i timi tis sinartisis me to neo x *
		 					//epi
							// tin timi tis sinartisis me to pio arisera simio 
	iter++;
	printf("epanalipsi: %d",iter);

		 	return solve(x,b,e,iter,N,n,c);	//deksia tis mesis 

		 }
	iter++;
	printf("epanalipsi: %d",iter);
	 return solve(a,x,e,iter,N,n,c);// aristera tis mesis 2
	 
 }

