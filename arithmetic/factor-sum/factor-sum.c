#include <stdio.h>
#include <conio.h>
#include <common-functions.h>

int solve(int n) {
    int sum = 0;
    int i = 2;
    while (i <= n) {
        if (n % i == 0) {
            sum += i;
            n /= i;
        } else {
            i++;
        }
    }
    return sum;
}

int factorSum(int n) {
    while (n != solve(n)) {
        n = solve(n);
    }
    return n;
}

void factorSumDemo() {
    int command;
    printf(">>> Start >>>\n");
    do {
        printf("Press ENTER to continue, or any other key to get back to the main menu:\n");
        command = _getch();
    } while (command == ENTER);
    printf("<<< END <<<\n");
}