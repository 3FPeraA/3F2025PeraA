// Pag 259 es. 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpstr(const void *a, const void *b) {
    const char *const *pa = a;
    const char *const *pb = b;
    return strcmp(*pa, *pb);
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    char **cf = malloc(N * sizeof(char*));
    double *stip = malloc(N * sizeof(double));
    if (!cf || !stip) return 0;
    for (int i = 0; i < N; ++i) {
        cf[i] = malloc(101);
        if (!cf[i]) return 0;
        scanf(" %100s %lf", cf[i], &stip[i]);
    }
    double sum = 0;
    for (int i = 0; i < N; ++i) sum += stip[i];
    double avg = sum / N;

    char **out = malloc(N * sizeof(char*));
    int oc = 0;
    for (int i = 0; i < N; ++i) {
        if (stip[i] < avg) { out[oc] = malloc(101); strcpy(out[oc], cf[i]); oc++; }
    }
    if (oc > 0) qsort(out, oc, sizeof(char*), cmpstr);
    for (int i = 0; i < oc; ++i) {
        if (i) printf(" ");
        printf("%s", out[i]);
    }
    printf("\n");
    for (int i = 0; i < N; ++i) free(cf[i]); free(cf); free(stip);
    for (int i = 0; i < oc; ++i) free(out[i]); free(out);
    return 0;
}
