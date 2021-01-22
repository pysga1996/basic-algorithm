#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <common-functions.h>

char* truncateString(char* s);

void truncateStringDemo() {
    char input[256];
    int command;
    printf(">>> Start >>>\n");
    do {
        fflush(stdin);
        printf("Enter a string:\n");
        scanf("%[^\n]s", input);
//        fgets (input, 256, stdin);
        char *result = truncateString(input);
        printf("%llu\n", strlen(result));
        printf("Result: %s\n", result);
        free(result);
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = _getch();
    } while (command == ENTER_KEY);
    printf("<<< End <<<\n\n\n");
}

char* truncateString(char* s) {
    int leftIndex = 0;
    int rightIndex = (int) strlen(s) - 1;
    int isCheck = 1;
    while (isCheck && leftIndex <= rightIndex) {
        isCheck = 0;
        if (s[leftIndex] % 3 == 0) {
            leftIndex++;
            isCheck = 1;
        } else if (s[rightIndex] % 3 == 0) {
            rightIndex--;
            isCheck = 1;
        } else if ((s[leftIndex] + s[rightIndex]) % 3 == 0) {
            leftIndex++;
            rightIndex--;
            isCheck = 1;
        }
    }
    int size = rightIndex - leftIndex + 1;
    char* newS = calloc(size + 1, sizeof(char));
    strncpy(newS, s + leftIndex, size);
    newS[size + 1] = TERMINATOR;
    return newS;
}