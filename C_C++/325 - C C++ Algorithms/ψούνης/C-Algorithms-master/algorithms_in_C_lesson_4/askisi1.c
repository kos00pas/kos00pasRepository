#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
void copy_1d_table(int *a, int *b, int n);

main()
{
	int pinakas1[SIZE], pinakas2[SIZE];
	int i,N=15;
	
	/* Arxikopoiisi twn pinakwn */
	srand(time(NULL));
	init_array(pinakas1,N,1,50);
	init_array(pinakas2,N,1,50);
	
	/* Ektypwsi twn pinakwn */
	printf("\t\t\tEPIDEIKSI ANTIGRAFI PINAKWN\n\n");

	printf("Arxika: ");
	printf("\nPinakas 1: ");
	print_array(pinakas1,N);
	printf("\nPinakas 2: ");
	print_array(pinakas2,N);

	/* Antigrafi Pinakwn */
	printf("\nAntigrafi...");
	copy_1d_table(pinakas1,pinakas2,N);
	

	printf("\n\nTelika: ");
	printf("\nPinakas 1: ");
	print_array(pinakas1,N);
	printf("\nPinakas 2: ");
	print_array(pinakas2,N);

	
}

void init_array(int *pinakas, int n, int a, int b)
{
	int i;
	
	for (i=0; i<n; i++)
		pinakas[i]=a+rand()%(b-a+1);
}

void print_array(int *pinakas, int n)
{
	int i;
	
	printf("[");
	for (i=0; i<n-1; i++)
		printf("%2d, ",pinakas[i]);
	printf("%2d]",pinakas[n-1]);
}

void copy_1d_table(int *a, int *b, int n)
{
	int i;
	
	for (i=0; i<n; i++)
		a[i]=b[i];
}

