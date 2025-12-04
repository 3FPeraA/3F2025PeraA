/* Pag 118 es. 12
Scrivere un programma che, date le età di tre fratelli,
determini la differenza di età tra il più grande e il più piccolo.
*/
#include <stdio.h>
int main() {
    int eta1, eta2, eta3;
    int maggiore, minore, differenza;

    printf("Inserisci l'età del primo fratello: ");
    scanf("%d", &eta1);
    printf("Inserisci l'età del secondo fratello: ");
    scanf("%d", &eta2);
    printf("Inserisci l'età del terzo fratello: ");
    scanf("%d", &eta3);

    maggiore = eta1; // maggiore
    if (eta2 > maggiore) {
        maggiore = eta2;
    }
    if (eta3 > maggiore) {
        maggiore = eta3;
    }

    minore = eta1; // minore
    if (eta2 < minore) {
        minore = eta2;
    }
    if (eta3 < minore) {
        minore = eta3;
    }

    differenza = maggiore - minore;
    printf("La differenza di età tra il più grande e il più piccolo è: %d anni\n", differenza);

    return 0;
}