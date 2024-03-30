// 13. Ler 100 números, calcular a média e o maior valor lido.

#include <stdio.h>

int main() {
    int max, average;

    printf("Digite os números:\n");
    scanf("%d", &max);
    average = max;

    for (int i = 0; i < 99; i++) {
        int num;

        scanf("%d", &num);

        if (num > max) {
            max = num;
        }

        average += num;
    }

    average /= 100;

    printf("O maior valor é %d e a média é %d", max, average);

    return 0;
}
