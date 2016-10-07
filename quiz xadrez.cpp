#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char R, A=0;
		printf("Quiz sobre xadrez\n\n");
		printf("1 - quantas pecas diferentes existem no xadrez:\na - 5   b - 6   c - 8\n");
		scanf("%c", &R);
		if (R=='b')
		{
			printf("Voce acertou\n\n");
			A=A+1;
		}
		else
		{
			printf("Voce errou\n\n");
		}
			printf("2 - Quais as pssibilidades de um jogo de xadrez, terminar de forma igual e com as mesmas jogadas:\na - aproximadamente 1.000   b - aproximadamente 1.000.000  c - Maior que o numero de atomos no unverso\n");
        fflush(stdin);
				scanf("%c", &R);
		if (R=='c')
		{
			printf("Voce acertou\n\n");
			A=A+1;
		}
		else
		{
			printf("Voce errou\n\n");
		}
			printf("3 - Quantas  jogadas diferentes voce pode fazer no primeiro movimento:\na - 20   b - 30   c - 15\n");
		fflush(stdin);
		scanf("%c", &R);
		if (R=='a')
		{
			printf("Voce acertou\n\n");
			A=A+1;
		}
		else
		{
			printf("Voce errou\n\n");
		}
			printf("4 - Existe tres areas que utilizam a mesma area do cerebro que o xadrez, consequentemente se se tiver facilidade com uma delas tera facilidade com as outras, sao elas:\na - musica, astronomia, matematica   b - matematica, musica, informatica c - fisica, informatica, geologia\n");
			fflush(stdin);
		scanf("%c", &R);
		if (R=='b')
		{
			printf("Voce acertou\n\n");
			A=A+1;
		}
		else
		{
			printf("Voce errou\n\n");
		}
			printf("5 - Qual a unica peça que nao pode trocar a cor da casa na qual iniciou o jogo:\na - cavalo   b - bispo   c - peao\n");
            fflush(stdin);
				scanf("%c", &R);
		if (R=='b')
		{
			printf("Voce acertou\n\n");
			A=A+1;
		}
		else
		{
			printf("Voce errou\n\n");
		}
		A=A*2;
		printf("Voce tirou %d\n\n\n", A);
		printf("Gabarito 1-b, 2-c, 3-a, 4-b, 5-b\n\n");
		system("pause");
}