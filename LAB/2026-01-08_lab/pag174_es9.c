// Pag 174 es. 9
#include <stdio.h>

int main() {
    int n;
    inserisciNum:
    printf("Inserisci numero: ");
    scanf("%d",&n);
    if (n>0) {
        int number=1;
        printf("-----\nRISULTATO:");
        for (int i=1; i<=n; i++) {
            printf("\n%d",number);
            number=number*2;
        }
    } else {
        goto inserisciNum;
    }
    return 0;
}