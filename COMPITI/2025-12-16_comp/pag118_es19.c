// Pag 118 es. 19
#include <stdio.h>
int main() {
    float num1, num2, somma, somma_guess;
    printf("Inserisci due numeri: ");
    scanf("%f%f", &num1, &num2);
    somma = num1 + num2;
    printf("Quanto fa la somma dei due numeri? : ");
    scanf("%f", &somma_guess);
    if (somma_guess == somma) {
        printf("Bravo, hai indovinato al primo tentativo.)");
    } else {
        printf("Hai sbagliato, prova ancora.\nQuanto fa la somma dei due numeri? : ");
        scanf("%f", &somma_guess);
        if (somma_guess == somma) {
            printf("Bravino, hai indovinato al secondo tentativo.");
        } else {
            printf("Ti serve un ripasso di matematica.");
        }
    }
    return 0;
}