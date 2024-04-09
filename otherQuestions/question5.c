// 5. Ler três notas (sistema do IFCE), calcular a média (ponderada), verificar se foi aprvoado (média maior ou igual a 7), caso contrário, calcular a nota necessário no exame final para ser aprovado (média maior ou igual a 5).

#include <stdio.h>

int main() {
    float g1, g2;

    printf("Digite as notas: ");
    scanf("%f %f", &g1, &g2);

    float average = (2*g1 + 3*g2) / 5;

    if (average >= 7) {
        printf("Aprovado\n");
    } else if (average < 3) {
        printf("Reprovado\n");
    } else {
        float finalGrade = 10 - average;

        printf("Você precisa tirar %f no exame final para ser aprovado\n", finalGrade);
    }

    return 0;
}
