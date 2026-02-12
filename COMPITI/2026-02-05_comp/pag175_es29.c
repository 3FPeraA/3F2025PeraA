// Pag 175 es. 29
#include <stdio.h>

int main() {
    int N;
    printf("Numero misurazioni: ");
    scanf("%d", &N);

    float somma=0, val, v_max, v_min;
    for (int i=0; i<N ; i++) {
        printf("Misura %d: ", i+1);
        scanf("%f", &val);
        if (i == 0) {
            v_max = v_min = val;
        }
        if (val > v_max) v_max = val;
        if (val < v_min) v_min = val;
        somma += val;
    }

    float m = somma/N;
    float e_a = (v_max-v_min)/2.0;
    float e_r = e_a/m;
    float e_p = e_r*100.0;

    printf("Errore Assoluto: %.4f\n", e_a);
    printf("Errore Relativo: %.4f\n", e_r);
    printf("Errore Percentuale: %.2f%%\n", e_p);
    return 0;
}