#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <common-functions.h>
#include "../main.h"
#define SPACE ' '
#define COMMA ','
#define QUESTION_MARK '?'
#define TERMINATOR '\0'

void convertChar(char* character) {
    if (isWordOrDigit(*character) && *character != COMMA && *character != SPACE && *character != QUESTION_MARK) {
    } else {
        *character = SPACE;
    }
}

void replaceSpace(char* s, char* newS) {
    int markSpace = 0;
    int nonSpaceStart = 0;
    int j = 0;
    for (int i = 0; i < strlen(s); ++i) {
        convertChar(&s[i]);
        if (s[i] == SPACE) {
            markSpace++;
        } else {
            markSpace = 0;
            // mark first non-space character
            nonSpaceStart = 1;
        }
        if (markSpace > 1) {
            continue;
        } else if (nonSpaceStart) {
            // if this is the first non-space character, assign to the new string
            newS[j] = s[i];
            j++;
        }
    }
    if (markSpace >= 1) {
        newS[j - 1] = TERMINATOR;
    } else {
        newS[j] = TERMINATOR;
    }
}

void replaceComma(char* s, char* newS) {
    unsigned long long strLength = strlen(s);
    int j = 0;
    int nonCommaStart = 0;
    int markCommaSpaceBlock = 0;
    int markForReplaceWithComma = 0;
    int markForReplaceEmpty = 0;
    int markForReplaceWithSpace = 0;
    int markForSpace = 0;
    for (int i = 0; i < strLength; ++i) {
        if (isWordOrDigit(s[i])) {
            nonCommaStart = 1;
        }
        if (!nonCommaStart) {
            continue;
        }
        if (s[i] == COMMA || s[i] == SPACE) {
            if (s[i] == SPACE) {
                markForSpace++;
            }
            markCommaSpaceBlock++;
        } else if (s[i] == QUESTION_MARK) {
            if (markCommaSpaceBlock > 0) {
                markForReplaceEmpty = 1;
                markCommaSpaceBlock = 0;
                markForSpace = 0;
            }
        } else {
            if (markCommaSpaceBlock > 0) {
                if (markForSpace != markCommaSpaceBlock) {
                    markForReplaceWithComma = 1;
                } else {
                    markForReplaceWithSpace = 1;
                }
                markCommaSpaceBlock = 0;
                markForSpace = 0;
            }
        }
        if (markForReplaceWithComma) {
            newS[j] = COMMA;
            j++;
            newS[j] = SPACE;
            j++;
            newS[j] = s[i];
            j++;
            markForReplaceWithComma = 0;
        } else if (markForReplaceEmpty) {
            newS[j] = s[i];
            j++;
            markForReplaceEmpty = 0;
        } else if (markForReplaceWithSpace) {
            newS[j] = SPACE;
            j++;
            newS[j] = s[i];
            j++;
            markForReplaceWithSpace = 0;
        } else {
            if (markCommaSpaceBlock == 0) {
                newS[j] = s[i];
                j++;
            }
        }
    }
    newS[j] = TERMINATOR;
}

void replaceUppercase(char* s, char* newS) {
    int j = 0;
    for (int i = 0; i < strlen(s); ++i) {
        if (isLowercaseWord(s[i]) && i == 0) {
            newS[j] = (char) (s[i] - 32);
        } else if (isUppercaseWord(s[i]) && i > 0) {
            newS[j] = (char) (s[i] + 32);
        } else {
            newS[j] = s[i];
        }
        j++;
    }
    newS[j] = TERMINATOR;
}

void replaceQuestionMark(char* s, char* newS) {
    int j = 0;
    unsigned  long long strLength = strlen(s);
    for (int i = 0; i < strLength; ++i) {
        if (i != (strlen(s) - 1) && s[i] == QUESTION_MARK) {
            continue;
        }
        newS[j] = s[i];
        j++;
    }
    if (newS[j - 1 ] != QUESTION_MARK) {
        newS[j] = QUESTION_MARK;
        newS[j + 1] = TERMINATOR;
    } else {
        newS[j] = TERMINATOR;
    }
}

char* questionCorrection(char* s) {
    unsigned long long strLength = strlen(s) * 2;
    char *tempS1 = calloc(sizeof(char), strLength);
    replaceSpace(s, tempS1);
    printf("Replace space: %s\n", tempS1);
    char *tempS2 = calloc(sizeof(char), strLength);

    replaceQuestionMark(tempS1, tempS2);
    printf("Replace question mark: %s\n", tempS2);
    realloc(tempS1, strLength);

    replaceComma(tempS2, tempS1);
    printf("Replace comma: %s\n", tempS1);
    realloc(tempS2, strLength);

    replaceUppercase(tempS1, tempS2);
    printf("Replace uppercase: %s\n", tempS2);
    free(tempS1);
    return tempS2;
}

void questionCorrectionDemo() {
    char input[256];
    int command;
    printf(">>> Start >>>\n");
    do {
        fflush(stdin);
        printf("Enter a question:\n");
        scanf("%[^\n]s", input);
//        fgets (input, 256, stdin);
        char *result = questionCorrection(input);
        printf("Result: %s\n", result);
        free(result);
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = _getch();
    } while (command == ENTER_KEY);
    printf("<<< End <<<\n\n\n");
}