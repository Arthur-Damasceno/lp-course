// Trabalho 4 - Parte 2. Preencher uma matriz 3x10, a qual representa as notas de
// 10 alunos em 3 disciplinas, verificar se cada aluno foi aprovado com média maior
// ou igual a 6 e calcular a média, a maior e a menor nota de cada disciplina.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLUMNS 10

int main() {
    srand(time(0));

    int grades[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            float grade = rand() % 101 / 10.;
            grades[i][j] = grade;
        }
    }

    float max[] = {-1, -1, -1};
    float min[] = {11, 11, 11};
    float averages[] = {0, 0, 0};

    for (int j = 0; j < COLUMNS; j++) {
        float average = 0;

        for (int i = 0; i < ROWS; i++) {
            int grade = grades[i][j];
            averages[i] += grade;
            average += grade;

            if (grade > max[i]) {
                max[i] = grade;
            } else if (grade < min[i]) {
                min[i] = grade;
            }
        }

        average /= ROWS;

        if (average >= 6) {
            printf("Aluno #%d foi aprovado com média %.1f\n", j + 1, average);
        } else {
            printf("Aluno #%d foi reprovado com média %.1f\n", j + 1, average);
        }
    }

    for (int i = 0; i < ROWS; i++) {
        averages[i] /= COLUMNS;

        printf("A média da prova #%d foi %.1f, com nota máxima %.1f e mínima %.1f\n", i + 1, averages[i], max[i], min[i]);
    }

    return 0;
}
