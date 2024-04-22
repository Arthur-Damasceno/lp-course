// Trabalho 4 - Parte 1. Preencher um vetor com 10 valores e imprimir o maior, o menor,
// a média e o desvio padrão dos valores, além de retornar se cada número é primo e a 
// soma dos sues dígitos. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>
#include "../calculator/calculator.h"

#define SIZE 10

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
    srand(time(0));

    int numbers[SIZE];
    double average = 0;
    int max = 0;
    int min = 101;

    for (int i = 0; i < SIZE; i++) {
        int number = rand() % 100 + 1;
        numbers[i] = number;
        average += number;

        if (number < min) {
            min = number;
        } else if (number > max) {
            max = number;
        }
    }

    average /= SIZE;
    double standardDeviation = 0;

    for (int i = 0; i < SIZE; i++) {
        standardDeviation += pow(numbers[i] - average, 2);
    }

    standardDeviation = sqrt(standardDeviation / SIZE);

    printf("Máximo: %d\nMínimo: %d\nMédia: %lf\nDesvio Padrão: %lf\n", max, min, average, standardDeviation);

    for (int i = 1; i <= SIZE; i++) {
        printf("#%d = %d ", i, numbers[i]);

        if (isPrime(numbers[i])) {
            printf("é primo ");
        } else {
            printf("não é primo ");
        }

        printf("e a soma dos seus dígitos é %d\n", sumDigits(numbers[i]));
    }

    return 0;
}
