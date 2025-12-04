// Pag. 118 es. 11
#include <stdio.h>
int main() {
    float a, b, risultato;
    printf("Risolutore equaz. grado 1: ax+b=0\nInserisci il valore di a: ");
    scanf("%f",&a);
    printf("Inserisci il valore di b: ");
    scanf("%f",&b);
    if (a!=0) {
        risultato = -(b/a);
        printf("Il risultato e': %.2f\n", risultato);
    } else if (a==0 && b!=0) {
        printf("L'equazione e' impossibile.\n");
    } else {
        printf("L'equazione e' indeterminata.\n");
    }
}