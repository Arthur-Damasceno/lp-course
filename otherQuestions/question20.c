// 20. Ler um número x e calcular a seguinte série: x²⁵/1 - x²⁴/2 + x²³/3 + ... + x/25

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    double num;
    double sum = 0;
    bool positive = true;

    printf("Digite um número: ");
    scanf("%lf", &num);

    for (int i = 1; i <= 25; i++) {
        if (positive) {
            sum += pow(num, 26 - i) / i;
        } else {
            sum -= pow(num, 26 - i) / i;
        }

        positive = !positive;
    }

    printf("O valor da série é %lf\n", sum);

    return 0;
}
