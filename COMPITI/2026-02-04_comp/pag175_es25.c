// Pag 175 es. 25
#include <stdio.h>

int main() {
    double stipendio_totale = 0;
    double guadagno_giorno = 10.0;

    for (int i=1; i<=22; i++) {
        stipendio_totale += guadagno_giorno;
        guadagno_giorno *= 2;
    }

    printf("Lo stipendio dopo 22 giorni e': %.2f Euro\n", stipendio_totale);
    return 0;
}
