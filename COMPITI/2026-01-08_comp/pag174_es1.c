// Pag 174 es. 1
#include <stdio.h>

int main() {
    for (int r=1;r<=20;r++) {
        float c = 2*r*3.14;
        float A = r*r*3.14;
        printf("\n----------\nRAGGIO %d\nCirconferenza: %f\nRaggio: %f", r, c, A);
    }
    return 0;
}