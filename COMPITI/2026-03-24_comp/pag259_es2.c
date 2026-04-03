// Pag 259 es. 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    char **names = malloc(N * sizeof(char*));
    if (!names) return 0;
    for (int i = 0; i < N; ++i) {
        names[i] = malloc(101);
        if (!names[i]) return 0;
        scanf(" %100s", names[i]);
    }
    /* find min and max lexicographically */
    int imin = 0, imax = 0;
    for (int i = 1; i < N; ++i) {
        if (strcmp(names[i], names[imin]) < 0) imin = i;
        if (strcmp(names[i], names[imax]) > 0) imax = i;
    }
    printf("%s\n%s\n", names[imin], names[imax]);
    for (int i = 0; i < N; ++i) free(names[i]);
    free(names);
    return 0;
}
