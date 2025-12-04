/* Pag. 117 es. 8
Leggi in input 3 numeri e verifica se sono in progressione aritmetica
Una successione numeri è in prog. aritmetica se la diff. tra ciascun num e il successivo è costante
*/

#include <stdio.h>
int main() {
    double n1, n2, n3;
    printf("Inserisci tre numeri: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if ((n2 - n1) == (n3 - n2)) {
        printf("I numeri sono in progressione aritmetica.\n");
    } else {
        printf("I numeri non sono in progressione aritmetica.\n");
    }
    return 0;
}