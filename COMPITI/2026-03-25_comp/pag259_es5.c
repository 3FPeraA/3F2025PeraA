// Pag 259 es. 5
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int *a = malloc((N + 1) * sizeof(int));
    if (!a) return 0;
    for (int i = 0; i < N; ++i) scanf("%d", &a[i]);
    int x; if (scanf("%d", &x) != 1) { free(a); return 0; }
    int pos = 0;
    while (pos < N && a[pos] < x) pos++;
    for (int i = N; i > pos; --i) a[i] = a[i-1];
    a[pos] = x;
    for (int i = 0; i < N+1; ++i) {
        if (i) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    free(a);
    return 0;
}
