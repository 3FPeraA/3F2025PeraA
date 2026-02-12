// Pag 175 es. 21
#include <stdio.h>

int main() {
    int a, b;
    int contatore = 0;
    int motivo = 0; // 1 per uguali, 2 per b > a

    printf("Inserisci coppie di numeri.\n");

    do {
        printf("\nInserisci primo numero (a): ");
        scanf("%d", &a);
        printf("Inserisci secondo numero (b): ");
        scanf("%d", &b);

        contatore++;

        if (a == b) {
            motivo = 1;
            break;
        } 
        
        if (b > a) {
            motivo = 2;
            break;
        }
    } while (motivo==0);

	// risultati
    printf("\n--- Fine Inserimento ---\n");
    printf("Coppie totali inserite: %d\n", contatore);

    if (motivo == 1) {
        printf("Motivo termine: I due numeri sono UGUALI (%d = %d).\n", a, b);
    } else {
        printf("Motivo termine: Il secondo numero e' MAGGIORE del primo (%d > %d).\n", b, a);
    }

    return 0;
}
