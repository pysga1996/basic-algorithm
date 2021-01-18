#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "../main.h"
#define SPACE ' '

char* formatString(char *input) {
    unsigned long long strLength = strlen(input);
    char *newS = calloc(sizeof(char), strLength);
    int j = 0;
    int markSpace;
    int nonSpaceStart;
    for (int i = 0; i < strLength; ++i) {
        if (input[i] == SPACE) {
            markSpace++;
        } else {
            markSpace = 0;
            nonSpaceStart = 1;
        }
        if (markSpace > 1) {
            continue;
        } else if (nonSpaceStart) {
            newS[j] = input[i];
            j++;
        }
    }
    if (markSpace >= 1) {
        newS[j - 1] = '\0';
    } else {
        newS[j] = '\0';
    }
    return newS;
}

void formatStringDemo() {
    char input[256];
    int command;
    printf(">>> Start >>>\n");
    do {
        fflush(stdin);
        printf("Enter a string:\n");
        scanf("%[^\n]s", input);
//        fgets (input, 256, stdin);
        char *result = formatString(input);
        printf("%llu\n", strlen(result));
        printf("Result: %s\n", result);
        free(result);
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = _getch();
    } while (command == ENTER_KEY);
    printf("<<< End <<<\n\n\n");
}