// Pag 174 es. 17
#include <stdio.h>

int main() {
	int a, b;
	do {
		printf("\nInserisci numero A: ");
		scanf("%d",&a);
		printf("Inserisci numero B: ");
		scanf("%d",&b);
	} while (a>=b);
	printf("\nNumeri:");
	for (int i=a; i<=b; i++) {
		printf(" %d", i);
		if (i!=b) {
			printf(",");
		}
	}
}