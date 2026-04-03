// Pag 259 es. 5
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int *v1 = malloc(N * sizeof(int));
    int *v2 = malloc(N * sizeof(int));
    if (!v1 || !v2) { free(v1); free(v2); return 0; }
    for (int i = 0; i < N; ++i) scanf("%d", &v1[i]);
    for (int i = 0; i < N; ++i) scanf("%d", &v2[i]);
    for (int i = 0; i < N; ++i) {
        if (i) printf(" ");
        printf("%d", v1[i] + v2[i]);
    }
    printf("\n");
    free(v1); free(v2);
    return 0;
}
