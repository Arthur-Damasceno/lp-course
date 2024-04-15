// Trabalho 2 - Partes 1 e 2: Criar uma calculadora que tenha 9 operações, as quais são as funções do arquivo `calculator.c`.

#include <stdio.h>
#include "calculator.h"

int main() {
    int option;

    printf("------------------------------------------\n");
    printf("1 - Somar dois números\n2 - Subtrair dois números\n3 - Dividir dois números\n");
    printf("4 - Multiplicar dois números\n5 - Calcular o fatorial de um número\n6 - Calcular o cosseno de um número em radianos\n");
    printf("7 - Calcular o cosseno de um número em graus\n8 - Somar os dígitos de um número\n9 - Calcular a raiz quadrada de um número\n");

    printf("Digite uma opção: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            double x1, y1;

            printf("Digite os números a serem somados: ");
            scanf("%lf %lf", &x1, &y1);

            printf("A soma dos números é %lf\n", sum(x1, y1));

            break;
        case 2:
            double x2, y2;

            printf("Digite os números a serem subtraídos: ");
            scanf("%lf %lf", &x2, &y2);

            printf("A subtração dos números é %lf\n", subtract(x2, y2));

            break;
        case 3:
            double x3, y3;

            printf("Digite os números a serem divididos: ");
            scanf("%lf %lf", &x3, &y3);

            if (y3 == 0) {
                printf("Divisão impossível\n");
                return 1;
            }

            printf("A divisão dos números é %lf\n", divide(x3, y3));

            break;
        case 4:
            double x4, y4;

            printf("Digite os números a serem multiplicados: ");
            scanf("%lf %lf", &x4, &y4);

            printf("A multiplicação dos números é %lf\n", multiply(x4, y4));

            break;
        case 5:
            int x5;

            printf("Digite o número: ");
            scanf("%d", &x5);

            if (x5 < 0) {
                printf("Operação indefinida\n");
                return 1;
            }

            printf("O fatorial é %lld\n", factorial(x5));

            break;
        case 6:
            double x6;

            printf("Digite o número: ");
            scanf("%lf", &x6);

            printf("O cosseno é %lf\n", cosine(x6));

            break;
        case 7:
            double x7;

            printf("Digite o número: ");
            scanf("%lf", &x7);

            printf("O cosseno é %lf\n", cosineDegree(x7));

            break;
        case 8:
            int x8;

            printf("Digite o número: ");
            scanf("%d", &x8);

            printf("A soma dos dígitos é %d\n", sumDigits(x8));

            break;
        case 9:
            double x9;

            printf("Digite o número: ");
            scanf("%lf", &x9);

            if (x9 < 0) {
                printf("Operação impossível no domínio real\n");
                return 1;
            }

            printf("A raiz quadrada é %lf\n", sqrt(x9));

            break;
        default:
            printf("Nenhuma opção válida selecionada!\n");
            return 1;
    }

    return 0;
}
