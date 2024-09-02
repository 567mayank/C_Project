#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "algorithms.h"

int edgeFinder(const void* node){
    return *(int*)((char*)node);  
}

int weightFinder(const void* node){
    return *(int*)((char*)node + sizeof(int));  
}


int main() {

    int d01[2]={1,5}; 
    int d12[2]={2,5}; 
    int d23[2]={3,5}; 
    int d31[2]={1,5}; 

    Graph* graph = createGraph(4, sizeof(d01),edgeFinder,NULL);

    addEdge(graph, 0, &d01); 
    addEdge(graph, 1, &d12); 
    addEdge(graph, 2, &d23); 
    addEdge(graph, 3, &d31); 

    printf("%d\n",directedCyclicity(graph));
    int* arr = topologicalSort(graph);
    if(arr==NULL) printf("Cycle Present");
    else {
        for(int i=0;i<graph->numNodes;i++) printf("%d ",arr[i]);
    }
    freeGraph(graph);
    
    return 0;
}
