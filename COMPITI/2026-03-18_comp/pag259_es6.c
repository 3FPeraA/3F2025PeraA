// Pag 259 es. 6
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    double *s = malloc(N * sizeof(double));
    if (!s) return 0;
    for (int i = 0; i < N; ++i) scanf("%lf", &s[i]);
    double mn = 1e300, mx = -1e300;
    int found = 0;
    for (int i = 0; i < N; ++i) {
        if (s[i] >= 1500.0 && s[i] <= 2000.0) {
            if (!found) { mn = mx = s[i]; found = 1; }
            if (s[i] < mn) mn = s[i];
            if (s[i] > mx) mx = s[i];
        }
    }
    if (found) printf("%.2f %.2f\n", mx, mn);
    free(s);
    return 0;
}
