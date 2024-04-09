// 18. Calcular a seguinte série: M = 37*38 + (36*37)/2 + (35*36)/3 + ... + 2/37

#include <stdio.h>

int main() {
    double sum = 0;

    for (double i = 37; i > 0; i--) {
        sum += (i*(i+1))/(38 - i);
    }

    printf("O valor da série é %lf\n", sum);

    return 0;
}
