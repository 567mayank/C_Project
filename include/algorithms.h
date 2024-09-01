#pragma once
#include "graph.h"
void DFS(Graph* graph,int startNode,int (*edgeFinder)(const void*));
void BFS(Graph* graph, int startNode);
int* dijkstra(Graph* graph, int startNode);