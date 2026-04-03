// Pag 259 es. 1
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
    char **names = malloc(N * sizeof(char*));
    if (!names) return 0;
    for (int i = 0; i < N; ++i) {
        names[i] = malloc(101);
        if (!names[i]) return 0;
        scanf(" %100s", names[i]);
    }
    qsort(names, N, sizeof(char*), cmpstr);
    for (int i = 0; i < N; ++i) {
        printf("%s\n", names[i]);
        free(names[i]);
    }
    free(names);
    return 0;
}
