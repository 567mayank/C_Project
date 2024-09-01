#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "algorithms.h"
int edgeFinder(const void* node){
    return *(int*)node;
}
int main() {
    Graph* graph = createGraph(4, sizeof(int));

    int data1 = 1, data2 = 2, data3 = 3;

    addEdge(graph, 0, &data1);  
    addEdge(graph, 0, &data3);  
    addEdge(graph, 0, &data2);  
    addEdge(graph, 2, &data3);  

    DFS(graph, 0, edgeFinder);
    for(int i=0;i<graph->numNodes;i++){
        Node* temp=graph->adjacencyList[i];
        printf("%d ",i);
        while(temp){
            printf("-> %d ",*(int*)(temp->data));
            temp=temp->next;
        }
        printf("\n");
    }
    freeGraph(graph);
    return 0;
}