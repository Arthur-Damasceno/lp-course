// 16. Calcular o número de grãos de milho que se pode colocar num tabuleiro de xadrez,
// colocando 1 no primeiro quadro e nos quadros seguintes o dobro do quadro anterior.

#include <stdio.h>

int main() {
    long long int amount = 1;
    unsigned long long int sum = 1;

    for (int i = 0; i < 63; i++) {
        amount *= 2;
        sum += amount;
    }

    printf("O total de graõs no tabuleiro é %llu\n", sum);

    return 0;
}
