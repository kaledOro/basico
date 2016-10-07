#include <stdio.h>
#include <stdlib.h>
#define tela system("cls");

void A ();
int main ()
{
 A ();
}
void A ()
{
	int Ma[8][8], i, P, P1, T;
	for (i=0;i<8;i++)
	{
		for (T=0;T<8;T++)
		{
			Ma[i][T]=0;
		}
	}
	while (1)
	{
		for (i=0;i<8;i++)
	{
		for (T=0;T<8;T++)
		{
			printf("%d ", Ma[i][T]);
		}
		printf("\n");
	}
	printf("Insira a coluna a ser marcado:");
	scanf("%d", &P);
	printf("Insira a linha a ser marcado:");
	scanf("%d", &P1);
			if (Ma[P1][P]==0)
				Ma[P1][P]=1;
	tela
	}
	
}
