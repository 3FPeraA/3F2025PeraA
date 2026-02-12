// Pag 175 es. 26
#include <stdio.h>

int main() {
    int n, quadrato = 0, dispari = 1;
    printf("Inserisci N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        quadrato += dispari;
        dispari += 2; // dispari successivo
    }

    printf("Il quadrato di %d e': %d\n", n, quadrato);
    return 0;
}
