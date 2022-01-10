#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

// graph class ipodikniei katefthinomeno grafo
//xrisimopoio adjacency list
class Graph
{
public:
	map<int, bool> visited;
	map<int, list<int>> adj;

	// sinartisi gia na prostheso akmi
	void addEdge(int v, int w);

	// DFS gia vertices
	void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFS(int v)
{
	// simiono to paron komvo kai ton kano print
	visited[v] = true;
	cout << v<< " ";

	//epanerxomai gia oles tis korifes
	list<int>::iterator i;
    //cout << v;
	for (i = adj[v].begin(); i != adj[v].end(); ++i){
		
		if (!visited[*i]){
			cout<<"(" <<v<< ")";
			DFS(*i);

		}
        
	}
		
}

int main()
{
	
	Graph g;
    ifstream fin;
    fin.open("ECE325_graph.txt");
	int nodes,akmes,kor1,kor2,weight;

    fin>>nodes;
    //cout <<nodes<<endl;
    fin>>akmes;
    //cout <<akmes<<endl;

    while (!fin.eof()) {
        
        fin>>kor1>>kor2>>weight;
        g.addEdge(kor1, kor2);
           
    }

	cout << "Following is Depth First Traversal (starting from vertex 0) "<<endl;
    
	g.DFS(0);

    fin.close();

	return 0;
}


