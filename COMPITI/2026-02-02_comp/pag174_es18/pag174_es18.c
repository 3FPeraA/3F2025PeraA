// Pag 174 es. 18
#include <stdio.h>

int main() {
    FILE *file;
    int numero;
    
    int sommaPari = 0, contaPari = 0;
    int sommaDispari = 0, contaDispari = 0;
    
    int maxPositivo;
    int minNegativo;
    int trovatoPositivo = 0;
    int trovatoNegativo = 0;

    file = fopen("Dati.txt", "r");

    if (file == NULL) {
        printf("Errore: impossibile aprire il file Dati.txt\n");
        return 1;
    }

    while (fscanf(file, "%d", &numero) != EOF) { // legge file fino fine
        
        if (numero % 2 == 0) {
            sommaPari += numero;
            contaPari++;
        } else {
            sommaDispari += numero;
            contaDispari++;
        }

        if (numero > 0) { // cerca max positivo
            if (trovatoPositivo == 0 || numero > maxPositivo) {
                maxPositivo = numero;
                trovatoPositivo = 1;
            }
        }
        
        if (numero < 0) { // cerca min negativo
            if (trovatoNegativo == 0 || numero < minNegativo) {
                minNegativo = numero;
                trovatoNegativo = 1;
            }
        }
    }

    fclose(file);

    printf("--- Medie ---\n");
    if (contaPari > 0) 
        printf("Media Pari: %.2f\n", (float)sommaPari / contaPari);
    else 
        printf("Nessun numero pari.\n");

    if (contaDispari > 0) 
        printf("Media Dispari: %.2f\n", (float)sommaDispari / contaDispari);
    else 
        printf("Nessun numero dispari.\n");

    printf("\n--- Valori Estremi ---\n");
    if (trovatoPositivo) 
        printf("Maggiore Positivo: %d\n", maxPositivo);
    else 
        printf("Nessun numero positivo trovato.\n");

    if (trovatoNegativo) 
        printf("Minore Negativo: %d\n", minNegativo);
    else 
        printf("Nessun numero negativo trovato.\n");

    return 0;
}
