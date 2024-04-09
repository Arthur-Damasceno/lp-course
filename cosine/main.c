// Parte 1 Questão 2. Dado um ângulo x em radianos, calcular o cosseno.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

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

int main() {
    double x;
    double sum = 1;
    bool isPositive = false;

    printf("Digite o ângulo em radianos: ");
    scanf("%lf", &x);
    x = x > 0 ? x : -x;

    for (int i = 2; i < 19; i += 2) {
        double result = pow(x, i) / factorial(i);

        sum += isPositive ? result : -result;

        isPositive = !isPositive;
    }

    printf("cos(%lf) = %lf\n", x, sum);

    return 0;
}
