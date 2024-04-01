// 33. Ler um número e escrever se ele é primo ou não.

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("O número não entra na definição\n");
        return 1;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("O número não é primo\n");
            return 0;
        }
    }

    printf("O número é primo\n");

    return 0;
}
