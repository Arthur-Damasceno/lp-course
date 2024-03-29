// 8. Ler 10 números e escrever o maior valor lido.

#include <stdio.h>

int main() {
    int max;

    printf("Digite os números:\n");
    scanf("%d", &max);

    for (int i = 0; i < 9; i++) {
        int num;

        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("O maior número lido é %d\n", max);

    return 0;
}
