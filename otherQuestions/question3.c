// 3. Dados os coeficientes de uma função do 2º grau, encontrar as raízes reais.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Digite os coeficientes da função do 2º grau: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("O coeficiente de maior grau não pode ser nulo\n");
        return 1;
    }

    float delta = pow(b, 2) - 4*a*c;

    if (delta < 0) {
        printf("Não existem raízes reais\n");
    } else if (delta == 0) {
        float r = -b / (2*a);

        printf("A raíz é %f\n", r);
    } else {
        float r1 = (-b - sqrt(delta)) / (2*a);
        float r2 = (-b + sqrt(delta)) / (2*a);

        printf("As raízes são %f e %f\n", r1, r2);
    }

    return 0;
}
