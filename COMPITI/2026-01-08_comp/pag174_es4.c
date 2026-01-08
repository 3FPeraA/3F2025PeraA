// Pag 174 es. 4
#include <stdio.h>

int main() {
    int maxInput, num;
    printf("Inserisci limite inserimento input: ");
    scanf("%d",&maxInput);
    for (int i=1; i<=maxInput; i++) {
        printf("Inserisci numero divisibile per 7: ");
        scanf("%d", &num);
        if (num % 7 == 0) { // divisibile per 7
            printf("Il numero è divisibile per 7.\nNumeri inseriti: %d\nFINE PROGRAMMA.", i);
            break;
        } else { // non divisibile per 7
            if (i<maxInput) {
                printf("Il numero NON è divisibile per 7. Riprova.\n");
            } else {
                printf("Errore: superato il numero massimo di tentativi (%d)\nFINE PROGRAMMA.", maxInput);
            }
        }
    }
    return 0;
}