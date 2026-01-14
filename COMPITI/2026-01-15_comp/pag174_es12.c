// Pag 174 es. 12
#include <stdio.h>

int main() {
    int N, K;
    printf("Quanti numeri vuoi inserire? : ");
    scanf("%d", &N);
    int numeri[N-1];
    for (int i=0; i<N; i++) {
        int num;
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        numeri[i] = num;
    }
    printf("Inserisci numero K: ");
    scanf("%d", &K);
    int maggiori=0, minori=0, uguali=0;
    for (int i=0; i<N; i++) {
        if (numeri[i]>K) {
            maggiori++;
        } else if (numeri[i]<K) {
            minori++;
        } else {
            uguali++;
        }
    }
    printf("\nNumeri minori di K: %d\nNumeri uguali a K: %d\nNumeri maggiori a K: %d", minori, uguali, maggiori);
    return 0;
}