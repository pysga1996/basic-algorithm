#include <stdio.h>
#include <common-functions.h>
#include "check-strong-password.h"
#define EXIT_CODE 0

void mapSelection(const int selection) {
    switch (selection) {
        case 1:
            isPrimeDemo();
            break;
        case 2:
            factorSumDemo();
            break;
        case 3:
            greatestCommonPrimeDivisorDemo();
            break;
        case 4:
            maxFractionDemo();
            break;
        case 5:
            lastDigitDiffZeroDemo();
            break;
        case 6:
            digitsProductDemo();
            break;
        case 7:
            pagesNumberingDemo();
            break;
        case 8:
            primeSumDemo();
            break;
        case 9:
            numberZeroDigitsDemo();
            break;
        default:
            break;
    }
}

int main() {
    int command;
    do {
        printf("---Arithmetical Algorithm---\n");
        printf("1. Check a number is a prime or not\n");
        printf("2. Factor sum\n");
        printf("3. Greatest Common Prime Divisor\n");
        printf("4. Max fraction\n");
        printf("5. Find last digit which is different from Zero\n");
        printf("6. Digits product\n");
        printf("7. Pages numbering\n");
        printf("8. Primes Sum\n");
        printf("9. Count number of Zero digits\n");
        printf("Choose an algorithm, or type 0 to exit:\n");
        command = scanInt();
        mapSelection(command);
    } while (command != EXIT_CODE);
    printf("---End---\n");
    return 0;
}

