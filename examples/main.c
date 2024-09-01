#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "algorithms.h"
int edgeFinder(const void* node){
    return *(int*)node;
}
int main() {
    Graph* graph = createGraph(7, sizeof(int),edgeFinder);

    int d0=0;
    int d1=1;
    int d2=2;
    int d3=3;
    int d4=4;
    int d5=5;
    int d6=6;

    addEdge(graph, 0, &d3);  
    addEdge(graph, 0, &d2);  
    addEdge(graph, 0, &d1);  
    addEdge(graph, 2, &d5);  
    addEdge(graph, 5, &d6);  
    addEdge(graph, 3, &d4);  

    DFS(graph, 0);
    BFS(graph, 0);
    
    freeGraph(graph);
    return 0;
}

// 0 1 2 5 6 3 4
// 0 1 2 3 5 4 6