#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    ifstream fin;
    fin.open("ECE325_system.txt");
    int N,i,j;

    fin>>N;

	double mat[N][N+1];

    for(i=0; i<N; i++){
    for ( j = 0; j < N+1; j++)
    fin>>mat[i][j];
    }
    
    fin.close();

	cout<<"System of equations:"<<endl;		//tipono ton pinaka tou arxiou mou
    for(i=0; i<N; i++){
    for ( j = 0; j < N+1; j++){
    cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }

	cout<<endl;

    int singular_flag;

    for (int k=0; k<N; k++)
	{
		//arxikopioisi gia na vrw megaliteres times
		int i_max = k;
		int v_max = mat[i_max][k];

		/* vrisko megaliteri timi gia to pivot an iparxei */
		for ( i = k+1; i < N; i++)
			if (abs(mat[i][k]) > v_max){
				v_max = mat[i][k]; 
                i_max = i;
            }

		/* an to stoixio mias kirias diagwniou einai miden
		* tote o pinakas einai monadikos
		* kai tha paei gia diairesi me miden */
		if (!mat[k][i_max]){
			singular_flag=k; // Matrix is singular
            goto jump;
        }

		/* swap tin grammi tis megaliteris timis me trexon grammi */
		if (i_max != k){
			for (int l=0; l<=N; l++){
		        double temp = mat[k][l];
		        mat[k][l] = mat[i_max][l];
		        mat[i_max][l] = temp;
	        }
        }


		for ( i=k+1; i<N; i++)
		{
			/* o sintelestis f kani tin trexon grammi kth stixiou isi me 0
			* kai apomenoun kth stiles me 0 */
			double f = mat[i][k]/mat[k][k];

			/* afairo to fth pollaplasio tou sigekrimenou kth stixiou tis grammis */
			for (int j=k+1; j<=N; j++)
				mat[i][j] -= mat[k][j]*f;

			/*gemizoto katw trigwniko me midenika*/
			mat[i][k] = 0;
		}
	}
	singular_flag=-1;
    goto jump;

jump:
    //printf("MPIKE\n");
	/* an o pinakas einai monadikos=singular */
	if (singular_flag != -1)
	{
		cout<<"Singular Matrix"<<endl;

		/* if the RHS of equation corresponding to
		zero row is 0, * system has infinitely
		many solutions, else inconsistent*/
		if (mat[singular_flag][N])
			cout<<"Inconsistent System."<<endl;
		else
		cout<<"May have infinitely many solutions."<<endl;

	}

    //printf("MPIKE\n");

	double x[N]; // pinakas gia na apothikevsw tis lisis dldi ta x1,x2,x3..

	/* ksekino na ipologizo apo tin teleftaia grammi pros tin prwti grammi gia na vrw ta x1,x2..*/
	for ( i = N-1; i >= 0; i--)
	{
		/* start with the RHS of the equation */
		x[i] = mat[i][N];

		/*arxikopoio to j=i+1 afou o matrix einai anw trigonikos*/
		for ( j=i+1; j<N; j++)
		{
			//afairo ola ta lth stoixia  
			x[i] -= mat[i][j]*x[j];
		}

		x[i] = x[i]/mat[i][i];
	}
	
	cout<<"Solution for the system of equations are :"<<endl;
	for ( i=0; i<N; i++)
	cout<<"X"<<i+1<<" = "<<fixed<<setprecision(1)<<x[i]<<endl;
        
	return 0;
}
