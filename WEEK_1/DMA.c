/* 
Dynamic Memory Allocation

Write a function that dynamically allocates an integer array of size n, fills it with values from 1 to n, prints them, and then frees the memory.
Modify Problem 1 to allow the user to increase the array size using realloc(), appending new values to the end.

int* createArray(int n);
*/

#include <stdio.h>
#include <stdlib.h>

int* createArray(int n);

int main() {
    int *a = createArray(5);
    
    for(int i=0; i<5; i++){ printf("%d ", a[i]); }

    // Problem 2:
    int *new_a = realloc(a,sizeof(int)*8);
    for(int i=0; i<8; i++){ printf("%d ", new_a[i]=i); }
    
    free(new_a);
}

int* createArray(int n){
    int *arr = malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){ arr[i]=i; }
    return arr;
}
