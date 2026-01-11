// Pag 156 es. 3
#include <stdio.h>

int main() {
    int numeri[] = {5, 3, 8, 1, 9};  // esempio num array
    int n = 5;  // numero elementi in array
    int max = numeri[0];
    int min = numeri[0];

    for (int i = 1; i < n; i++) {
        if (numeri[i] > max) {
            max = numeri[i];
        }
        if (numeri[i] < min) {
            min = numeri[i];
        }
    }

    int differenza = max - min;
    printf("Differenza tra massimo e minimo: %d\n", differenza);

    return 0;
}