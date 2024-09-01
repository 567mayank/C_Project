#include<stdio.h>
#include<stdlib.h>
#include "queue.h"
#include "graph.h"

void DFS_recursive(Graph* graph,int startNode,int *visit,int (*edgeFinder)(const void*)){
    printf("%d ",startNode);
    visit[startNode]=1;

    Node* temp=graph->adjacencyList[startNode];
    while(temp){
        int edge=edgeFinder(temp->data);
        if(visit[edge]==0){
            DFS_recursive(graph,edge,visit,edgeFinder);
        }
        temp=temp->next;
    }
}
void DFS(Graph* graph,int startNode,int (*edgeFinder)(const void*)){
    int n=graph->numNodes;
    int* visit = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) visit[i]=0;
    DFS_recursive(graph,startNode,visit,edgeFinder);
    printf("\n");
    free(visit);
}