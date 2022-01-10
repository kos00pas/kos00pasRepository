#include <string>
#include <iostream>
#define Nums 100000

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high , int &counter) {

  // select the rightmost element as pivot
  int pivot = array[high];

  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {

        counter++;//2nd comparison here

    if (array[j] <= pivot) {
     //  counter++;//3nd comparison here
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

void quickSort(int array[], int low, int high, int &counter) {
  if (low < high) {
   //    counter++;//1st comparison here

    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high,counter);

    // recursive call on the left of pivot
   quickSort(array, low, pi - 1,counter);

    // recursive call on the right of pivot
   quickSort(array, pi + 1, high,counter);
  }

}
// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  \n", array[i]);
  }
  printf("\n");
}
int main()
{

FILE *src = fopen("ECE325_numbers.txt", "r");
int key,array[Nums],i=0,max,low,j,counter=0;
while (!feof(src)){
        fscanf(src,"%d ",&array[i]);
      //  printf("%d ",array[7]);
        if(i<1){
            max=array[i];
            low=array[i];
}
        if (array[i]>max)
            max=array[i];
        if (array[i]<low)
            low=array[i];

        i++;

}

fclose(src);
quickSort(array,low,max,counter);

char *filename = "sortednums.txt";
    FILE *fp = fopen(filename, "a+");
    for(j=0; j<i; j++){
        fprintf(fp, "%d\n",array[j]);
    }

printf("File contain %d numbers\n", i );
printf("Quick sort comparisons %d", counter );



    return 0;
}
