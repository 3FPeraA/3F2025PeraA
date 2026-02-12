// Pag 175 es. 24
#include <stdio.h>

int main() {
    FILE *f = fopen("Risultati.txt", "r");
    if (f == NULL) { printf("Errore apertura file!"); return 1; }

    int iscritti, votanti, nulle, bianche;
    int totIscritti = 0, totVotanti = 0, totNulle = 0, totBianche = 0;

    while (fscanf(f, "%d %d %d %d", &iscritti, &votanti, &nulle, &bianche) != EOF) {
        totIscritti += iscritti;
        totVotanti += votanti;
        totNulle += nulle;
        totBianche += bianche;
    }
    fclose(f);

    if (totIscritti > 0) {
        printf("Percentuale votanti: %.2f%%\n", (float)totVotanti / totIscritti * 100);
        printf("Percentuale bianche: %.2f%%\n", (float)totBianche / totVotanti * 100);
        printf("Percentuale nulle: %.2f%%\n", (float)totNulle / totVotanti * 100);
    }
    return 0;
}
