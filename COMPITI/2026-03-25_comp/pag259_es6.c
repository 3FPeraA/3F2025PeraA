// Pag 259 es. 6
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    char **squadre = malloc(N * sizeof(char*));
    char **serie = malloc(N * sizeof(char*));
    int *punti = malloc(N * sizeof(int));
    if (!squadre || !serie || !punti) return 0;
    for (int i = 0; i < N; ++i) {
        squadre[i] = malloc(101);
        serie[i] = malloc(3);
        if (!squadre[i] || !serie[i]) return 0;
        scanf(" %100s %2s %d", squadre[i], serie[i], &punti[i]);
    }

    /* 1) visualizzare elenco squadre di serie A con relativi punti */
    for (int i = 0; i < N; ++i) {
        if (serie[i][0] == 'A') printf("%s %d\n", squadre[i], punti[i]);
    }

    /* 2) costruire e stampare vettore CLASSIF con solo le squadre di serie B */
    char **classif = malloc(N * sizeof(char*));
    int cc = 0;
    for (int i = 0; i < N; ++i) {
        if (serie[i][0] == 'B') { classif[cc] = malloc(101); strcpy(classif[cc], squadre[i]); cc++; }
    }
    for (int i = 0; i < cc; ++i) {
        if (i) printf(" ");
        printf("%s", classif[i]);
    }
    printf("\n");

    /* 3) cercare e stampare il nome della squadra campione di serie A (max punti) */
    int maxp = -1, idx = -1;
    for (int i = 0; i < N; ++i) {
        if (serie[i][0] == 'A') {
            if (punti[i] > maxp) { maxp = punti[i]; idx = i; }
        }
    }
    if (idx != -1) printf("%s\n", squadre[idx]);

    for (int i = 0; i < N; ++i) { free(squadre[i]); free(serie[i]); }
    free(squadre); free(serie); free(punti);
    for (int i = 0; i < cc; ++i) free(classif[i]); free(classif);
    return 0;
}
