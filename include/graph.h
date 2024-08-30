#pragma once
typedef struct Node {
    int id;
    struct Node* next;
} Node;

typedef struct Graph {
    int numNodes;
    Node** adjacencyList;
} Graph;

Graph* createGraph(int numNodes);
void addEdge(Graph* graph, int src, int dest);
void removeEdge(Graph* graph, int src, int dest);
void printGraph(Graph* graph);
void freeGraph(Graph* graph);