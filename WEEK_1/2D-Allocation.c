/* 
Dynamic 2D Array Allocation
Write a function int** create2DArray(int rows, int cols) that dynamically allocates a rows x cols integer matrix and initializes each element to (row_index + col_index).
*/

#include <stdio.h>
#include <stdlib.h>

int** create2DArray(int rows, int cols);
void freeMem(int **arr, int rows);

int main() {
    int rows = 2, cols = 3;
    int **myArr = create2DArray(rows,cols);
    
    if(myArr == NULL) { printf("Couldn't create matrix."); }
    
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d ", myArr[i][j]);
        }
        printf("\n");
    }
    
    freeMem(myArr, rows);
    
    return 0;
}

void freeMem(int **arr, int rows) {
  for(int i=0; i<rows; i++){
    free(arr[i]);
  }
  free(arr);
}

int** create2DArray(int rows, int cols) {
    int** arr = malloc(rows * sizeof(int*));
    
    if(arr == NULL) { return NULL; }
    
    for(int i=0; i<rows; i++) {
        arr[i] = malloc(cols * sizeof(int));
        if(arr[i] == NULL) { return NULL; }
    }
    
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) { 
            arr[i][j] = i+j;
        }
    }
    
    return arr;
}
