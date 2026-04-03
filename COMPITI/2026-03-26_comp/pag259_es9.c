// Pag 259 es. 9
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    char **citta = malloc(N * sizeof(char*));
    int *abit = malloc(N * sizeof(int));
    if (!citta || !abit) return 0;
    for (int i = 0; i < N; ++i) {
        citta[i] = malloc(101);
        if (!citta[i]) return 0;
        scanf(" %100s %d", citta[i], &abit[i]);
    }

    /* 1) caricare e visualizzare gli array */
    for (int i = 0; i < N; ++i) printf("%s %d\n", citta[i], abit[i]);

    /* 2) visualizzare le città con relativo numero di abitanti in ordine crescente */
    int *idx = malloc(N * sizeof(int));
    for (int i = 0; i < N; ++i) idx[i] = i;
    for (int i = 0; i < N-1; ++i) for (int j = i+1; j < N; ++j)
        if (abit[idx[i]] > abit[idx[j]]) { int t = idx[i]; idx[i] = idx[j]; idx[j] = t; }
    for (int i = 0; i < N; ++i) printf("%s %d\n", citta[idx[i]], abit[idx[i]]);

    /* 3) inserire una nuova città mantenendo l'ordinamento (per abitanti) e visualizzare */
    char nc[101]; int na;
    if (scanf(" %100s %d", nc, &na) == 2) {
        int pos = N;
        for (int i = 0; i < N; ++i) if (abit[idx[i]] >= na) { pos = i; break; }
        /* create new arrays */
        char **c2 = malloc((N+1) * sizeof(char*));
        int *a2 = malloc((N+1) * sizeof(int));
        for (int i = 0, k = 0; i <= N; ++i) {
            if (i == pos) { c2[i] = malloc(101); strcpy(c2[i], nc); a2[i] = na; }
            else { c2[i] = malloc(101); strcpy(c2[i], citta[idx[k]]); a2[i] = abit[idx[k]]; ++k; }
        }
        for (int i = 0; i < N+1; ++i) printf("%s %d\n", c2[i], a2[i]);

        /* 4) eliminare la città con il minor numero di abitanti e visualizzare i dati */
        /* currently c2 is sorted ascending, so first element is min */
        for (int i = 1; i < N+1; ++i) printf("%s %d\n", c2[i], a2[i]);

        /* 5) copiare nel vettore CITTA1 i nomi delle città che si trovano nelle posizioni dispari (1-based) e ordinare, poi stampare */
        int cnt = 0;
        for (int i = 0; i < N; ++i) if (((i+1) % 2) == 1) ++cnt;
        char **c1 = malloc(cnt * sizeof(char*));
        for (int i = 0, k = 0; i < N; ++i) if (((i+1) % 2) == 1) { c1[k] = malloc(101); strcpy(c1[k++], citta[i]); }
        /* simple sort */
        for (int i = 0; i < cnt-1; ++i) for (int j = i+1; j < cnt; ++j) if (strcmp(c1[i], c1[j]) > 0) { char *t=c1[i]; c1[i]=c1[j]; c1[j]=t; }
        for (int i = 0; i < cnt; ++i) { if (i) printf(" "); printf("%s", c1[i]); }
        printf("\n");

        for (int i = 0; i < N+1; ++i) free(c2[i]); free(c2); free(a2);
        for (int i = 0; i < cnt; ++i) free(c1[i]); free(c1);
    }

    for (int i = 0; i < N; ++i) free(citta[i]); free(citta); free(abit); free(idx);
    return 0;
}
