// Pag 260
#include <stdio.h>

int main() {
    float arance[31];
    float somma = 0, media, max;
    int giorno_max;

    printf("Inserisci i quintali raccolti per ogni giorno di gennaio:\n");
    for (int i = 0; i < 31; i++) {
        printf("Giorno %d: ", i + 1);
        scanf("%f", &arance[i]);
        somma += arance[i];
    }

    media = somma / 31;
    printf("\nMedia mensile: %.2f quintali\n", media);

    printf("\nGiorni con raccolto inferiore alla media:\n");
    for (int i = 0; i < 31; i++) {
        if (arance[i] < media) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    max = arance[0];
    giorno_max = 1;
    for (int i = 1; i < 31; i++) {
        if (arance[i] > max) {
            max = arance[i];
            giorno_max = i + 1;
        }
    }
    printf("\nIl raccolto maggiore e' stato di %.2f quintali il giorno %d.\n", max, giorno_max);

    printf("\nRaccolto dei lunedi di gennaio:\n");
    for (int i = 4; i < 31; i += 7) { // ind 4 = giorno 5
        printf("Lunedi %d: %.2f quintali\n", i + 1, arance[i]);
    }

    return 0;
}