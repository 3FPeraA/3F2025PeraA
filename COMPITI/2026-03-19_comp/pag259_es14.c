// Pag 259 es. 14
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int N = 100;
    int freq[21] = {0};
    int v[N];
    srand((unsigned)time(NULL));
    for (int i = 0; i < N; ++i) {
        v[i] = (rand() % 20) + 1; /* 1..20 */
        ++freq[v[i]];
    }
    for (int num = 1; num <= 20; ++num) {
        printf("%d: %d\n", num, freq[num]);
    }
    return 0;
}
