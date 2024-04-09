// Parte 1 Questão 5. Ler uma quantidade desconhecida de temperaturas até que seja digitado o número 1000
// e imprimir a quantidade de dados coletados, a média, o maior e o menor valor das temperaturas.

#include <stdio.h>
#include <stdbool.h>

bool read(double* num) {
    scanf("%lf", num);
    return *num != 1000;
}

int main() {
    double max, min, current;
    double sum = 0;
    int amount = 0;

    printf("Digite as temperaturas (Digite 1000 para sair):\n");
    scanf("%lf", &max);

    min = max;
    current = max;
    sum += max;
    amount++;

    while (read(&current)) {
        if (current > max) {
            max = current;
        } else if (current < min) {
            min = current;
        }

        sum += current;
        amount++;
    }

    double average = sum / amount;

    printf(
        "Foram coletadas %d amotras com média %lf°C, das quais a maior é %lf°C e a menor é %lf°C\n",
        amount, average, max, min
    );

    return 0;
}
