/* Pag. 117 es. 9
Il sistema di riscaldamento di una fabbrica si accende quando la media delle temperature, registrate
in tre punti diversi dell'edificio, è inferiore a un valore inserito. Scrivi un programma che permetta di
inserire il valore limite di accensione e, ricevute in input le temperature registrate nei tre punti,
ne calcoli la media segnalando se il riscaldamento verrà accesso o meno.
*/

#include <stdio.h>
int main() {
    float temp1, temp2, temp3, media, limite;

    printf("Inserisci il valore limite di accensione del riscaldamento: ");
    scanf("%f", &limite);

    printf("Inserisci la temperatura registrata nel punto 1: ");
    scanf("%f", &temp1);
    printf("Inserisci la temperatura registrata nel punto 2: ");
    scanf("%f", &temp2);
    printf("Inserisci la temperatura registrata nel punto 3: ");
    scanf("%f", &temp3);

    media = (temp1 + temp2 + temp3) / 3; // media temperature

    if (media < limite) {
        printf("La media delle temperature e' %.2f. Il riscaldamento verra' acceso.\n", media);
    } else {
        printf("La media delle temperature e' %.2f. Il riscaldamento non verra' acceso.\n", media);
    }

    return 0;
}