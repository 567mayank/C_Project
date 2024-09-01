#include<stdio.h>
#include<stdlib.h>
#include "queue.h"
#include "graph.h"
void DFS_recursive(Graph* graph,int startNode,int *visit){
    printf("%d ",startNode);
    visit[startNode]=1;
    Node* temp=graph->adjacencyList[startNode];
    while(temp){
        if(visit[temp->id]==0){
            DFS_recursive(graph,temp->id,visit);
        }
        temp=temp->next;
    }
}
void DFS(Graph* graph,int startNode){
    int n=graph->numNodes;
    int* visit = (int*)calloc(n, sizeof(int));
    DFS_recursive(graph,startNode,visit);
    printf("\n");
}
void BFS(Graph* graph, int startNode){
    int n=graph->numNodes;
    int* visit = calloc(n, sizeof(int));
    Queue* queue=createQueue();
    pushQueue(queue,&startNode,sizeof(startNode));
    while (queue->size){
        int node=*((int*)topQueue(queue));
        printf("%d ",node);
        popQueue(queue);
        Node* temp=graph->adjacencyList[node];
        while(temp){
            if(!visit[temp->id]){
                visit[temp->id]=1;
                pushQueue(queue,&temp->id,sizeof(temp->id));
            }
            temp=temp->next;
        }
    }
    printf("\n");
}