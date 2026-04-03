// Pag 259 es. 8
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    char **tit = malloc(N * sizeof(char*));
    char **aut = malloc(N * sizeof(char*));
    int *ncopie = malloc(N * sizeof(int));
    if (!tit || !aut || !ncopie) return 0;
    for (int i = 0; i < N; ++i) {
        tit[i] = malloc(101);
        aut[i] = malloc(101);
        if (!tit[i] || !aut[i]) return 0;
        scanf(" %100s %100s %d", tit[i], aut[i], &ncopie[i]);
    }

    /* Prestito: legge un titolo e prova a prestarlo */
    char query[101];
    if (scanf(" %100s", query) == 1) {
        int found = 0;
        for (int i = 0; i < N; ++i) {
            if (strcmp(tit[i], query) == 0) { found = 1;
                if (ncopie[i] > 0) { ncopie[i] -= 1; printf("Prestito eseguito\n"); }
                else printf("Libro non disponibile\n");
                break;
            }
        }
        if (!found) printf("Titolo non trovato\n");
    }

    /* Restituzione: legge un titolo e lo incrementa */
    if (scanf(" %100s", query) == 1) {
        int found = 0;
        for (int i = 0; i < N; ++i) {
            if (strcmp(tit[i], query) == 0) { found = 1; ncopie[i] += 1; printf("Restituzione eseguita\n"); break; }
        }
        if (!found) printf("Titolo non trovato\n");
    }

    /* Stampa libri di un autore fornito in input */
    if (scanf(" %100s", query) == 1) {
        for (int i = 0; i < N; ++i) if (strcmp(aut[i], query) == 0) printf("%s\n", tit[i]);
    }

    for (int i = 0; i < N; ++i) { free(tit[i]); free(aut[i]); }
    free(tit); free(aut); free(ncopie);
    return 0;
}
