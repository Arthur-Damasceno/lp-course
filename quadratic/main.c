// Parte 1 Questão 1. Dados os coeficientes de uma função do 2° grau,
// encontrar as raízes reais da função.

#include <stdio.h>
#include "../lib/utils.h"

int main() {
    double a, b, c;

    printf("Digite os coeficientes da função em ordem decrescente de grau: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("O coeficiente a não pode ser nulo!\n");
        return 1;
    }

    double delta = power(b, 2) -4 * a * c;

    if (delta < 0) {
        printf("A função não possui raízes reais!\n");
    } else if (delta == 0) {
        double root = -b / (2 * a);

        printf("A raiz da função é %lf\n", root);
    } else {
        double sqrtDelta = sqrt(delta);
        double root1 = (-b + sqrtDelta) / (2 * a);
        double root2 = (-b - sqrtDelta) / (2 * a);

        printf("As raízes da função são %lf e %lf\n", root1, root2);
    }

    return 0;
}
