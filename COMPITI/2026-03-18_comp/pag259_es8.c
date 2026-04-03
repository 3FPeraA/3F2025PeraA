// Pag 259 es. 8
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int *v = malloc(N * sizeof(int));
    if (!v) return 0;
    for (int i = 0; i < N; ++i) scanf("%d", &v[i]);
    int count = 0;
    for (int i = 0; i + 1 < N; ++i) {
        if (v[i] == v[i+1]) ++count;
    }
    printf("%d\n", count);
    free(v);
    return 0;
}
