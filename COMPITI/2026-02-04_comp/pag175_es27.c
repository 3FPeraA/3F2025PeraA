// Pag 175 es. 27
#include <stdio.h>

int main() {
    int n;
    long long a = 1, b = 1, succ;

    printf("Inserisci la posizione N: ");
    scanf("%d", &n);

    if (n <= 2) {
        printf("Il termine %d e': 1\n", n);
    } else {
        for (int i = 3; i <= n; i++) {
            succ = a + b;
            a = b;
            b = succ;
        }
        printf("Il termine %d e': %lld\n", n, b);
    }
    return 0;
}
