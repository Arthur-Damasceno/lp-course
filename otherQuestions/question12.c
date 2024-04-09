// 12. Calcular o fatorial de um número.

#include <stdio.h>

long long factorial(long long num) {
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
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O número não pode ser negativo\n");
        return 1;
    }

    printf("O fatorial de %d é %lld\n", num, factorial(num));

    return 0;
}
