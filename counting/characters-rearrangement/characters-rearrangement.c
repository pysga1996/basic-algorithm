#include <stdlib.h>
#include <common-functions.h>
#include <conio.h>

int charactersRearrangement(char* string1, char* string2);

void charactersRearrangementDemo() {
    char string1[512];
    char string2[512];
    int command;

    printf(">>> Start >>>\n");
    do {
        fflush(stdin);
        printf("Enter the first string:\n");
        scanf("%s", string1);
        printf("Enter the second string:\n");
        scanf("%s", string2);
        printf("Enter array length:\n");
        if (charactersRearrangement(string1, string2)) {
            printf("All element frequencies are equal!\n");
        } else {
            printf("All element frequencies are not equal!\n");
        }
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = _getch();
    } while (command == ENTER_KEY);
    printf("<<< End <<<\n\n\n");
}

int charactersRearrangement(char* string1, char* string2) {
    return 0;
}
