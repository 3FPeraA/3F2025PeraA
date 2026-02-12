// Pag 175 es. 28
#include <stdio.h>

int main() {
    int N;
    do {
        printf("Inserisci N (> 0): ");
        scanf("%d", &N);
    } while (N <= 0);

    int a = 3;
    for (int i = 1; i <= N; i++) {
        a = 2 * a + i;
    }

    printf("Il termine a_%d e': %d\n", N, a);
    return 0;
}