// Pag 259 es. 2
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    char *v = malloc(N * sizeof(char));
    if (!v) return 0;
    for (int i = 0; i < N; ++i) scanf(" %c", &v[i]);
    char target;
    if (scanf(" %c", &target) != 1) { free(v); return 0; }
    int count = 0;
    for (int i = 0; i < N; ++i) if (v[i] == target) ++count;
    printf("%d\n", count);
    free(v);
    return 0;
}
