
#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int V; // Number of vertices
	bool **tc; // apothikevsi transitive closure
	list<int> *adj; // list
	void DFS(int u, int v);
public:
	Graph(int V); // o Constructor

	// eisagwgi kainourias akmis sto grapho
	void addEdge(int v, int w) { adj[v].push_back(w); }

	// tiposi tou transitive closure se pinaka
	void transitiveClosure();
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];

	tc = new bool* [V];
	for (int i = 0; i < V; i++)
	{
		tc[i] = new bool[V];
		memset(tc[i], false, V*sizeof(bool));
	}
}

//  DFS traversal function vriski oles tis korifes apo s.
void Graph::DFS(int s, int v)
{
	// apo s sto t true an vrw
	if(s==v){
		if(find(adj[v].begin(),adj[v].end(),v)!=adj[v].end())       //vrisko to v mesa sti lista (found diladi) apo tin arxi mexri to telos me to find
		tc[s][v] = true;
		}
	else
			tc[s][v] = true;                    //not found

	// vrisko oles tis korifes apo v
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
	{
		if (tc[s][*i] == false)
		{
		if(*i==s)
		{
			tc[s][*i]=1;        //to monopati pou diasxizo tou vazo 1
			}
			else
			{
			DFS(s, *i);
			}
		}
	}
}

//edw vrisko to transitive closure xrisimopoiontas DFS
void Graph::transitiveClosure()
{
	// dfs ksekinontas apo oles tis korifes 1 pros 1
	for (int i = 0; i < V; i++)
		DFS(i, i); 

    for (int i=0; i<V; i++)
        cout<<setw(2)<<i;
    cout << endl;

	for (int i=0; i<V; i++){
        cout<< i << " ";
		for (int j=0; j<V; j++)
			cout << tc[i][j] << " ";
		cout << endl;
	}
    
}

int main()
{

    ifstream fin;
    fin.open("ECE325_graph.txt");

    int nodes,akmes,kor1,kor2,weight;

    fin>>nodes;
    //cout <<nodes<<endl;
    fin>>akmes;
    //cout <<akmes<<endl;

    Graph graphos(nodes);

    while (!fin.eof()) {
        
        fin>>kor1>>kor2>>weight;
        graphos.addEdge(kor1, kor2);
            
    }

	cout << "Transitive closure matrix: \n";
	graphos.transitiveClosure();

    fin.close();

	return 0;
}

