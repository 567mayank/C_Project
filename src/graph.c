#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"graph.h"
Graph* createGraph(int numNodes,size_t dataSize) {
    Graph* graph = malloc(sizeof(Graph));
    graph->numNodes = numNodes;
    graph->dataSize=dataSize;
    graph->adjacencyList = malloc(numNodes * sizeof(Node*));
    for (int i = 0; i < numNodes; i++) {
        graph->adjacencyList[i] = NULL;
    }
    return graph;
}

void addEdge(Graph* graph, int src, void* dest) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = malloc(graph->dataSize); 
    memcpy(newNode->data, dest, graph->dataSize); 
    newNode->next = graph->adjacencyList[src];
    graph->adjacencyList[src] = newNode;
}

void freeGraph(Graph* graph) {
    for (int i = 0; i < graph->numNodes; i++) {
        Node* temp = graph->adjacencyList[i];
        while (temp) {
            Node* next = temp->next;
            free(temp->data);
            free(temp);
            temp = next;
        }
    }
    free(graph->adjacencyList);
    free(graph);
}

// void printGraph(Graph* graph) {
//     for (int i = 0; i < graph->numNodes; i++) {
//         Node* current = graph->adjacencyList[i];
//         printf("%d ",i);
//         while (current != NULL) {
//             printf("-> %d ", current->id);
//             current = current->next;
//         }
//         printf("\n");
//     }
// }