// Pag 259 es. 15
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n1, n2;
    if (scanf("%d", &n1) != 1) return 0;
    char **a1 = malloc(n1 * sizeof(char*));
    for (int i = 0; i < n1; ++i) {
        a1[i] = malloc(101);
        scanf("%100s", a1[i]);
    }
    if (scanf("%d", &n2) != 1) { for (int i=0;i<n1;++i) free(a1[i]); free(a1); return 0; }
    char **a2 = malloc(n2 * sizeof(char*));
    for (int i = 0; i < n2; ++i) {
        a2[i] = malloc(101);
        scanf("%100s", a2[i]);
    }
    char target[101];
    if (scanf("%100s", target) != 1) { /* cleanup */
        for (int i=0;i<n1;++i) free(a1[i]); free(a1);
        for (int i=0;i<n2;++i) free(a2[i]); free(a2);
        return 0;
    }
    int in1 = 0, in2 = 0;
    for (int i = 0; i < n1; ++i) if (strcmp(a1[i], target) == 0) { in1 = 1; break; }
    for (int i = 0; i < n2; ++i) if (strcmp(a2[i], target) == 0) { in2 = 1; break; }
    if (in1 && in2) printf("Entrambi\n");
    else if (in1) printf("A1\n");
    else if (in2) printf("A2\n");
    else printf("Non trovato\n");

    for (int i=0;i<n1;++i) free(a1[i]); free(a1);
    for (int i=0;i<n2;++i) free(a2[i]); free(a2);
    return 0;
}
