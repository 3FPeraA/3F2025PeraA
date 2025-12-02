// PAG. 117 ES. 4

#include <stdio.h>
int main() {
    printf("TRASFORMA DA ORE --> MIN/S\n");
    float ore;
    inizio:
    printf("Inserisci ore: ");
    scanf("%f", &ore);
    if (ore>0) {
        char scelta;
        richiesta:
        printf("Cosa vuoi calcolare? (m = minuti, s = ore) : ");
        scanf(" %c", &scelta);
        if (scelta=='m') {
            float ris = ore*60; // da ore a min
            printf("%f ore = %f minuti", ore, ris);
        } else if (scelta=='s') {
            float ris = ore*60*60; // da ore a sec
            printf("%f ore = %f secondi", ore, ris);
        } else {
            printf("Errore nell'inserimento dati. Riprova\n");
            goto richiesta;
        }
        return 0;
    } else {
        printf("Errore nell'inserimento dati. Riprova\n");
        goto inizio;
    }
}