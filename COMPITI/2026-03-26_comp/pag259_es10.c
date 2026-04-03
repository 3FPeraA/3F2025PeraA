// Pag 259 es. 10
#include <stdio.h>
#include <stdlib.h>

void find_max_pos(int *v, int n, int *max, int *pos) {
    *max = v[0]; *pos = 0;
    for (int i = 1; i < n; ++i) if (v[i] > *max) { *max = v[i]; *pos = i; }
}

int *insert_at_pos(int *v, int *n, int pos, int val) {
    int *u = malloc((*n + 1) * sizeof(int));
    for (int i = 0; i < pos; ++i) u[i] = v[i];
    u[pos] = val;
    for (int i = pos; i < *n; ++i) u[i+1] = v[i];
    *n = *n + 1;
    return u;
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int *v = malloc(N * sizeof(int));
    if (!v) return 0;
    for (int i = 0; i < N; ++i) scanf("%d", &v[i]);
    int x; if (scanf("%d", &x) != 1) { free(v); return 0; }
    int max, pos;
    find_max_pos(v, N, &max, &pos);
    int newN = N;
    int *u = insert_at_pos(v, &newN, pos, x);
    for (int i = 0; i < newN; ++i) { if (i) printf(" "); printf("%d", u[i]); }
    printf("\n");
    free(u);
    return 0;
}
