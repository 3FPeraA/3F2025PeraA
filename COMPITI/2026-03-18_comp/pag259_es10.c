// Pag 259 es. 10
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int *v = malloc(N * sizeof(int));
    if (!v) return 0;
    int sum = 0;
    for (int i = 0; i < N; ++i) { scanf("%d", &v[i]); sum += v[i]; }
    int cnt_ins = 0;
    int first = 1;
    for (int i = 0; i < N; ++i) {
        if (v[i] < 6) {
            if (!first) printf(" ");
            printf("%d", v[i]);
            first = 0;
            ++cnt_ins;
        }
    }
    printf("\n");
    printf("%d\n", cnt_ins);
    if (N > 0) printf("%.2f\n", (double)sum / N);
    free(v);
    return 0;
}
