// Pag 174 es. 16
#include <stdio.h>
#include <float.h>

int main() {
    FILE *fp;
    int N, i, tessera, tessera_min;
    float spesa, incasso_totale = 0, spesa_minima = FLT_MAX;

    fp = fopen("Clienti.txt", "r");
    if (fp == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }
    fscanf(fp, "%d", &N); // legge num clienti

    for (i = 0; i < N; i++) {
        fscanf(fp, "%d %f", &tessera, &spesa);
        incasso_totale += spesa;

        if (spesa < spesa_minima) {
            spesa_minima = spesa;
            tessera_min = tessera;
        }
    }

    fclose(fp);

    printf("Incasso totale della cassa: %.2f euro\n", incasso_totale);
    printf("Numero tessera con spesa minore: %d\n", tessera_min);

    return 0;
}
