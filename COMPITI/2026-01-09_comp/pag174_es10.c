// Pag 174 es. 10
#include <stdio.h>

int main() {
    int N, M;
    printf("Numero righe: ");
    scanf("%d", &N);
    printf("Numero asterischi: ");
    scanf("%d", &M);
    for (int i=1;i<=N;i++) {
        for (int k=1;k<=M;k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}