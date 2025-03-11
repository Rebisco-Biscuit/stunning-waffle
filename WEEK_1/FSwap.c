#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 4;
    int b = 2;
    
    printf("Before swap: a = %d, b = %d", a,b);
    
    void (*fSwap) (int*, int*) = swap;
    
    fSwap(&a,&b);
    
    printf("\nAfter swap: a = %d, b = %d", a,b);

    return 0;
}
