/* 
Dynamic Memory Allocation

Write a function that dynamically allocates an integer array of size n, fills it with values from 1 to n, prints them, and then frees the memory.

int* createArray(int n);
*/

#include <stdio.h>
#include <stdlib.h>

int* createArray(int n);

int main() {
    int *a = createArray(5);
    
    for(int i=0; i<5; i++){ 
        printf("%d ", a[i]); 
    }
    free(a);
}

int* createArray(int n){
    int *arr = malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){ arr[i]=i; }
    return arr;
}
