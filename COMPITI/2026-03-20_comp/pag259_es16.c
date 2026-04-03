// Pag 259 es. 16
// Implementazione manuale
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int *v = malloc(N * sizeof(int));
    if (!v) return 0;
    for (int i = 0; i < N; ++i) scanf("%d", &v[i]);

    int *pari = malloc(N * sizeof(int));
    int *dispari = malloc(N * sizeof(int));
    if (!pari || !dispari) { free(v); free(pari); free(dispari); return 0; }
    int pc = 0, dc = 0;
    for (int i = 0; i < N; ++i) {
        if ((v[i] % 2) == 0) pari[pc++] = v[i]; else dispari[dc++] = v[i];
    }

    for (int i = 0; i < pc; ++i) {
        if (i) printf(" ");
        printf("%d", pari[i]);
    }
    printf("\n");
    for (int i = 0; i < dc; ++i) {
        if (i) printf(" ");
        printf("%d", dispari[i]);
    }
    printf("\n");

    free(v); free(pari); free(dispari);
    return 0;
}
