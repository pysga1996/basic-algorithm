#include <stdio.h>
#include <common-functions.h>
#include "main.h"

#define EXIT_CODE 0

const int ENTER_KEY = 13;

void mapSelection(const int selection) {
    switch (selection) {
        case 1:
            checkStrongPasswordDemo();
            break;
        case 2:
            amendTheSentenceDemo();
            break;
        case 3:
            checkPalindromeDemo();
            break;
        case 4:
            formatStringDemo();
            break;
        case 5:
            isTandemRepeatDemo();
            break;
        case 6:
            truncateStringDemo();
            break;
        case 7:
            stringsCrossoverDemo();
            break;
        case 8:
            questionCorrectionDemo();
            break;
        case 9:
            lineEncodingDemo();
            break;
        default:
            break;
    }
}

int main() {
    int command;
    do {
        printf("---String Handling Algorithm---\n");
        printf("1. Check a pass is strong or weak\n");
        printf("2. Amend the sentence\n");
        printf("3. Check palindrome string\n");
        printf("4. Format string\n");
        printf("5. Check tandem string\n");
        printf("6. Truncate string\n");
        printf("7. Strings crossover\n");
        printf("8. Question correction\n");
        printf("9. Line encoding\n");
        command = scanInt();
        mapSelection(command);
    } while (command != EXIT_CODE);
    printf("---End---\n");
}
