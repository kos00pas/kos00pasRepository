#include <iostream>
#include <string>

using namespace std;


void convertStrtoArrThenSort(string str);

int main(){
  
  string str;

  cout << "DWSE ARITHMOUS" << endl;
  cin>>str;
  
  convertStrtoArrThenSort(str);


    return 0;
}


void convertStrtoArrThenSort(string str)
{
    // get length of string str
    int strlength = str.length();
    
    
    int arr[strlength];
    
    int i;
  
    
    for (i = 0; i<strlength; i++)
    arr[i]=0;
  
    int j,k;
    i=0;

    for(k=0; k<strlength; k++){
        arr[k] = arr[k] * 10 + (str[i] - 48);
        i++;
    }

 //TWRA KSEKINA TO SORTING

    int lo = 0;
    int hi = strlength - 1;
    int mid = 0;

    while (mid <= hi) {
        switch (arr[mid]) {
 
        // If the element is 0
        case 0:
            swap(arr[lo++], arr[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
    }

    for (j = 0; j <= strlength-1; j++) 
        cout << arr[j] << "  " ;
}
    
