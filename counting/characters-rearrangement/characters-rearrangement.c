#include <stdlib.h>
#include <common-functions.h>

int charactersRearrangement(char* string1, char* string2);

void charactersRearrangementDemo() {
    char string1[512];
    char string2[512];
    int command;
    printf(">>> Start >>>\n");
    do {
        printf("Enter the first string:\n");
        scanString(string1);
        printf("Enter the second string:\n");
        scanString(string2);
        printf("Enter array length:\n");
        if (charactersRearrangement(string1, string2)) {
            printf("The second string can be rearranged to match the first string!\n");
        } else {
            printf("The second string cannot be rearranged to match the first string!\n");
        }
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = getc(stdin);
    } while (command == NEWLINE);
    printf("<<< End <<<\n\n\n");
}

int charactersRearrangement(char* string1, char* string2) {
    return 0;
}
