#pragma once
#include "graph.h"
void DFS(Graph* graph,int startNode);
void BFS(Graph* graph, int startNode);
int* dijkstra(Graph* graph, int startNode,int (*cmp) (const void*, const void*));