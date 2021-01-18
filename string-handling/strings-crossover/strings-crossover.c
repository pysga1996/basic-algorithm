#include <stdio.h>
#include <string.h>
#include <common-functions.h>
#include <conio.h>
#include "../main.h"

int check(const char *a, const char *b, const char *c) {
    for (int i = 0; i < strlen(c); i++) {
        if (a[i] != c[i] && b[i] != c[i])
            return 0;
    }
    return 1;
}

int stringsCrossover(arr_string inputArray, char *result) {
    int count = 0;
    for (int i = 0; i < inputArray.size; ++i) {
        for (int j = i + 1; j < inputArray.size; ++j) {
            if (check(inputArray.arr[i], inputArray.arr[j], result)) {
                count++;
            }
        }
    }
    return count;
}

void stringsCrossoverDemo() {
    char mergedString[256];
    int length;
    int command;
    printf(">>> Start >>>\n");
    do {
        fflush(stdin);
        printf("Enter length of strings array:\n");
        length = scanInt();
        arr_string inputArr = scanStringArr(length);
        printf("Enter merged string:\n");
        fflush(stdin);
        scanf("%[^\n]s", mergedString);
        int result = stringsCrossover(inputArr, mergedString);
        freeStringArr(inputArr);
        printf("Result: %d\n", result);
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = _getch();
    } while (command == ENTER_KEY);
    printf("<<< End <<<\n\n\n");
}