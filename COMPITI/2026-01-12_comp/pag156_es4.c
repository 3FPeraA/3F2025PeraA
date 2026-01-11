// Pag 156 es. 4
#include <stdio.h>

int main() {
    int voti[] = {4, 6, 8, 5, 7}; 
    int n = 5;  // num voti
    int maxSuff = -1;  // voto massimo per sufficienze
    int minInsuff = 11;  // voto minimo per insufficienze

    for (int i = 0; i < n; i++) {
        if (voti[i] >= 6 && voti[i] > maxSuff) {  // sufficienza
            maxSuff = voti[i];
        }
        if (voti[i] < 6 && voti[i] < minInsuff) {  // insufficienza
            minInsuff = voti[i];
        }
    }

    printf("Massimo voto sufficiente: %d", maxSuff);
    printf("\nMinimo voto insufficiente: %d", minInsuff);

    return 0;
}