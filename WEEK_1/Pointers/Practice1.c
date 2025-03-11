/* 
Reverse an Array Using Pointers
Write a function that reverses an integer array in place using pointers.
void reverseArray(int* arr, int size);

U [2025 MAR 11]
*/

#include <stdio.h>
#include <stdlib.h>

void reverseArray(int* arr, int size);

int main() {
    int a[] = {5, 10, 15, 20, 25};
    int n = sizeof(a)/sizeof(a[0]);
    
    //printf("%d",n);
    
    reverseArray(a, n);
    
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

void reverseArray(int* arr, int size){
    int *l = arr;
    int *r = arr + size - 1;
    
    while(*l < *r){
        int temp = *l;
        *l = *r;
        *r = temp;
        
        *r--;
        *l++;
    }
}
