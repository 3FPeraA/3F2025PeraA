// Pag 174 es. 2
#include <stdio.h>

int main() {
    int n;
    inserisciNum:
    printf("Inserisci numero: ");
    scanf("%d",&n);
    if (n>0) {
        printf("------\nNUMERI PARI:\n");
        for (int i=2;i<=(n*2);i=i+2) {
            printf("%d\n", i);
        }
        printf("------\nNUMERI DISPARI:\n");
        for (int i=1;i<=(n*2);i=i+2) {
            printf("%d\n", i);
        }
    } else {
        goto inserisciNum;
    }
    return 0;
}