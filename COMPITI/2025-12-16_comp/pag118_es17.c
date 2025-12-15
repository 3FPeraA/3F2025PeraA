// Pag 118 es. 17
#include <stdio.h>

float calcoloGuadagno(int numCopie) {
    if (numCopie < 200)
        return numCopie * 0.1f;
    else if (numCopie < 300)
        return numCopie * 0.2f;
    else
        return numCopie * 0.3f;
}

int main(void) {
    char giornale1[50], giornale2[50], giornale3[50];
    int vendite1, vendite2, vendite3;
    float guadagno1, guadagno2, guadagno3;

    printf("Inserisci i nomi dei 3 giornali: ");
    if (scanf("%49s %49s %49s", giornale1, giornale2, giornale3) != 3) return 1;

    printf("Inserisci il numero di copie vendute del giornale '%s': ", giornale1);
    if (scanf("%d", &vendite1) != 1) return 1;
    printf("Inserisci il numero di copie vendute del giornale '%s': ", giornale2);
    if (scanf("%d", &vendite2) != 1) return 1;
    printf("Inserisci il numero di copie vendute del giornale '%s': ", giornale3);
    if (scanf("%d", &vendite3) != 1) return 1;

    guadagno1 = calcoloGuadagno(vendite1);
    guadagno2 = calcoloGuadagno(vendite2);
    guadagno3 = calcoloGuadagno(vendite3);

    /* Determina chi ha venduto di più */
    int maxVendite = vendite1;
    if (vendite2 > maxVendite) maxVendite = vendite2;
    if (vendite3 > maxVendite) maxVendite = vendite3;

    if (vendite1 == maxVendite)
        printf("Il giornale '%s' ha venduto più copie, in totale %d copie, con un incasso di %.2f €\n", giornale1, vendite1, guadagno1);
    else if (vendite2 == maxVendite)
        printf("Il giornale '%s' ha venduto più copie, in totale %d copie, con un incasso di %.2f €\n", giornale2, vendite2, guadagno2);
    else
        printf("Il giornale '%s' ha venduto più copie, in totale %d copie, con un incasso di %.2f €\n", giornale3, vendite3, guadagno3);

    return 0;
}