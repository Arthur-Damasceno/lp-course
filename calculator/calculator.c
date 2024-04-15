#include <math.h>
#include <stdbool.h>

// Constants
const double PI = 3.141592654;
const double PERIOD = 2 * PI;
const double CONVERSTION_FACTOR_RAD_TO_DEGREE = PI / 180;

// Sum two numbers.
double sum(double x, double y) {
    return x + y;
}

// Subtract two numbers.
double subtract(double x, double y) {
    return x - y;
}

// Multiply two numbers.
double multiply(double x, double y) {
    return x * y;
}

// Divide two numbers.
double divide(double x, double y) {
    return x / y;
}

// Calculates the factorial of a number.
long long int factorial(long long int x) {
    if (x <= 1) {
        return 1;
    }

    int amount = x;

    for (int i = 2; i < amount; i++) {
        x *= i;
    }

    return x;
}

// Calculates the cosine of a number in radians.
double cosine(double x) {
    double sum = 1;
    bool isPositive = false;

    x = x >= 0 ? x : -x;

    while (x > PERIOD) {
        x -= PERIOD;
    }

    for (int i = 2; i <= 20; i += 2) {
        double result = pow(x, i) / factorial(i);

        sum += isPositive ? result : -result;

        isPositive = !isPositive;
    }

    return sum;
}

// Calculates the cosine of a number in degrees.
double cosineDegree(double x) {
    return cosine(x * CONVERSTION_FACTOR_RAD_TO_DEGREE);
}

// Sum the digits of a number.
int sumDigits(int x) {
    int sum = 0;

    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

// Calculates the square root of a number.
double sqrt(double num) {
    double x = num / 2;

    for (int i = 0; i < 20; i++) {
        x = (x * x + num) / (2 * x);
    }

    return x;
}
