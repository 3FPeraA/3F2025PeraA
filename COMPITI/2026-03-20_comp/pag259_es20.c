// Pag 259 es. 20
// Implementazione manuale
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    double *t = malloc(N * sizeof(double));
    if (!t) return 0;
    double sum = 0;
    for (int i = 0; i < N; ++i) { scanf("%lf", &t[i]); sum += t[i]; }
    double avg = sum / N;
    int idx_min = 0, idx_max = 0;
    for (int i = 1; i < N; ++i) {
        if (t[i] < t[idx_min]) idx_min = i;
        if (t[i] > t[idx_max]) idx_max = i;
    }
    int idx_dev = 0;
    double max_dev = fabs(t[0] - avg);
    for (int i = 1; i < N; ++i) {
        double dev = fabs(t[i] - avg);
        if (dev > max_dev) { max_dev = dev; idx_dev = i; }
    }
    printf("%.2f\n", avg);
    printf("%d\n", idx_min + 1);
    printf("%d\n", idx_max + 1);
    printf("%d\n", idx_dev + 1);
    free(t);
    return 0;
}
