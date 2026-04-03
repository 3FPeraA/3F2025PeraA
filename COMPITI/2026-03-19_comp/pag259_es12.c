// Pag 259 es. 12
#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i * i <= n; i += 2) if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    for (int i = 0; i < N; ++i) {
        int x; scanf("%d", &x);
        if (is_prime(x)) {
            if (i) printf(" ");
            printf("%d", x);
        }
    }
    printf("\n");
    return 0;
}
