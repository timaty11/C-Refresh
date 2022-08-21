int mx_factorial_iter(int n);

int mx_factorial_iter(int n) {
    if (n > 12 || n < 1 || n == 0) {
        return 0;
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

