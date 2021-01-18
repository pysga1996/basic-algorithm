#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "../main.h"

int checkPalindrome(char *inputString) {
    int isPalindrome = 1;
    unsigned long long strLength = strlen(inputString);
    for (int i = 0; i < strLength; ++i) {
        if (inputString[i] != inputString[strLength - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    return isPalindrome;
}

void checkPalindromeDemo() {
    char inputString[256];
    int command;
    printf(">>> Start >>>\n");
    do {
        printf("Enter a string:\n");
        scanf("%s", inputString);
        if (checkPalindrome(inputString)) {
            printf("Your string is a palindrome string!\n");
        } else {
            printf("Your string is not a palindrome string!\n");
        }
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = _getch();
    } while (command == ENTER_KEY);
    printf("<<< End <<<\n\n\n");
}
