// The closest pair 
#include <iostream>
#include <climits>
#include <cmath>
#include <cfloat>
#include <fstream>
using namespace std;


void closestpoints(int X[],int Y[],int N);

int main()
{
    ifstream fin("ECE325_points.txt");

    int N;

    fin >> N;

    int i=0, X[N],Y[N];

    
    while(!fin.eof()){

        fin >> X[i] >> Y[i];
        i++; 
    }
    
   
    fin.close();
    

    closestpoints(X,Y,N);
 
   
    cout << endl;
   
    
    return 0;

}

void closestpoints(int X[],int Y[],int N){

    double praksi_min=INFINITY;
    int i,praksi,j,p1=0,p2=0;

    for(i=0; i<N-2; i++){
        for(j=i+1; j<N-1; j++){
            praksi=sqrt(pow((X[i]-X[j]),2)+pow((Y[i]-Y[j]),2));
            

            if(praksi<praksi_min){
                praksi_min=praksi;
                p1=i;
                p2=j;
            }
            
        }
    }

    cout<<X[p1]<<" "<<Y[p1];
    cout << endl;
    cout<<X[p2]<<" "<<Y[p2];

}
