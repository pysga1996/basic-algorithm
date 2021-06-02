#include <common-functions.h>
#include "main.h"

#define EXIT_CODE 0

void mapSelection(int selection);

int main() {
    int command;
    arr_char *menu = readMenu("matrix.menu.txt");
    do {
        printf("%s", menu->arr);
        command = scanInt();
        mapSelection(command);
    } while (command != EXIT_CODE);
    deleteString(menu);
}

void mapSelection(const int selection) {
    switch (selection) {
        case 1:
            checkBoardCellColorDemo();
            break;
        case 2:
            bishopAndPawnDemo();
            break;
        case 3:
            chessKnightDemo();
            break;
        default:
            break;
    }
}

