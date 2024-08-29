#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "algorithms.h"
int main(){
    Graph* graph = createGraph(3);
    addEdge(graph, 0, 1);  // Add edge from node 0 to node 1
    addEdge(graph, 0, 2);  // Add edge from node 0 to node 2
    addEdge(graph, 1, 2);  // Add edge from node 1 to node 2
    printGraph(graph);
    DFS(graph);
}