// 2. Ler duas notas, calcular a média e escrever se foi aprovado (média maior ou igual a 5) ou reprovado.

#include <stdio.h>

int main() {
    float g1, g2;

    printf("Digite a primeira nota: ");
    scanf("%f", &g1);

    printf("Digite a segunda nota: ");
    scanf("%f", &g2);

    float average = (g1 + g2) / 2;

    if (average >= 5) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
