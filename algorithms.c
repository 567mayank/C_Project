#include<stdio.h>
#include<stdlib.h>
#include "graph.h"
void dfs(Graph* graph,int startNode,int *visit){
    printf("%d ",startNode);
    visit[startNode]=1;
    Node* temp=graph->adjacencyList[startNode];
    while(temp){
        if(visit[temp->id]==0){
            dfs(graph,temp->id,visit);
        }
        temp=temp->next;
    }
}
void DFS(Graph* graph,int startNode){
    int n=graph->numNodes;
    int* visit = (int*)calloc(n, sizeof(int));
    dfs(graph,startNode,visit);
    printf("\n");
}