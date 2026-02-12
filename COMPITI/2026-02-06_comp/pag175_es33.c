// Pag 175 es. 33
#include <stdio.h>

int main() {
    int N, M, abitanti, tot_regione, tot_globale = 0;
    char nome_regione[50];

    printf("Numero regioni: "); scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Nome regione: "); scanf("%s", nome_regione);
        printf("Numero province: "); scanf("%d", &M);
        tot_regione = 0;

        for (int j = 0; j < M; j++) {
            printf("Abitanti provincia %d: ", j + 1);
            scanf("%d", &abitanti);
            tot_regione += abitanti;
        }
        printf("Popolazione %s: %d\n", nome_regione, tot_regione);
        tot_globale += tot_regione;
    }

    printf("Popolazione totale di tutte le regioni: %d\n", tot_globale);
    return 0;
}