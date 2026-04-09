// Pag 292 es. 11
#include <stdio.h>
#include <string.h>

#define MAX_PERSONE 100
#define MAX_STR 50

int main() {
    int N;
    printf("Inserisci il numero di persone: ");
    scanf("%d", &N);

    char cognomi[MAX_PERSONE][MAX_STR];
    char citta[MAX_PERSONE][MAX_STR];
    char telefoni[MAX_PERSONE][MAX_STR];
    int giorni[MAX_PERSONE];
    int mesi[MAX_PERSONE];

    for (int i = 0; i < N; i++) {
        printf("\nPersona %d:\n", i + 1);
        printf("Cognome: "); scanf("%s", cognomi[i]);
        printf("Citta': "); scanf("%s", citta[i]);
        printf("Telefono: "); scanf("%s", telefoni[i]);
        printf("Giorno di nascita: "); scanf("%d", &giorni[i]);
        printf("Mese di nascita (1-12): "); scanf("%d", &mesi[i]);
    }

    char cittaCercata[MAX_STR];
    printf("\n--- Ricerca per citta' e nascita in Agosto ---\n");
    printf("Inserisci citta: "); scanf("%s", cittaCercata);
    for (int i = 0; i < N; i++) {
        if (strcmp(citta[i], cittaCercata) == 0 && mesi[i] == 8) {
            printf("Nominativo: %s\n", cognomi[i]);
        }
    }

    char telCercato[MAX_STR];
    printf("\n--- Ricerca per numero di telefono ---\n");
    printf("Inserisci telefono: "); scanf("%s", telCercato);
    for (int i = 0; i < N; i++) {
        if (strcmp(telefoni[i], telCercato) == 0) {
            printf("Dati: %s, %s, nato il %d/%d\n", cognomi[i], citta[i], giorni[i], mesi[i]);
        }
    }

    char cognomeCercato[MAX_STR];
    printf("\n--- Ricerca telefono da cognome ---\n");
    printf("Inserisci cognome: "); scanf("%s", cognomeCercato);
    for (int i = 0; i < N; i++) {
        if (strcmp(cognomi[i], cognomeCercato) == 0) {
            printf("Telefono di %s: %s\n", cognomi[i], telefoni[i]);
        }
    }

    int gOggi, mOggi;
    printf("\n--- Controllo Compleanni ---\n");
    printf("Inserisci giorno corrente: "); scanf("%d", &gOggi);
    printf("Inserisci mese corrente: "); scanf("%d", &mOggi);
    for (int i = 0; i < N; i++) {
        if (giorni[i] == gOggi && mesi[i] == mOggi) {
            printf("Buon compleanno a %s!\n", cognomi[i]);
        }
    }

    return 0;
}