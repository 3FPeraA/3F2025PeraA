#include <stdio.h>
#include <stdlib.h>
#define N 4
void Trasposta (int m[N][N], int m1[N][N]);
int SommaDiagonale(int m[N][N]);
void Stampa(int m[N][N]);
int main(int argc, char *argv[])
{
	int mat[N][N]= {{1,3,4,5},{6,57,8,9},{10,11,12,13},{3,5,6,9}};
	int mat1[N][N];
	int tot;
	int scelta;
	do {
		printf("\n\n1.somma diagonale principale\n");
		printf("2.matrice trasposta\n");
		printf("0.esci\n");
		printf("fai una scelta: ");
		scanf("%d", &scelta);
		switch(scelta) {
		case 1:
			tot = SommaDiagonale(mat);
			printf ("somma diagonale principale = %d\n", tot);
		break;
		case 2:
			Trasposta (mat, mat1);
			printf ("\n\nmatrice data\n");
			Stampa(mat);
			printf ("\n\nmatrice trasposta\n");
			Stampa(mat1);
		break;
		}
	} while (scelta != 0);
	system("PAUSE");
	return 0;
}
void Stampa(int m[N][N])
{
	int j, i;
	for(i=0; i<N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d\t", m[i][j]);
		printf("\n");
	}
}
void Trasposta (int m[N][N], int m1[N][N])
{
	int i,j;
	for(i=0; i<N; i++)
	{
		for (j = 0; j < N; j++)
			m1[j][i] = m[i][j];
	}
}
int SommaDiagonale(int m[N][N])
{
	int i, tot;
	tot = 0;
	for (i = 0; i < N; i++)
		tot = tot + m[i][i];
	return tot;
}

