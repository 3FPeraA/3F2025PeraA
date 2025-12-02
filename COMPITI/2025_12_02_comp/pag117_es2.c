// PAG. 117 ES. 2

#include <stdio.h>
int main() {
    printf("Inserisci 2 numeri: ");
    float a,b;
    scanf("%f %f", &a, &b);
    printf("Numeri in ordine crescente:\n");
    if (a>b) {
        printf("%f\n%f", b, a);
    } else {
        printf("%f\n%f", a, b);
    }
}