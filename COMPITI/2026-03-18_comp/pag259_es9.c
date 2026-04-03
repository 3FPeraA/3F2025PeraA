// Pag 259 es. 9
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int N = 20;
    int v[20];
    srand((unsigned)time(NULL));
    int found = 0;
    for (int i = 0; i < N; ++i) {
        v[i] = (rand() % 100) + 1; /* 1..100 */
        if (v[i] < 10) found = 1;
    }
    for (int i = 0; i < N; ++i) {
        if (i) printf(" ");
        printf("%d", v[i]);
    }
    printf("\n");
    if (found) printf("Esiste\n"); else printf("Non esiste\n");
    return 0;
}
