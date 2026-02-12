// Pag 175 es. 32
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, prec, diff, cont = 0;
    bool costante = true;

    printf("Inserisci numeri (999 per fine):\n");
    do {
        scanf("%d", &num);
        if (num!=999) {
            cont++;
            if (cont == 2) { // al secondo giro, calcolo prima diff
                diff = num - prec;
            } else if (cont >= 2) {
                if (num - prec != diff) { // controlla se diff attuale è = alla prima diff
                    costante = false;
                }
            }
            prec=num;
        }
    } while (num!=999);

    if (costante) {
        printf("La differenza e' costante.\n");
    } else {
        printf("La differenza NON e' costante.\n");
    }
    printf("Numeri inseriti: %d\n", cont);
    return 0;
}