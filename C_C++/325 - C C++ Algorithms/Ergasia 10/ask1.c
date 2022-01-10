#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct Graph{
    int V;
    struct country *array;
    }Graph;

typedef struct countryNode{
    int weight;
    int value;
    struct countryNode *next;
    struct countryNode *prev;
    }countryNode;

typedef struct country{
    struct countryNode *head;
    struct countryNode *tail;
    }country;

struct countryNode* newcountry(int value){
    countryNode *newNode=(countryNode*)malloc(sizeof(countryNode));
    newNode->value=value;
    newNode->next=NULL;
    }

struct Graph* createGraph(int V){
    Graph* graph=(Graph*)malloc(sizeof(Graph));
    graph->V=V;
    graph->array=(country*)malloc(V*sizeof(country));
    int i;
    for(i=0;i<V;i++){
        graph->array[i].head=NULL;
    }
    return graph;
    }

void addEdge(Graph* graph,int start,int endd,int weight){

    countryNode* newNode=newcountry(endd);
    countryNode* temp;
    temp=graph->array[start].head;
    if (temp==NULL){
        graph->array[start].head=newNode;
        newNode->weight=weight;
        newNode->prev=NULL;
        graph->array[start].tail=newNode;

    }
    else{
        while (temp->next!=NULL){
            temp=temp->next;
        }
        newNode->prev=temp;
        temp->next=newNode;
        graph->array[start].tail=newNode;
        newNode->weight=weight;
    }

    }


void Dijkstra(Graph *graph,int start,int endd){
    int v=graph->V,c,finishcounter,k,min;
    int distance[v],predecessors[v],visited[v];
    for(c=0;c<v;c++){
        distance[c]=INT_MAX;
        predecessors[c]=-1;
        visited[c]=0;
    }
    countryNode *temp,*temp1;
    k=start;
    distance[k]=0;
    visited[k]=1;
    finishcounter=0;
    temp=graph->array[k].head;
    while (finishcounter<v){
        temp1=temp;
        while (temp1!=NULL){
            if (distance[temp1->value]>temp1->weight+distance[k] && visited[temp1->value]==0){

                predecessors[temp1->value]=k;

                distance[temp1->value]=distance[predecessors[temp1->value]]+temp1->weight;
            }
            temp1=temp1->next;
        }

        min=INT_MAX;
        visited[k]=1;
        for(c=0;c<v;c++){
            if (distance[c]<min && visited[c]==0){
                min=distance[c];
                k=c;
            }
        }
        finishcounter++;
        temp=graph->array[k].head;
    }
        printf("\nNodes:\t\t");
        for(c=0;c<v;c++){
            printf("%d\t",c);
        }
        printf("\nCosts:\t\t");
        for(c=0;c<v;c++){
            printf("%d\t",distance[c]);
        }
        printf("\nPredecessors:\t");
        for(c=0;c<v;c++){
            if (predecessors[c]==-1)
                printf("Null\t");
            else
                printf("%d\t",predecessors[c]);
        }

    if (distance[endd]==INT_MAX){
        printf("\nThe is no path\n");
        return;
    }
    printf("\nShortest Path from %d to %d: ",start,endd);
    k=endd;
    int z=0;
    int path[v];\
    while (k!=start){
        path[z]=k;
        z++;
        k=predecessors[k];
   }
   path[z]=start;
    for(c=z;c>=0;c--){
        printf("%d ",path[c]);
    }
    printf("\n");

}



int main(){
    int n1,n2,w1;
    FILE *readfile;

    readfile=fopen("ECE325_graph.txt","r");

    int V,E,c;
    fscanf(readfile,"%d",&V);
    fscanf(readfile,"%d",&E);

    Graph *graph=createGraph(V);
    for (c=0;c<E;c++){
        fscanf(readfile,"%d",&n1);
        fscanf(readfile,"%d",&n2);
        fscanf(readfile,"%d",&w1);
        addEdge(graph,n1,n2,w1);
    }
    fclose(readfile);



    int start=0,endd=0;
    while (start!=-1 && endd!=-1){
        printf("Give starting point and destination for shortest path:");
        scanf("%d",&start);
        scanf("%d",&endd);
        if (!(start==-1 || endd==-1))
            Dijkstra(graph,start,endd);
    }
return 0;
}
