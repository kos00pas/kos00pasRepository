#include <iostream>
#include <fstream>
using namespace std;


int main(){

ifstream fin;
    fin.open("ECE325_system.txt");
    int N,i,j,k,p;

    fin>>N;

	/* input matrix */
	float  a[10][10],l[10][10]={0},u[10][10]={0},sum,b[10],z[10]={0},x[10]={0};

    for(i=1; i<N+1; i++){
    for ( j = 1; j<N+1; j++)
    fin>>a[i][j];
    fin>>b[i];
    }



   //********** LU decomposition *****//
    for(k=1;k<=N;k++)
    {
        u[k][k]=1;
        for(i=k;i<=N;i++)
        {
            sum=0;
            for(p=1;p<=k-1;p++)
                sum+=l[i][p]*u[p][k];
            l[i][k]=a[i][k]-sum;
        }

        for(j=k+1;j<=N;j++)
        {
            sum=0;
            for(p=1;p<=k-1;p++)
                sum+=l[k][p]*u[p][j];
            u[k][j]=(a[k][j]-sum)/l[k][k];
        }
    }
//******** Displaying LU matrix**********//
    cout<<endl<<endl<<"LU matrix is "<<endl;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
            cout<<l[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
            cout<<u[i][j]<<"  ";
        cout<<endl;
    }

   //***** FINDING Z; LZ=b*********//

    for(i=1;i<=N;i++)
    {                                        //forward subtitution method
        sum=0;
        for(p=1;p<i;p++)
        sum+=l[i][p]*z[p];
        z[i]=(b[i]-sum)/l[i][i];
    }
    //********** FINDING X; UX=Z***********//

    for(i=N;i>0;i--)
    {
        sum=0;
        for(p=N;p>i;p--)
            sum+=u[i][p]*x[p];
        x[i]=(z[i]-sum)/u[i][i];
    }
    //*********** DISPLAYING SOLUTION**************//
    cout<<endl<<"Set of solution is"<<endl;
    for(i=1;i<=N;i++)
       printf("\n%f",x[i]);


   return 0;
   }
