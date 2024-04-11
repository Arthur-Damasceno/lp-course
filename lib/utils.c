// Calculates the square root of a number.
double sqrt(double num) {
    if (num <= 0) {
        return 0;
    }

    double x = num / 2;

    for (int i = 0; i < 20; i++) {
        x = (x * x + num) / (2 * x);
    }

    return x;
}

// Calculates the power of a number.
double power(double num, unsigned int power) {
    if (power == 0) {
        return 1;
    }

    double x = num;

    for (int i = 1; i < power; i++) {
        x *= num;
    }

    return x;
}
