// Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial,
// em gramas, calcular o tempo necessário para que essa massa se torne menor que 0.5 gramas. Escrever a
// massa inicial, a massa final e o tempo necessário em segundos.

#include <stdio.h>

const int PERIOD = 50;

int main() {
    double initialMass, mass;
    int time = 0;

    printf("Digite a massa inicial em gramas: ");
    scanf("%lf", &initialMass);
    mass = initialMass;

    while (mass > 0.5) {
        mass /= 2;
        time += PERIOD;
    }

    printf("A massa inicial de %lfg se transformou em %lfg em %ds\n", initialMass, mass, time);

    return 0;
}
