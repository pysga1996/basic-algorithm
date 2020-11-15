#include <stdio.h>
#include <common-functions.h>
#include "main.h"
#define EXIT_CODE 0

void mapSelection(const int selection) {
    switch (selection) {
        case 1:
            checkStrongPasswordDemo();
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
        command = scanInt();
        mapSelection(command);
    } while (command != EXIT_CODE);
    printf("---End---\n");
}
