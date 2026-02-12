// Pag 175 es. 22
#include <stdio.h>

int main() {
    int a, b;
    int quoziente = 0;
    int resto;

    printf("Inserisci il dividendo (a): ");
    scanf("%d", &a);
    printf("Inserisci il divisore (b): ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Errore: la divisione per zero non e' definita.\n");
        return 1;
    }
    resto = a;
    while (resto >= b) { // sottrai finche resto >= b
        resto = resto - b;
        quoziente++; // +1 nel quoziente
    }

    printf("\n--- Risultati ---\n");
    printf("Quoziente: %d\n", quoziente);
    printf("Resto: %d\n", resto);

    return 0;
}
