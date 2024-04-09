// 4. Ler três números, identificar se podem ser os lados de um triângulo e classificá-lo em equilátero, isóceles ou escaleno.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float l1, l2, l3;

    printf("Digites os números: ");
    scanf("%f %f %f", &l1, &l2, &l3);

    if (l1 > l2 + l3 || l1 < abs(l2 - l3)) {
        printf("Os números não podem ser os lados de um triângulo\n");
        return 0;
    }

    if (l1 == l2 & l1 == l3) {
        printf("É um triângulo equilátero\n");
    } else if (l1 == l2 || l1 == l3 || l2 == l3) {
        printf("É um triângulo isóceles\n");
    } else {
        printf("É um triângulo escaleno\n");
    }

    return 0;
}
