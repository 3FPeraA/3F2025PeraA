// Pag 174 es. 3
#include <stdio.h>

int main() {
    int num,min,max;
    printf("Inserisci limite a sinistra: ");
    scanf("%d",&min);
    printf("Inserisci limite a destra: ");
    scanf("%d",&max);
    
    num=min;
    if (num % 2 != 0) { // numero non è pari
        num = num+1;
    }
    int count = 0;
    do {
        count++;
        printf("%d\n",num);
        num=num+2;
    } while (num<=max);
    printf("Sono stati stampati %d numeri",count);
    return 0;
}