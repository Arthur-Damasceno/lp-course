// 27. Ler um número e escrever todos os seus divisores.

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Os divisores são:\n");

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
