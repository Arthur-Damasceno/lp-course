// Trabalho 3 - Parte 2. Ler os números de cada linha de um arquivo e verificar
// se podem formar um triângulo, caso possam, informar qual.

#include <stdio.h>
#include <stdlib.h>

#define PATH "data/parte2.txt"

int main() {
    FILE* file = fopen(PATH, "r");

    if (file == NULL) {
        printf("Arquivo não encontrado!\n");
        return 1;
    }

    int i = 1;

    while (!feof(file)) {
        if (ferror(file)) {
            return 1;
        }

        int a, b, c;

        fscanf(file, "%d %d %d", &a, &b, &c);

        if (a > b + c || a < abs(b - c)) {
            printf("Os números #%d não podem ser os lados de um triângulo\n", i);
            continue;
        }

        if (a == b & a == c) {
            printf("Os números #%d podem formar um triângulo equilátero\n", i);
        } else if (a == b || a == c || b == c) {
            printf("Os números #%d podem formar um triângulo isóceles\n", i);
        } else {
            printf("Os números #%d podem formar um triângulo escaleno\n", i);
        }

        i++;
    }

    fclose(file);

    return 0;
}