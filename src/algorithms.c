#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include "queue.h"
#include "graph.h"
#include "priorityQueue.h"

void DFS_recursive(Graph* graph,int startNode,int *visit){
    printf("%d ",startNode);
    visit[startNode]=1;

    Node* temp=graph->adjacencyList[startNode];
    while(temp){
        int edge=graph->edgeFinder(temp->data);
        if(visit[edge]==0){
            DFS_recursive(graph,edge,visit);
        }
        temp=temp->next;
    }
}
void DFS(Graph* graph,int startNode){
    int n=graph->numNodes;
    int* visit = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) visit[i]=0;
    DFS_recursive(graph,startNode,visit);
    printf("\n");
    free(visit);
}

void BFS(Graph* graph,int startNode){
    int n=graph->numNodes;
    int* visit = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) visit[i]=0;
    Queue* q = createQueue();
    pushQueue(q,&startNode,sizeof(startNode));
    while(isQueueEmpty(q)==0){
        int node=*(int*)topQueue(q);
        popQueue(q);
        printf("%d ",node);
        Node* tmp = graph->adjacencyList[node];
        visit[startNode]=1;
        while (tmp){
            int edge = graph->edgeFinder(tmp->data);
            if(visit[edge]==0){
                visit[edge]=1;
                pushQueue(q,&edge,sizeof(edge));
            }
            tmp=tmp->next;
        }
    }
    printf("\n");
    free(visit);
}

int* dijkstra(Graph* graph, int startNode,int (*cmp) (const void*, const void*)){
    int n=graph->numNodes;
    int* dis = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) dis[i]=INT_MAX;
    dis[startNode]=0;
    size_t sz=graph->dataSize;
    priorityQueue* pq = createPriorityQueue(sz,cmp);
    do{
        int node=startNode;
        if(pq->size){
            node=graph->edgeFinder(topPriorityQueue(pq));
            popPriorityQueue(pq);
        }
        Node* tmp = graph->adjacencyList[node];
        while(tmp){
            int edge=graph->edgeFinder(tmp->data);
            int wt=graph->weightFinder(tmp->data);
            if(wt+dis[node]<dis[edge]){
                dis[edge]=wt+dis[node];
                pushPriorityQueue(pq,tmp->data);
            }   
            tmp=tmp->next;
        }
    }while(pq->size!=0);
    freePriorityQueue(pq);
    return dis;
}