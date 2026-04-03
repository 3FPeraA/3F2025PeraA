// Pag 259 es. 17
// Implementazione manuale
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int N = 100;
    int v1[100];
    int v2[10] = {0};
    srand((unsigned)time(NULL));
    for (int i = 0; i < N; ++i) {
        v1[i] = (rand() % 100) + 1; /* 1..100 */
        int bucket;
        if (v1[i] < 10) bucket = 0; else bucket = (v1[i] / 10);
        if (bucket == 10) bucket = 9; /* 100 -> last bucket */
        v2[bucket]++;
    }
    for (int i = 0; i < 10; ++i) {
        if (i) printf(" ");
        printf("%d", v2[i]);
    }
    printf("\n");
    return 0;
}
