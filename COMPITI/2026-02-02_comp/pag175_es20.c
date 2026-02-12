// Pag 175 es. 20
// Gestisce anche moltiplicaz numeri negativo
#include <stdio.h>

int main() {
    int a, b;
    int prodotto = 0;

    printf("Inserisci il primo numero (a): ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero (b): ");
    scanf("%d", &b);
    
    int b_assoluto = (b<0) ? -b : b; // condizione ? valore_se_vero : valore_se_falso

    for (int i=0; i<b_assoluto; i++) {
        prodotto = prodotto + a;
    }
    if (b<0) { // se b era negativo, metti segno - risultato, secondo regola dei segni
        prodotto = -prodotto;
    }

    printf("\nIl prodotto di %d e %d e': %d\n", a, b, prodotto);

    return 0;
}
