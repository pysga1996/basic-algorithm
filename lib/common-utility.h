#ifndef COMMON_FUNCTIONS_COMMON_UTILITY_H
#define COMMON_FUNCTIONS_COMMON_UTILITY_H
#include <stdio.h>
#include <common-array.h>

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

/*
 * Scanner Utility
 */

void clearStdIn(void);

short int scanShortInt();

int scanInt();

unsigned int scanUnsignedInt();

long int scanLongInt();

unsigned long int scanUnsignedLongInt();

long long int scanLongLongInt();

unsigned long long int scanUnsignedLongLongInt();

float scantFloat();

long double scanLongDouble();

void scanString(char* string);


/*
 * File Utility
 */

arr_char* readMenu(char* menuFileName);

void readMenuNoBuffer(FILE *menuPtr);

#endif //COMMON_FUNCTIONS_COMMON_UTILITY_H
