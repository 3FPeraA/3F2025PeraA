// Pag 259 es. 3
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int *a = malloc(N * sizeof(int));
    if (!a) return 0;
    for (int i = 0; i < N; ++i) scanf("%d", &a[i]);
    int ordinato = 1;
    for (int i = 1; i < N; ++i) {
        if (a[i] <= a[i-1]) { ordinato = 0; break; }
    }
    if (ordinato) printf("Ordinato\n"); else printf("Non ordinato\n");
    free(a);
    return 0;
}
