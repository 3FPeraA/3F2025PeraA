// Pag 117 es. 7
#include <stdio.h>
int main() {
    int num;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    if (num<-5 || num>10) {
        printf("Il dato è fuori dall'intervallo.");
    } else {
        printf("Ok.");
    }
}