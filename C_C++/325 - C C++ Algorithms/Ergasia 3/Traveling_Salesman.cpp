#include <stdlib.h> 
#include <iostream>
#include <math.h>

using namespace std;

void swap(int* array, int l,int r){
	int temp = array[l];
	array[l]=array[r];
	array[r]=temp;
}

int factorial(int n){
	int mul = 1;
	while(n>=1)
		mul *= n--;
	return mul;
}

// Permutate 1D array trip into the 2D array trips, recursively. k counts the number of permutations.
void permute(int** trips, int* trip, int l, int r, int* k){
    if (l == r){
    	// Fill trips 2D array with the values in the 1D trip array
    	for(int j=0;j<sizeof(trip);j++){
        	trips[(*k)][j]=trip[j];
			//cout<<trips[(*k)][j]<<" "; // Uncomment to print permutations
		}
		//cout<<endl;					 // Uncomment to print permutations
        (*k)++;
    }else{
    	// Swap values recursively.
        for (int i = l; i < r; i++){
            swap(trip, l, i);
            permute(trips, trip, l+1, r,k);
            swap(trip, l, i);
        }
    }
}

// Calculate and return the permutations of the 1D array trip, using the recursive permute function.
int** permute_caller(int* trip, int l, int r,int* k){
	int rows = factorial(r);
	
    int** trips = (int**) malloc(rows*sizeof(int*)); // malloc rows.
    for(int i=0;i<rows;i++)							// malloc r columns for each row.
    	trips[i]= (int*) malloc(r*sizeof(int));
    	
	permute(trips, trip,l,r,k);
	return trips;
}

 

int main(){
	// Problem setup.
	const int V = 9; // #Nodes
    string countries[V] = {"Cyprus","UK","France","Norway","Russia","Poland","Italy","Spain","Greece"};
	int keys[V-1] = {1,2,3,4,5,6,7,8}; 	//keys of all the countries except Cyprus (UK,France,Norway,Russia,Poland,Italy,Spain and Greece).
	
    int graph[V][V] = { {0,0,0,0,0,4,0,0,2},
                        {0,0,0,3,0,0,4,0,0},
                        {0,0,0,4,0,0,3,3,0},
                        {0,3,4,0,3,0,0,0,0},
                        {0,0,0,3,0,3,0,0,0},
                        {4,0,0,0,3,0,4,0,0},
                        {0,4,3,0,0,4,0,0,0},
                        {0,0,3,0,0,0,0,0,4},
                        {2,0,0,0,0,0,0,4,0}
                        };
                        	
	//The best trip so far.
    int* best; 
    
    // Other variables.
    int min,Dist;
	int minDist=INT_MAX;
	int counter=0;
	
	// 2D array of all possible permutations (Each row is a different permutation).
	int** trips = permute_caller(keys, 0, V-1, &counter);
	
	// Brute force
    for (int j=0; j<counter; j++){
        int totDist=0;
        
    	// Find the distance from Cyprus to trips[j][0], because Cyprus does not belong in the permutation.
        if(graph[0][trips[j][0]]!=0)
            totDist += graph[0][trips[j][0]];
        else
			continue;
					   
        // Find the distance from trips[j][i] to trips[j][i+1]
        for (int i=0; i<V-2; i++) 
            if(graph[trips[j][i]][trips[j][i+1]]!=0)
				totDist += graph[trips[j][i]][trips[j][i + 1]];
			else{
				totDist = INT_MAX;
				break;
			}
        
        // Find the distance from trips[j][last] to Cyprus (if totDist is not INT_MAX)(note: last = V-2).
        if(totDist != INT_MAX && graph[trips[j][V-2]][0] != 0)
            totDist += graph[trips[j][V-2]][0];
		else
        	continue;
        	
        // Save the trip if it has the lowest distance so far.
        if (totDist < minDist) {  
            minDist = totDist;
            best = trips[j]; 
        }
    }
    
    // Print the best trip.
    cout << "Best trip: " << endl;
    cout << countries[0] << " -> ";
    for (int i=0; i< V; i++) {
        if (i==V-1)
        	cout << countries[best[i]] << " " << best[i] << endl;
        else 
			cout << countries[best[i]]  << " " << best[i] << " -> ";
    }
    cout << "Distance: " << minDist << endl;
    return 0;
}
