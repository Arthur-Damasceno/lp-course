// Parte 1 Questão 4. Calcular os primeiros 20 termos da série de Fibonacci.

#include <stdio.h>

const int AMOUNT = 20;

int main() {
    int i = 0;
    int j = 1;

    for (int k = 0; k < AMOUNT; k++) {
        printf(k == AMOUNT - 1 ? "%d\n" : "%d ", j);

        int temp = j;
        j += i;
        i = temp;
    }

    return 0;
}
