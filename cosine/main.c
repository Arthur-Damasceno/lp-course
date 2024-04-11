// Parte 1 Questão 2. Dado um ângulo x em radianos, calcular o cosseno.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../lib/factorial.h"
#include "../lib/utils.h"

const double PERIOD = 2 * 3.141592654;

int main() {
    double x;
    double sum = 1;
    bool isPositive = false;

    printf("Digite o ângulo em radianos: ");
    scanf("%lf", &x);
    x = x >= 0 ? x : -x;

    while (x > PERIOD) {
        x -= PERIOD;
    }

    for (int i = 2; i < 19; i += 2) {
        double result = power(x, i) / factorial(i);

        sum += isPositive ? result : -result;

        isPositive = !isPositive;
    }

    printf("cos(%lf) = %lf\n", x, sum);

    return 0;
}
