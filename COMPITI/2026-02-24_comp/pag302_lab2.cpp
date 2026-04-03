#include <stdio.h>
#include <stdlib.h>
#define NRMax 20
#define NCMax 30

void StampaPerRighe(){
	int mat[NRMax][NCMax], nr, nc;
	int  r, c;
	FILE *f;
	f = fopen("numeri.txt", "r");
	if (f == NULL)
		printf("Errore nell'apertura del file\n");
	else {
		fscanf(f,"%d %d", &nr, &nc);
		for (r = 0; r < nr; r++)
			for (c = 0; c < nc; c++)
				fscanf(f,"%d", &mat[r][c]);
	}
	fclose(f);
	printf("matrice di %d righe e %d colonne per righe\n", nr,nc);
	for (r = 0; r < nr; r++)
	{
		for (c = 0; c < nc; c++)
			printf("%d\t", mat[r][c]);
		printf ("\n");
	}
}
	
void StampaPerColonne(){
	int mat[NRMax][NCMax], nr, nc;
	int  r, c;
	FILE *f;
	f = fopen("numeri.txt", "r");
	if (f == NULL)
		printf("Errore nell'apertura del file\n");
	else {
		fscanf(f,"%d %d", &nr, &nc);
		for (c = 0; c < nc; c++)
			for (r = 0; r < nr; r++)
				fscanf(f,"%d", &mat[r][c]);
	}
	fclose(f);
	printf("matrice di %d righe e %d colonne per colonne\n", nr,nc);
	for (c = 0; c < nc; c++)
	{
		for (r = 0; r < nr; r++)
			printf("%d\t", mat[r][c]);
		printf ("\n");
	}
}
	
int main(int argc, char *argv[])
{
	StampaPerRighe();
	StampaPerColonne();
	system("PAUSE");
	return 0;
}


