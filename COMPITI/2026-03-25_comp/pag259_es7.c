// Pag 259 es. 7
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    char **titoli = malloc(N * sizeof(char*));
    char **registi = malloc(N * sizeof(char*));
    double *incassi = malloc(N * sizeof(double));
    if (!titoli || !registi || !incassi) return 0;
    for (int i = 0; i < N; ++i) {
        titoli[i] = malloc(101);
        registi[i] = malloc(101);
        if (!titoli[i] || !registi[i]) return 0;
        scanf(" %100s %100s %lf", titoli[i], registi[i], &incassi[i]);
    }
    char query[101];
    if (scanf(" %100s", query) != 1) { /* no query -> still compute max */ }

    /* 1) stampare tutti i film di un determinato regista (fornito in input) */
    for (int i = 0; i < N; ++i) if (strcmp(registi[i], query) == 0) printf("%s\n", titoli[i]);

    /* 2) titolo e regista del film con maggiore incasso */
    int idx_max = 0;
    for (int i = 1; i < N; ++i) if (incassi[i] > incassi[idx_max]) idx_max = i;
    printf("%s %s\n", titoli[idx_max], registi[idx_max]);

    /* 3) media degli incassi dei film di un determinato regista (stesso query) */
    double sum = 0; int cnt = 0;
    for (int i = 0; i < N; ++i) if (strcmp(registi[i], query) == 0) { sum += incassi[i]; cnt++; }
    if (cnt > 0) printf("%.2f\n", sum / cnt); else printf("0.00\n");

    for (int i = 0; i < N; ++i) { free(titoli[i]); free(registi[i]); }
    free(titoli); free(registi); free(incassi);
    return 0;
}
