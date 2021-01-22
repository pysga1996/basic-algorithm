#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <common-functions.h>

int isTandemRepeat(char* inputString);

void isTandemRepeatDemo() {
    char password[256];
    int command;
    printf(">>> Start >>>\n");
    do {
        printf("Enter a string:\n");
        scanf("%s", password);
        if (isTandemRepeat(password)) {
            printf("Your string is a tandem string!\n");
        } else {
            printf("Your string is not a tandem string!\n");
        }
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = _getch();
    } while (command == ENTER_KEY);
    printf("<<< End <<<\n\n\n");
}

int isTandemRepeat(char* inputString) {
    unsigned long long strLength = strlen(inputString);
    if (strLength % 2 == 1) {
        return 0;
    }
    char* firstSubStr = calloc(strLength / 2, sizeof(char));
    char* secondSubStr = calloc(strLength / 2, sizeof(char));
    strncpy(firstSubStr, inputString, strLength / 2);
    strncpy(secondSubStr, inputString + strLength / 2, strLength / 2);
    int isTandem = 1;
    for (int i = 0; i < strLength / 2; ++i) {
        if (firstSubStr[i] != secondSubStr[i]) {
            isTandem = 0;
            break;
        }
    }
    free(firstSubStr);
    free(secondSubStr);
    return isTandem;
}