
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define lower 0 // lower number for random function
#define upper 100 // upper number for random function
#define count 300000 // N elements

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {

  // select the rightmost element as pivot
  int pivot = array[high];

  // pointer for greater element
  int i = (low - 1);
	int j ;
  // traverse each element of the array
  // compare them with the pivot
  for ( j = low; j < high; j++) {
    if (array[j] <= pivot) {

      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;

      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);

  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {

    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}
// function to print array elements
void printArray(int array[], int size) {
	int i ; 
  for ( i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main()
{

    // Use current time as
    // seed for random generator
    srand(time(0));
/*    printf("give the n:");
    scanf("%d", &count);
    printf("give the lower:");
    scanf("%d", &lower);
    printf("give the upper:");
    scanf("%d", &upper);
*/
    int i,Nums[count];
    for (i = 0; i < count; i++) {
        int num = (rand() %(upper - lower + 1)) + lower;
        Nums[i]=num;

    }
    quickSort(Nums,0,count-1);
  //  printf("Sorted array in ascending order: \n");
 //   printArray(Nums,count);
    return 0;
}
