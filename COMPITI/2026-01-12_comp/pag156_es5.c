// Pag 156 es. 5
#include <stdio.h>

int main() {
    int coppie[][2] = {{5, 3}, {8, 2}, {6, 7}, {4, 9}}; // array di array
    int n = 4;  // num coppie
    float maxMedia;
    int maxCoppia[2];

    for (int i = 0; i < n; i++) {
        float media = (coppie[i][0] + coppie[i][1]) / 2.0;

        if (media > maxMedia) {
            maxMedia = media;
            maxCoppia[0] = coppie[i][0];
            maxCoppia[1] = coppie[i][1];
        }
    }

    printf("Coppia con la media maggiore: (%d, %d)\n", maxCoppia[0], maxCoppia[1]);

    return 0;
}