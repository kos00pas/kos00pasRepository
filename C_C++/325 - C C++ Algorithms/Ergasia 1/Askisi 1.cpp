#include <bits/stdc++.h>
using namespace std;
 

string Palindrome(string S)
{
    
    string Palin = S;
 
   	reverse(Palin.begin(), Palin.end()); //h sinartisti reverse antistrefi tin leksi apo to telos pros tin arxi diladi an exw tin leksi marios tha gini soiram 
 
    
    if (S == Palin) { // elexw an meta tin antistrofi h arxiki mou leksi einai idia me tin nea leksi pou egine revers kai analogos tipono minima eksodou
        
        return "Palindrome";
    }
    
    else {
        
        return "Is not Palindrome";
    }
}
 

int main()
{
	
    string S ;
    cout<<"Give a word ";
    cin>>S;
    cout <<Palindrome(S);
 
    return 0;
}

