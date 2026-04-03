// Pag 259 es. 1
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int *a = malloc(N * sizeof(int));
    if (!a) return 0;
    for (int i = 0; i < N; ++i) scanf("%d", &a[i]);
    int idx;
    if (scanf("%d", &idx) != 1) { free(a); return 0; }
    /* assumiamo indice 1-based come negli esercizi; converto a 0-based */
    idx -= 1;
    if (idx >= 0 && idx < N) a[idx] *= 2;
    for (int i = 0; i < N; ++i) {
        if (i) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    free(a);
    return 0;
}
