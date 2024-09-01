#pragma once
typedef struct Node {
    void* data;
    struct Node* next;
} Node;

typedef struct Graph {
    int numNodes;
    int dataSize;
    Node** adjacencyList;
} Graph;

Graph* createGraph(int numNodes,size_t dataSize);
void addEdge(Graph* graph, int src, void* dest);
void freeGraph(Graph* graph);
// void printGraph(Graph* graph);