#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 4;
    int b = 2;

  /* For user input:
    printf("Enter first value:");
    scanf("%d", a);
    
    printf("Enter second value:");
    scanf("%d", b);
  */
    printf("Before swap: %d,%d", a,b);
    
    swap(&a,&b);
    
    printf("\nAfter swap: %d,%d", a,b);

    return 0;
}
