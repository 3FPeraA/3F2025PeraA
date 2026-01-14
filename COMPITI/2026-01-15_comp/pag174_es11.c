// Pag 174 es. 11
#include <stdio.h>

int main() {
    int N;
    printf("Inserisci numero coppie: ");
    scanf("%d", &N);
    int coppie[N-1][2];
    for (int i=0;i<N;i++) {
        printf("--- COPPIA %d ---\n", i+1);
        int n1,n2;
        printf("Inserisci primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci secondo numero: ");
        scanf("%d", &n2);
        coppie[i][0] = n1;
        coppie[i][1] = n2;
    }
    int count = 0;
    for (int i=0;i<N;i++) {
        if (coppie[i][0] == coppie[i][1]) {
            count++;
        }
    }
    printf("\nCoppie con numeri uguali: %d\n", count);
    return 0;
}