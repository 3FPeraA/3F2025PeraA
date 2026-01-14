// Pag 174 es. 13
#include <stdio.h>

int main() {
    int N;
    inserisciNum:
    printf("Inserisci un numero: ");
    scanf("%d", &N);
    if (N<=0) {
        printf("Il numero inserito non e' valido. Riprova.\n");
        goto inserisciNum;
    }
    int num=1; // stampa ogni volta il triplo, partendo da uno
    printf("--- RISULTATO ---");
    for (int i=1;i<=N;i++) {
        printf("\n%d", num);
        num = num*3;
    }
    return 0;
}