// Parte 1 Questão 3. Ler uma quantidade desconhecida de notas até que seja digitado um número negativo
// e imprimir o número de candidatos, a média, a maior e a menor das notas.

#include <stdio.h>
#include <stdbool.h>

bool read(double* num) {
    scanf("%lf", num);
    return *num >= 0;
}

int main() {
    double max, min, current;
    double sum = 0;
    int amount = 0;

    printf("Digite as notas (Digite um número negativo para sair):\n");
    scanf("%lf", &max);

    if (max < 0) {
        printf("Não há candidatos no concurso!\n");
        return 0;
    }

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
        "Foram registrados %d candidatos com notas cuja média é %lf, das quais a maior é %lf e a menor é %lf\n",
        amount, average, max, min
    );

    return 0;
}
