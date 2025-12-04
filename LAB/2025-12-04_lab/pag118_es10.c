// Pag. 118 es. 10

#include <stdio.h>
int main() {
    int age;
    printf("Inserisci la tua eta': ");
    scanf("%d", &age);
    if (age<14) {
        printf("\nNon puoi guidare alcun veicolo.");
    } else if (age>=21) {
        printf("\nPuoi guidare tutti i veicoli.");
    } else {
        printf("\nElenco veicoli che puoi guidare:");
        if (age>=14) {
            printf("\n- Scooter 50cc");
        }
        if (age>=16) {
            printf("\n- Moto 125cc");
        }
        if (age>=18) {
            printf("\n- Auto fino 95cv");
        }
    }
    return 0;
}