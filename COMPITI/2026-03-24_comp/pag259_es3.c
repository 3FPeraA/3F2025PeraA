// Pag 259 es. 3
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int *a = malloc(N * sizeof(int));
    if (!a) return 0;
    for (int i = 0; i < N; ++i) scanf("%d", &a[i]);
    int x;
    if (scanf("%d", &x) != 1) { free(a); return 0; }
    int pos = -1;
    for (int i = 0; i < N; ++i) if (a[i] == x) { pos = i; break; }
    if (pos != -1) {
        for (int i = pos; i + 1 < N; ++i) a[i] = a[i+1];
        N -= 1;
    }
    for (int i = 0; i < N; ++i) {
        if (i) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    free(a);
    return 0;
}
