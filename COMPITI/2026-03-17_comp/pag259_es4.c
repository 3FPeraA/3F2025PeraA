// Pag 259 es. 4
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    double *premi = malloc(N * sizeof(double));
    if (!premi) return 0;
    for (int i = 0; i < N; ++i) scanf("%lf", &premi[i]);
    double low, high;
    if (scanf("%lf %lf", &low, &high) != 2) { free(premi); return 0; }
    int first = 1;
    for (int i = 0; i < N; ++i) {
        if (premi[i] >= low && premi[i] <= high) {
            if (!first) printf(" ");
            printf("%.2f", premi[i]);
            first = 0;
        }
    }
    printf("\n");
    free(premi);
    return 0;
}
