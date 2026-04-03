// Pag 259 es. 18
// Implementazione manuale
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    double *p = malloc(N * sizeof(double));
    if (!p) return 0;
    for (int i = 0; i < N; ++i) scanf("%lf", &p[i]);
    for (int i = 0; i < N; ++i) {
        if (p[i] < 5.0) p[i] *= 1.10; else p[i] *= 1.06;
    }
    for (int i = 0; i < N; ++i) {
        if (i) printf(" ");
        printf("%.2f", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}
