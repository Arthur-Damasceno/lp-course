// 14. Supondo que a população da cidade A é de 50_000 habitantes com uma taxa anual de crescimento de 3% e que a
// população da cidade B é de 200_000 habitantes com uma taxa de crescimento de 1.5%. Calcular e escrever o número 
// de anos necessários para que a população da cidade A ultrapasse a da cidade B, mantidas essas taxas de crescimento.

#include <stdio.h>

const int POPULATION_A = 50000;
const int POPULATION_B = 200000;

const float GROWTH_RATE_A = 1.03;
const float GROWTH_RATE_B = 1.015;

int main() {
    float pA = POPULATION_A;
    float pB = POPULATION_B;
    int ages = 0;

    while (pA < pB) {
        pA *= GROWTH_RATE_A;
        pB *= GROWTH_RATE_B;
        ages++;
    }

    printf("Foram necessários %d anos para que a população da cidade A ultrapassasse a cidade B\n", ages);

    return 0;
}
