// Pag 174 es. 5
#include <stdio.h>

int main() {
    int X, Y, somma = 0;
    printf("Inserisci il numero di valori da sommare (X): ");
    scanf("%d", &X);
    printf("Inserisci il numero di partenza (Y): ");
    scanf("%d", &Y);
    for (int i = 0; i < X; i++) {
        int numeroCorrente = Y + i + 1; // numeri successivi, quindi escluso il num inserito
        somma += numeroCorrente * numeroCorrente;
    }
    printf("La somma dei quadrati dei primi %d numeri successivi a %d è: %d\n", X, Y, somma);
    return 0;
}