#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);

main()
{
	int pinakas[SIZE];
	int i,sum,N=20;
	float mo;
	
	/* Arxikopoiisi enos pinaka 20 thesewn 
	   me tyxaious arithmous sto 1..30 */
	
	init_array(pinakas,N,1,30);
	
	/* Ektypwsi tou pinaka */
	printf("Pinakas Dedomenwn: \n");
	print_array(pinakas,N);
	printf("\n\n");

	/* Ypologismos tou athroismatos */
	sum=0;
	printf("\n\n \ti\tpin[i]\tsum\tmo\n");
	printf("------------------------------------\n");
	
	for (i=0; i<N; i++)
	{
		sum+=pinakas[i];
			
		printf("\t%d\t%d\t%d\t%.3f\n",i,pinakas[i],sum,sum/(float)(i+1));
	}
	mo=sum/(float)N;
	printf("\n\nO mesos oros einai: %.3f", mo);
	
}




void init_array(int *pinakas, int n, int a, int b)
{
	int i;
	
	srand(time(NULL));
	
	for (i=0; i<n; i++)
		pinakas[i]=a+rand()%(b-a+1);
}

void print_array(int *pinakas, int n)
{
	int i;
	
	printf("[");
	for (i=0; i<n-1; i++)
		printf("%d, ",pinakas[i]);
	printf("%d]",pinakas[n-1]);
}

