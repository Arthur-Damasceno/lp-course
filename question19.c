// 19. Calcular o valor aproximado de π pela seguinte série: π = 4 - 4/3 + 4/5 - 4/7 + 4/9 + ...

#include <stdio.h>
#include <stdbool.h>

int main() {
    double sum = 0;
    bool positive = true;

    for (double i = 1; i < 750000; i += 2) {
        if (positive) {
            sum += 4/i;
        } else {
            sum -= 4/i;
        }

        positive = !positive;
    }

    printf("O valor de π é %lf\n", sum);

    return 0;
}
