#include<iostream>
#include<stdio.h>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <set>

using namespace std;
#define INFINITY 9999
#define max 5



void dijkstra(int n,int startnode);
void pairdijkstra(int n,int startnode,int finish);
void readText();
void showmenu();
void choose();
void initializeVector();
void printVectior();
void primMST();
void printMST(int parent[]);

int n;
vector<vector<int>> adj; // adjacency matrix of graph
const int INF = 1000000000;// weight INF means there is no edge
struct Edge {
    int w = INF, to = -1;
};
struct destination
{
	int x,y,w;
};

struct newDestination
{
	int x,y;
};

//string input = "inputWeights.txt";
string input = "map_int.txt";
int nodes;
int edges;
vector <destination> dest;
vector <vector<int>> G;
vector <vector<int>> A;


void readText()
{
    vector <string> vec;
	string line;
	ifstream myfile( input );
	if (myfile.is_open())
	{
		while (getline(myfile,line))
		{
			vec.push_back(line);
		}
		myfile.close();
	}
	else
		cout << "> Unable to open file\n";

    // nodes
    string str;
    int j = 0;
    int temp;
    while (vec[0].size() != j)
    {
        str.push_back(vec[0][j]);
        j++;
    }
    std::string::size_type sz;
    temp = std::stoi(str,&sz);
    nodes = temp;
    str.clear();

    // edges
    j=0;
    while (vec[1].size() != j)
    {
        str.push_back(vec[1][j]);
        j++;
    }
    temp = std::stoi(str,&sz);
    edges = temp;
    str.clear();

    // destination
    for (int i = 2; i < vec.size(); i++ )
    {
        j = 0;
        destination temp;
        while (vec[i][j]!= ' ')
        {
            str.push_back(vec[i][j]);
            j++;
        }
        std::string::size_type sz;
        temp.x = std::stoi(str,&sz);
        j++;
        str.clear();
        while (vec[i][j]!= ' ')
        {
            str.push_back(vec[i][j]);
            j++;
        }
        temp.y = std::stoi(str,&sz);
        j++;
        str.clear();
        while (vec[i].size() != j)
        {
            str.push_back(vec[i][j]);
            j++;
        }
        temp.w = std::stoi(str,&sz);
        dest.push_back(temp);
        str.clear();
    }
}
/*******************************************************************************************************************/
//choice 2
#define graph_edge pair<int,int>

class Graph {
private:
    int V;      // number of nodes in graph
    vector<pair<int, graph_edge>> G; // vector for graph
    vector<pair<int, graph_edge>> T; // vector for mst
    int *parent;

public:
    Graph(int V);
    void AddEdge(int u, int v, int wt);
    int find_set(int i);
    void union_set(int u, int v);
    void kruskal_algorithm();
    void display_mst();
};
Graph::Graph(int V) {
    parent = new int[V];

    for (int i = 0; i < V; i++)
        parent[i] = i;

    G.clear();
    T.clear();
}
void Graph::AddEdge(int u, int v, int wt) {
    G.push_back(make_pair(wt, graph_edge(u, v)));
}
int Graph::find_set(int i) {
    // If i is the parent of itself
    if (i == parent[i])
        return i;
    else
        //else recursively find the parent of i
        return find_set(parent[i]);
}
void Graph::union_set(int u, int v) {
    parent[u] = parent[v];
}
void Graph::kruskal_algorithm() {
    int i, uSt, vEd;
    sort(G.begin(), G.end()); // sort the edges ordered on increasing weight
    for (i = 0; i < G.size(); i++) {
        uSt = find_set(G[i].second.first);
        vEd = find_set(G[i].second.second);
        if (uSt != vEd) {
            T.push_back(G[i]); // add to mst vector
            union_set(uSt, vEd);
        }
    }
}
void Graph::display_mst() {
    cout << "Edge :" << " Weight" << endl;
    for (int i = 0; i < T.size(); i++) {
        cout << T[i].second.first << " - " << T[i].second.second << " : "
             << T[i].first;
        cout << endl;
    }
}
/*******************************************************************************************************************/
//choice 1
void pairdijkstra(int n,int startnode,int finish) {
   int cost[nodes][nodes],distance[nodes],pred[nodes];
   int visited[nodes],count,mindistance,nextnode,i,j;
   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
   if(G[i][j]==0)
      cost[i][j]=INFINITY;
   else
      cost[i][j]=G[i][j];
   for(i=0;i<n;i++) {
      distance[i]=cost[startnode][i];
      pred[i]=startnode;
      visited[i]=0;
   }
   distance[startnode]=0;
   visited[startnode]=1;
   count=1;
   while(count<n-1) {
      mindistance=INFINITY;
      for(i=0;i<n;i++)
         if(distance[i]<mindistance&&!visited[i]) {
         mindistance=distance[i];
         nextnode=i;
      }
      visited[nextnode]=1;
      for(i=0;i<n;i++)
         if(!visited[i])
      if(mindistance+cost[nextnode][i]<distance[i]) {
         distance[i]=mindistance+cost[nextnode][i];
         pred[i]=nextnode;
      }
      count++;
   }
   for(i=0;i<n;i++) {
       if (i != startnode) {
           if (i == finish) {
               cout << "\nDistance of node " << i << " = " << distance[i];
               cout << "\nPath = " << i;
               j = i;
               do {
                   j = pred[j];
                   cout << " <- " << j;
               } while (j != startnode);
           }
       }
   }
}
/*******************************************************************************************************************/
//choice 3
void dijkstra(int n,int startnode) {
    int cost[nodes][nodes],distance[nodes],pred[nodes];
    int visited[nodes],count,mindistance,nextnode,i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(G[i][j]==0)
                cost[i][j]=INFINITY;
            else
                cost[i][j]=G[i][j];
    for(i=0;i<n;i++) {
        distance[i]=cost[startnode][i];
        pred[i]=startnode;
        visited[i]=0;
    }
    distance[startnode]=0;
    visited[startnode]=1;
    count=1;
    while(count<n-1) {
        mindistance=INFINITY;
        for(i=0;i<n;i++)
            if(distance[i]<mindistance&&!visited[i]) {
                mindistance=distance[i];
                nextnode=i;
            }
        visited[nextnode]=1;
        for(i=0;i<n;i++)
            if(!visited[i])
                if(mindistance+cost[nextnode][i]<distance[i]) {
                    distance[i]=mindistance+cost[nextnode][i];
                    pred[i]=nextnode;
                }
        count++;
    }
    for(i=0;i<n;i++)
        if(i!=startnode) {
            cout<<"\nDistance of node "<<i<<" = "<<distance[i];
            cout<<"\nPath = "<<i;
            j=i;
            do {
                j=pred[j];
                cout<<" <- "<<j;
            }while(j!=startnode);
        }
}
/*******************************************************************************************************************/
void showmenu(){
    cout<<"Menu:"<<endl;
    cout<<"1.Shortest path between any pair of nodes"<<endl;
    cout<<"2.Spanning Tree"<<endl;
    cout<<"3.All shortest paths:"<<endl;
    cout<<"#.Exit"<<endl;
    cout<<"Choose: ";
}

void choose(){
    showmenu();
    char choice;
    cin>>choice;
    if(choice=='1')
    {
        cout<<"Start: "<<endl;
        int start;
        cin>>start;
        cout<<"Finish: "<<endl;
        int finish;
        cin>>finish;
        int flag=0;
        for(int j=0;j<nodes;j++){
            if(G[start][j]!=0){
                flag=1;
            }
        }
        if(flag==1){
            pairdijkstra(nodes,start,finish);
            cout<<endl;
        }else{
            cout<<"Node "<<start<<"go nowhere"<<endl;
        }
    }else if(choice=='2')
    {
        Graph gmst(nodes);
        for(int i = 0;i<dest.size();i++){
            gmst.AddEdge(dest[i].x,dest[i].y,dest[i].w);
        }
        gmst.kruskal_algorithm();
        cout<<"The Minimum Spanning Tree according to Kruskal's Algorithm:"<<endl;
        gmst.display_mst();
        //        primMST();
    }else if(choice=='3')
    {
        for(int i=0;i<nodes;i++){
            int flag=0;
            for(int j=0;j<nodes;j++){
                if(G[i][j]!=0){
                    flag=1;
                }
            }
            if(flag==1){
                dijkstra(nodes,i);
            }else{
            cout<<"Node "<<i<<"go nowhere"<<endl;
            }
    }
    }else if(choice=='#') {
        cout << "BYE!" << endl;
        return;
    }
    choose();
}
void initializeVector(){
    vector<int> test;
    for(int i = 0;i<nodes;i++){
            for(int j = 0;j<nodes;j++){
                    test.push_back(0);
            }
            G.push_back(test);
            A.push_back(test);
        }

       for(int i = 0;i<dest.size();i++){
            G[dest[i].x][dest[i].y] = dest[i].w;
//            G[dest[i].y][dest[i].x] = dest[i].w;
       }
}
void printVectior() {
    for (int i = 0; i < nodes; i++) {
        for (int j = 0; j < nodes; j++) {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    readText();
    initializeVector();
    printVectior();
    choose();
    return 0;
}


