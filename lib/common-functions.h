#ifndef COMMON_FUNCTIONS_SCAN_UTIL_H
#define COMMON_FUNCTIONS_SCAN_UTIL_H

typedef struct arr_bool {
    int* arr;
    int size;
} arr_bool;

typedef struct matrix_bool {
    arr_bool* arr;
    int size;
} matrix_bool;

typedef struct arr_char{
    char* arr;
    int size;
} arr_char;

typedef struct arr_string {
    char** arr;
    int size;
} arr_string;

typedef struct arr_int {
    int* arr;
    int size;
} arr_int;

typedef struct arr_long {
    long long* arr;
    int size;
} arr_long;

typedef struct arr_double {
    double* arr;
    int size;
} arr_double;

typedef struct matrix_char {
    arr_char* arr;
    int size;
} matrix_char;

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

short int scanShortInt();

int scanInt();

unsigned int scanUnsignedInt();

long int scanLongInt();

unsigned long int scanUnsignedLongInt();

long long int scanLongLongInt();

unsigned long long int scanUnsignedLongLongInt();

float scantFloat();

long double scanLongDouble();

arr_int scanIntArr(int length);

void printIntArr(arr_int arrInt);

void freeIntArr(arr_int arrInt);

arr_double scanDoubleArr(int length);

void printDoubleArr(arr_double arrFloat);

void freeDoubleArr(arr_double arrFloat);

arr_string scanStringArr(int length);

void printStringArr(arr_string arrString);

void freeStringArr(arr_string arrString);

int isUppercaseWord(char character);

int isLowercaseWord(char character);

int isDigit(char character);

int isWordOrDigit(char character);

#endif //COMMON_FUNCTIONS_SCAN_UTIL_H
