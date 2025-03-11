/*
Find the Maximum Element in an Array Using Pointers.
Write a function that takes an integer array and its size, then returns a pointer to the maximum element in the array.

int* findMax(int* arr, int size);

U [2025 MAR 12]
*/

#include <stdio.h>

int* findMax(int* arr, int size);

int main() {
    int a[] = {1, 4, 49, 13, 52, 5};
    int n = sizeof(a)/sizeof(a[0]);

    int* maxPtr = findMax(a, n);
    printf("Max value: %d\n", *maxPtr);

    return 0;
}

int* findMax(int* arr, int size) {
    int *maxPtr = arr;

    for (int *ptr = arr+1; ptr < arr+size; ptr++) {
        if (*ptr > *maxPtr) {  
            maxPtr = ptr;
        }
    }
    return maxPtr;
}
