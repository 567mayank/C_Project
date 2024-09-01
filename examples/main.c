#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "algorithms.h"
#include "queue.h"
int main(){
    Graph* graph = createGraph(5);
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,3);
    addEdge(graph,1,4);
    addEdge(graph,2,4);
    BFS(graph,0);
    DFS(graph,0);
}