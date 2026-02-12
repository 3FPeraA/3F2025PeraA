// Pag 174 es. 19
#include <stdio.h>

int main() {
    int N;
    printf("Inserisci il valore di N: ");
    scanf("%d", &N);

    printf("\n--- Figura ---\n");

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
