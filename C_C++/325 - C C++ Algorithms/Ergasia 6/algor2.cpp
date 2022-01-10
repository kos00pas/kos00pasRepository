#include <iostream>
#include <fstream>
#include<string>
#include<string.h>
#include <bits/stdc++.h>

#define LINES 10000
using namespace std;

int binarySearch(string arr[], int l, int r, string x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}


int main(){

    ifstream fin;
    string line,words[LINES];
    int i=0,pl=0;

    fin.open("ECE325_dictionary.txt");

    while (fin) {
 
        // Read a Line from File
        //getline(fin, line);
        fin>>line;
        //strcpy(words[i],line);
        words[i]=line;
        i++;
        pl++;
 
        //cout << line << endl;
    }
   
    int pos;
    string user;
    bool flag=true;
    string ex = "exit";

        cout<<"dwse string"<<endl;
        cin>>user;

    do{
    
        cout<<endl;

        pos=binarySearch(words,0, pl-1, user);

        if (pos == -1)
            cout<<"Element is not present"<<endl;
    
        else
            cout<<"Element present at position: "<<pos+1<<endl;

            cout<<"dwse string"<<endl;
            cin>>user;

            if (user==ex)
                flag=false;

    }while(flag!=false);

    cout<<"Termatismos Programmatos"<<endl;
    cout<<"Sinoliko Plithos tou TEXT FILE einai: "<<pl<<endl;
 
    // Close the file
    fin.close();


}

 