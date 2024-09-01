#pragma once
typedef struct Node {
    void* data;
    struct Node* next;
} Node;

typedef struct Graph {
    int numNodes;
    int dataSize;
    int (*edgeFinder)(const void*);
    Node** adjacencyList;
} Graph;

Graph* createGraph(int numNodes,size_t dataSize,int (*edgeFinder)(const void*));
void addEdge(Graph* graph, int src, void* dest);
void freeGraph(Graph* graph);
// void printGraph(Graph* graph);