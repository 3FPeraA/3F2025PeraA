// Pag 175 es. 30
#include <stdio.h>

int main() {
    int N;
    do {
        printf("Inserisci un numero N: ");
        scanf("%d", &N);
    } while (N<=0);

    int termine = 1;
    while (termine <= N) {
        termine *= 2;
    }
    printf("Il primo termine maggiore di %d e': %d\n", N, termine);
    return 0;
}