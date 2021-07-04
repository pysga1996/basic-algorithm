#ifndef COMMON_FUNCTIONS_COMMON_ARRAY_H
#define COMMON_FUNCTIONS_COMMON_ARRAY_H
#define DEFAULT_CAPACITY 50

typedef struct arr_char{
    char* arr;
    unsigned long long size;
} arr_char;

typedef struct arr_bool {
    int* arr;
    int size;
} arr_bool;

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

/*
 * Array Utility
 */

arr_char* scanCharArr(int length);

void printCharArr(arr_char* arrChar);

arr_bool* scanBoolArr(int length);

void printBoolArr(arr_bool* arrBool);

void freeBoolArr(arr_bool* arrBool);

arr_int* scanIntArr(int length);

void printIntArr(arr_int* arrInt);

void freeIntArr(arr_int* arrInt);

arr_double* scanDoubleArr(int length);

void printDoubleArr(arr_double* arrDouble);

void freeDoubleArr(arr_double* arrDouble);

arr_long* scanLongArr(int length);

void printLongArr(arr_long* arrLong);

void freeLongArr(arr_long* arrLong);

arr_string* scanStringArr(int length);

void printStringArr(arr_string* arrString);

void freeStringArr(arr_string* arrString);

#endif //COMMON_FUNCTIONS_COMMON_ARRAY_H
