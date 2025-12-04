#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    printf("Inserisci a, b, c in sequenza: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a!=0) {
        float delta = b*b - 4*a*c;
        if (delta>0) {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf("x1=%f x2=%f\n", x1, x2);
        } else {
            if (delta==0) {
                float x = -b / (2*a);
                printf("x=%f", x);
            } else {
                printf("L'equazione non ha radici reali.\n");
            }
        }
    } else {
        printf("L'equazione non e di secondo grado.\n");
    }
}