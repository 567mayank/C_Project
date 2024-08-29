#include<stdio.h>
#include<stdlib.h>
#include"graph.h"
Graph* createGraph(int numNodes) {
    Graph* graph = malloc(sizeof(Graph));
    graph->numNodes = numNodes;
    graph->adjacencyList = malloc(numNodes * sizeof(Node*));
    for (int i = 0; i < numNodes; i++) {
        graph->adjacencyList[i] = NULL;
    }
    return graph;
}

void addEdge(Graph* graph, int src, int dest) {
    Node* newNode = malloc(sizeof(Node));
    newNode->id = dest;
    newNode->next = graph->adjacencyList[src];
    graph->adjacencyList[src] = newNode;
}
void printGraph(Graph* graph) {
    for (int i = 0; i < graph->numNodes; i++) {
        Node* current = graph->adjacencyList[i];
        printf("%d ",i);
        while (current != NULL) {
            printf("-> %d ", current->id);
            current = current->next;
        }
        printf("\n");
    }
}

void freeGraph(Graph* graph) {
    for (int i = 0; i < graph->numNodes; i++) {
        Node* temp = graph->adjacencyList[i];
        while (temp) {
            Node* next = temp->next;
            free(temp);
            temp = next;
        }
    }
    free(graph->adjacencyList);
    free(graph);
}