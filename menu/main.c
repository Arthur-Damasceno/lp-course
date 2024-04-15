// Parte 2 Questão 1. Ler um número e a operação, dentre as quais são:
// 1 - Calcular o fatorial do número.
// 2 - Calcular a raiz quadrada do número.
// 3 - Verificar se o número é primo.
// 4 - Calcular o somatório dos dígitos do número.

#include <stdio.h>
#include <stdbool.h>
#include "../lib/factorial.h"
#include "../lib/utils.h"

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int sumDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int amount = 0;

    while (true) {
        if (amount > 0) {
            printf("Deseja continuar [S/n]?: ");

            char exitOption;
            scanf(" %c", &exitOption);

            if (exitOption != 'S') {
                return 0;
            }
        }

        printf("Digite um número não negativo: ");

        double num;
        scanf("%lf", &num);

        if (num < 0) {
            printf("O número não pode ser negativo!\n");
            continue;
        }

        printf("1 - Calcular o fatorial do número\n2 - Calcular a raiz quadrada do número\n3 - Verificar se o número é primo\n4 - Calcular o somatório dos dígitos do número\nEscolha uma opção: ");

        int option;
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("O fatorial de %d é %lld\n", num, factorial(num));
                break;
            case 2:
                printf("A raiz quadrade de %lf é %lf\n", num, sqrt(num));
                break;
            case 3:
                printf(isPrime(num) ? "O número %d é primo\n" : "O número %d não é primo\n", (int)num);
                break;
            case 4:
                printf("A soma dos dígitos de %d é %d\n", (int)num, sumDigits(num));
                break;
            default:
                printf("Deseja realmente sair [S/n]?: ");

                char exitOption;
                scanf(" %c", &exitOption);

                if (exitOption == 'S') {
                    return 0;
                }

                break;
        }

        amount++;
    }

    return 0;
}
