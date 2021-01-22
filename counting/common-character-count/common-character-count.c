#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <common-functions.h>

int commonCharacterCount(char* s1, char* s2);

void commonCharacterCountDemo() {
    char string1[256];
    char string2[256];
    int command;
    int result;
    printf(">>> Start >>>\n");
    do {
        fflush(stdin);
        printf("Enter string 1:\n");
        scanf("%s", string1);
        printf("Enter string 2:\n");
        scanf("%s", string2);
        result = commonCharacterCount(string1, string2);
        printf("Common character count of the 2 given strings: %d!\n", result);
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = _getch();
    } while (command == ENTER_KEY);
    printf("<<< End <<<\n\n\n");
}

int commonCharacterCount(char* s1, char* s2) {
    int result = 0;
    int* arr1 = calloc(128, sizeof(int));
    int* arr2 = calloc(128, sizeof(int));
    for (int i = 0; i < strlen(s1); ++i) {
        arr1[s1[i]]++;
    }
    for (int i = 0; i < strlen(s2); ++i) {
        arr2[s2[i]]++;
    }
    for (int i = 97; i <= 122; i++) {
        result += min(arr1[i], arr2[i]);
    }
    free(arr1);
    free(arr2);
    return result;
}