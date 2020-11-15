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

int factorSumDemo() {

}