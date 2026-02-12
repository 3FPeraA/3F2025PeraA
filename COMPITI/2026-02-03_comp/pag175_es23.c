// Pag 175 es. 23
#include <stdio.h>

int main() {
    int x, y;
    long long risultato = 1;

    printf("Inserisci la base (X): ");
    scanf("%d", &x);
    printf("Inserisci l'esponente (Y): ");
    scanf("%d", &y);

    if (y < 0) {
        printf("Questo programma gestisce solo esponenti positivi.\n");
    } else {
        for (int i = 0; i < y; i++) {
            risultato = risultato * x;
        }

        printf("\nIl risultato di %d elevato a %d e': %lld\n", x, y, risultato);
    }

    return 0;
}
