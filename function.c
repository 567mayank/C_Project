// Dynamically allocate memory for a 2D array
    // int **arr = (int **)malloc(rows * sizeof(int *));
    // for (int i = 0; i < rows; i++) {
    //     arr[i] = (int *)malloc(cols * sizeof(int));
    // }

// Dynamically allocate memory using malloc()
    // int *arr = (int *)malloc(n * sizeof(int));

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr =  (int*)malloc(1*sizeof(int));
    arr[0]=45;
    printf("%d",arr[0]);
}