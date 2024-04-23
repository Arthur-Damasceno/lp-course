// Trabalho 3 - Parte 1. Ler números em um arquivo e verificar se são primos,
// além de calcular o seu fatorial e raiz quadrada.

#include <stdio.h>
#include <stdbool.h>
#include "../calculator/calculator.h"

#define PATH "data/parte1.txt"

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i < num; i++) {
        if (!(num % i)) {
            return false;
        }
    }

    return true;
}

int main() {
    FILE* file = fopen(PATH, "r");
    int num;

    if (file == NULL) {
        printf("Arquivo não encontrado!\n");
        return 1;
    }

    while (!feof(file)) {
        if (ferror(file)) {
            return 1;
        }

        fscanf(file, "%d", &num);

        if (isPrime(num)) {
            printf("O número %d é primo, seu fatorial é %d e sua raiz quadrada é %.3f\n", num, factorial(num), sqrt(num));
        } else {
            printf("O número %d não é primo, seu fatorial é %d e sua raiz quadrada é %.3f\n", num, factorial(num), sqrt(num));
        }
    }

    fclose(file);

    return 0;
}
