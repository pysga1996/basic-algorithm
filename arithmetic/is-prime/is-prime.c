#include <stdio.h>
#include "common-functions.h"

int isPrime(int x) {
    if (x == 2) return 1;
    if (x <= 1 || x % 2 == 0) {
        return 0;
    }
    int isPrime = 1;
    for (int i = 3; i < x; i += 2) {
        if (x % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int isPrimeDemo() {
    int x;
    do {
        printf("---Start---\n");
        printf("Enter number:\n");
        x = scanInt();
        int result = isPrime(x);
        if (result) {
            printf("%d is a prime:\n", x);
        } else {
            printf("%d is not a prime", x);
        }
        printf("---End---\n\n\n");
    } while (x > 0);
    return 0;
}


