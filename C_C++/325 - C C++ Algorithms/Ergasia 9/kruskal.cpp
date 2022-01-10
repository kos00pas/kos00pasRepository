
#include <bits/stdc++.h>
using namespace std;

// structure pou anaparista ena komvo me varoi stis akmes tou   
class Edge {
public:
	int src, dest, weight;
};

// anaparista sindedemeno mi katefthinoemno kai me varoi grafo
class Graph {
public:
	
	// V-> korifes, E-> akmes
	int V, E;

    //o grafos anaparistaet san pinakas apo akmes
    //afou o grafos einai mi katefthinomenos i akmi apo tin arxi diladi src 
    //mexri to telos dest einai akmi
	Edge* edge;
};

// dimiourgo grafo me korifes V kai akmes E 
Graph* createGraph(int V, int E)
{
	Graph* graph = new Graph;
	graph->V = V;
	graph->E = E;

	graph->edge = new Edge[E];

	return graph;
}

// structure pou anaparista ena iposinolo gia union-find
class subset {
public:
	int parent;
	int rank;
};

//evresi sinolou stixiou i
// (uses path compression technique)
int find(subset subsets[], int i)
{
	// vrisko tin riza kai kano tin riza patera tou i
	// (path compression)
	if (subsets[i].parent != i)
		subsets[i].parent
			= find(subsets, subsets[i].parent);

	return subsets[i].parent;
}

// an den kani union 2 set x kai y
// kani union vasi vathmou
void Union(subset subsets[], int x, int y)
{
	int xroot = find(subsets, x);
	int yroot = find(subsets, y);


	if (subsets[xroot].rank < subsets[yroot].rank)
		subsets[xroot].parent = yroot;
	else if (subsets[xroot].rank > subsets[yroot].rank)
		subsets[yroot].parent = xroot;

    //an t rank=vathmos-taksi einai idia tote ginete riza o enas 
    //kai anksanete to rank kata 1
	else {
		subsets[yroot].parent = xroot;
		subsets[xroot].rank++;
	}
}

//me liga logia o union kai o find tous xrisimopoio gia na anixnevso an iparxei kiklos

// sigrino 2 akmes vasi me weight
// kano qsort() sorting pinaka apo akmes se avksousa
int myComp(const void* a, const void* b)
{
	Edge* a1 = (Edge*)a;
	Edge* b1 = (Edge*)b;
	return a1->weight > b1->weight;
}

//main function 
void KruskalMST(Graph* graph)
{
	int V = graph->V;
	Edge result[V]; // result gia MST
	int e = 0; 
	int i = 0; 

	// Step 1: sorting pinaka apo akmes se avksousa vasi ta varoi tous
	// dimiourgo copy pinaka akmwn
	qsort(graph->edge, graph->E, sizeof(graph->edge[0]),
		myComp);

	// Allocate memory gia na dimiourgiso V subsets
	subset* subsets = new subset[(V * sizeof(subset))];

	//  dimiourgo V subsets
	for (int v = 0; v < V; ++v)
	{
		subsets[v].parent = v;
		subsets[v].rank = 0;
	}

	//arithmos akmwn pou tha paroume mexri V-1 
	while (e < V - 1 && i < graph->E)
	{
		// Step 2: epilego tin mirkoteri akmi kai avksano to index gia tin epomeni epanalipsi
		Edge next_edge = graph->edge[i++];

		int x = find(subsets, next_edge.src);
		int y = find(subsets, next_edge.dest);

		// an den dimiourgi kiklo tin vallo sto result
        // kai avksano index tou result gia epomeni akmi
		if (x != y) {
			result[e++] = next_edge;
			Union(subsets, x, y);
		}
		//allios aporripto tin epomeni akmi
	}

	// tipono to content tou result mu kai deixno to MST 
	int minimumCost = 0;

    for (i = 0; i < e; ++i)
    minimumCost = minimumCost + result[i].weight;

    cout <<"MST ("<<minimumCost<<"):"<<endl;


	for (i = 0; i < e; ++i)
	{
		cout << result[i].src << " - " << result[i].dest
			<< " (" << result[i].weight <<")"<< endl;
	}
	
}


int main()
{
    
    ifstream fin;
    fin.open("ECE325_undirected_graph.txt");

    int nodes,akmes,kor1,kor2,weight,i=0;

    fin>>nodes;
    //cout <<nodes<<endl;
    fin>>akmes;
    //cout <<akmes<<endl;

    Graph* graph = createGraph(nodes, akmes);

    while (!fin.eof()) {
        
        fin>>kor1>>kor2>>weight;
        graph->edge[i].src = kor1;
        graph->edge[i].dest = kor2;
        graph->edge[i].weight = weight;
        i++;
            
    }

    KruskalMST(graph);

    fin.close();

	return 0;
}


