#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "algorithms.h"
#include "queue.h"
int main(){
    Queue* queue=createQueue();
    int a[2]={4,5};
    int b[2]={10,20};
    pushQueue(queue,a,sizeof(a));
    pushQueue(queue,b,sizeof(b));
    while(queue->size){
        int* val=topQueue(queue);
        printf("%d %d\n ",val[0],val[1]);
        popQueue(queue);
    }
}