#include <common-matrix.h>
#include <stdio.h>

int findPath(matrix_int matrix);

void findPathDemo() {
    matrix_int *matrixInt = importIntMatrix(2, 3, "matrix.txt");
    printIntMatrix(matrixInt);
    printf("\n");
}

int findPath(matrix_int matrix) {
    return 0;
}