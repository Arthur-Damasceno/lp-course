// 17. Calcular a seguinte série: A = 1 + 3/2 + 5/3 + ... + 99/50

#include <stdio.h>

int main() {
    double sum = 0;

    for (double i = 1; i <= 50; i++) {
        sum += (i*2 - 1)/i;
    }

    printf("O valor da série é %lf\n", sum);

    return 0;
}
