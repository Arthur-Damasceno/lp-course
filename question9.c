// 9. Ler 20 números e escrever a diferença entre o maior e o menor valor lido.

#include <stdio.h>

int main() {
    int min, max;

    printf("Digite os números:\n");
    scanf("%d", &min);
    max = min;

    for (int i = 0; i < 19; i++) {
        int num;

        scanf("%d", &num);

        if (num < min) {
            min = num;
        } else if (num > max) {
            max = num;
        }
    }

    int difference = max - min;

    printf("A diferença entre o maior e menor é %d\n", difference);

    return 0;
}
