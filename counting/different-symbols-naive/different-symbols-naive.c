#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <common-functions.h>

int differentSymbolsNaive(char* s);

void differentSymbolsNaiveDemo() {
    char str[256];
    int command;
    int result;
    printf(">>> Start >>>\n");
    do {
        fflush(stdin);
        printf("Enter a string:\n");
        scanf("%s", str);
        result = differentSymbolsNaive(str);
        printf("Number of different characters of the given string: %d!\n", result);
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = _getch();
    } while (command == ENTER_KEY);
    printf("<<< End <<<\n\n\n");
}

int differentSymbolsNaive(char* s) {
    char* arrFreq = calloc(128, sizeof(char));
    unsigned long long strLength = strlen(s);
    int count = 0;
    for (int i = 0; i < strLength; ++i) {
        arrFreq[s[i]]++;
        if (arrFreq[s[i]] == 1) {
            count++;
        }
    }
    free(arrFreq);
    return count;
}
