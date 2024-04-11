// Calculates the factorial of a number.
long long int factorial(long long int num) {
    if (num <= 1) {
        return 1;
    }

    int amount = num;

    for (int i = 2; i < amount; i++) {
        num *= i;
    }

    return num;
}
