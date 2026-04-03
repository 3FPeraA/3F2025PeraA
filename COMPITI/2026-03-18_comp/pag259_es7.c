// Pag 259 es. 7
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int *v = malloc(N * sizeof(int));
    if (!v) return 0;
    for (int i = 0; i < N; ++i) scanf("%d", &v[i]);

    int sum_odd = 0, sum_even = 0;
    int first;

    /* posizioni dispari (1-based) */
    first = 1;
    for (int i = 0; i < N; ++i) {
        if (((i+1) % 2) == 1) {
            if (!first) printf(" ");
            printf("%d", v[i]);
            sum_odd += v[i];
            first = 0;
        }
    }
    printf("\n");
    printf("%d\n", sum_odd);

    /* posizioni pari (1-based) */
    first = 1;
    for (int i = 0; i < N; ++i) {
        if (((i+1) % 2) == 0) {
            if (!first) printf(" ");
            printf("%d", v[i]);
            sum_even += v[i];
            first = 0;
        }
    }
    printf("\n");
    printf("%d\n", sum_even);

    free(v);
    return 0;
}
