// PAG. 117 ES. 1

#include <stdio.h>
int main() {
    printf("Inserisci un numero: ");
    float num;
    scanf("%f", &num);
    if (num>0) {
        printf("Il numero e positivo.");
    } else if (num==0) {
        printf("Il numero e 0.");
    } else {
        printf("Il numero e negativo.");
    }
}