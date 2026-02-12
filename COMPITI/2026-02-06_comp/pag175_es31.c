// Pag 175 es. 31
#include <stdio.h>
#include <string.h>

int main() {
    int giorno, copie, max_copie = -1, giorno_max;
    char feriale[20];
    float totale = 0, totale_dom = 0;
    int cont_giorni = 0, cont_dom = 0;

    printf("Inserisci i dati (giorno 0 per terminare):\n");
    while (1) {
        printf("Giorno (n.): "); scanf("%d", &giorno);
        if (giorno == 0) break;
        printf("Nome giorno: "); scanf("%s", feriale);
        printf("Copie: "); scanf("%d", &copie);

        if (copie > max_copie) {
            max_copie = copie;
            giorno_max = giorno;
        }
        totale += copie;
        cont_giorni++;

        if (strcmp(feriale, "domenica") == 0) {
            totale_dom += copie;
            cont_dom++;
        }
    }

    if (cont_giorni > 0) {
        printf("Giorno vendita max: %d\n", giorno_max);
        printf("Media giornaliera: %.2f\n", totale / cont_giorni);
        if (cont_dom > 0) printf("Media domenicale: %.2f\n", totale_dom / cont_dom);
    }
    return 0;
}