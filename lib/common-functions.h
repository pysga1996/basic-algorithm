#ifndef COMMON_FUNCTIONS_SCAN_UTIL_H
#define COMMON_FUNCTIONS_SCAN_UTIL_H
#include <stdio.h>

extern const char SPACE;

extern const char TERMINATOR;

extern const char QUESTION_MARK;

extern const char COMMA;

extern const char DOT;

extern const char SEMICOLON;

extern const char SLASH;

extern const char BACKSLASH;

extern const char NEWLINE;

extern const char TAB;

extern const char ESCAPE_KEY;

extern const int ENTER_KEY;

extern const char* SPECIAL_CHARACTERS;

typedef struct arr_bool {
    int* arr;
    int size;
} arr_bool;

typedef struct matrix_bool {
    arr_bool* arr;
    int size;
} matrix_bool;

typedef struct arr_char{
    char* content;
    unsigned long long length;
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

/*
 * Scanner Utility
 */

short int scanShortInt();

int scanInt();

unsigned int scanUnsignedInt();

long int scanLongInt();

unsigned long int scanUnsignedLongInt();

long long int scanLongLongInt();

unsigned long long int scanUnsignedLongLongInt();

float scantFloat();

long double scanLongDouble();

/*
 * Array Utility
 */

arr_int scanIntArr(int length);

void printIntArr(arr_int arrInt);

void freeIntArr(arr_int arrInt);

arr_double scanDoubleArr(int length);

void printDoubleArr(arr_double arrFloat);

void freeDoubleArr(arr_double arrFloat);

arr_string scanStringArr(int length);

void printStringArr(arr_string arrString);

void freeStringArr(arr_string arrString);

/*
 * Number Utility
 */

int min(int a, int b);

int max(int a, int b);

/*
 * String Utility
 */

int isUppercaseCharacter(char character);

int isLowercaseCharacter(char character);

int isDigit(char character);

int isWordOrDigit(char character);

int isSpecialCharacter(char character);

arr_char* createString();

void concatString(arr_char* aChar, char* characters);

void deleteString(arr_char* aChar);

/*
 * File Utility
 */

arr_char* readMenu(char* menuFileName);

void readMenuNoBuffer(FILE *menuPtr);

#endif //COMMON_FUNCTIONS_SCAN_UTIL_H
