#ifndef COMMON_FUNCTIONS_COMMON_MATRIX_H
#define COMMON_FUNCTIONS_COMMON_MATRIX_H
#include "common-array.h"

typedef struct matrix_char {
    arr_char* arr;
    int size;
} matrix_char;

typedef struct matrix_bool {
    arr_bool* arr;
    int size;
} matrix_bool;

typedef struct matrix_string {
    arr_string* arr;
    int size;
} matrix_string;

typedef struct matrix_int {
    arr_int* arr;
    int size;
} matrix_int;

typedef struct matrix_long {
    arr_long* arr;
    int size;
} matrix_long;

typedef struct matrix_double {
    arr_double* arr;
    int size;
} matrix_double;

/*
 * Matrix Utility
 */

matrix_char* scanCharMatrix(int numberOfRows, int numberOfColumns);

void printCharMatrix(matrix_char* matrixChar);

void freeCharMatrix(matrix_char* matrixChar);

matrix_bool* scanBoolMatrix(int numberOfRows, int numberOfColumns);

void printBoolMatrix(matrix_bool* matrixBool);

void freeBoolMatrix(matrix_bool* matrixBool);

matrix_int* scanIntMatrix(int numberOfRows, int numberOfColumns);

matrix_int *importIntMatrix(int rows, int cols, char *fileName);

void printIntMatrix(matrix_int* matrixInt);

void freeIntMatrix(matrix_int* matrixInt);

matrix_double* scanDoubleMatrix(int numberOfRows, int numberOfColumns);

void printDoubleMatrix(matrix_double* matrixDouble);

void freeDoubleMatrix(matrix_double* matrixDouble);

matrix_long* scanLongMatrix(int numberOfRows, int numberOfColumns);

void printLongMatrix(matrix_long* matrixLong);

void freeLongMatrix(matrix_long* matrixLong);

#endif //COMMON_FUNCTIONS_COMMON_MATRIX_H
