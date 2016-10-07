#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define tela system("cls");

void A ();
int main ()
{
 A ();
}
void A ()
{
	char Ma[3][3], Nome1[20], Nome2[20]; 
	int i, P, P1, T, N1=0, N2=0, cont=0, Flag=0;
	printf("-----------------Jogo da Velha----------------\n\n");
	printf("Insira as colunas de 1 a 3, e linhas de 1 a 3.\n\n");
	printf("Nome jogador 1: ");
	fflush(stdin);
	gets(Nome1);
	printf("Nome jogador 2: ");
	fflush(stdin);
	gets(Nome2);
	while (1)
	{
	for (i=0;i<3;i++)
	{
		for (T=0;T<3;T++)
		{
			Ma[i][T]='_';
		}
	}
	while (1)
	{
		for (i=0;i<3;i++)
	{
		for (T=0;T<3;T++)
		{
			printf("%c ", Ma[i][T]);
		}
		printf("\n");
	}
					if (Ma[0][0]=='y' && Ma[1][1]=='y' && Ma[2][2]=='y' || Ma[0][0]=='y' && Ma[0][1]=='y' && Ma[0][2]=='y' || Ma[0][0]=='y' && Ma[1][0]=='y' && Ma[2][0]=='y' || Ma[1][0]=='y' && Ma[1][1]=='y' && Ma[1][2]=='y' || Ma[0][1]=='y' && Ma[1][1]=='y' && Ma[2][1]=='y' || Ma[0][2]=='y' && Ma[1][2]=='y' && Ma[2][2]=='y' || Ma[2][0]=='y' && Ma[2][1]=='y' && Ma[2][2]=='y' || Ma[0][2]=='y' && Ma[1][1]=='y' && Ma[2][0]=='y')
				{
					printf("Jogador %s venceu\n", Nome2);
					N2 += 1;
					printf("%s %d X %d %s\n", Nome1, N1, N2, Nome2);
					break;
				}
     while (1)
	 {
	 	if (cont%2==0)
		 {
		 	Flag = 1;
		 	cont++;
	printf("Jogador %s\n", Nome1);
	printf("Insira a coluna a ser marcado:");
	scanf("%d", &P);
	printf("Insira a linha a ser marcado:");
	scanf("%d", &P1);
			if (Ma[P1-1][P-1]=='_')
			{
				Ma[P1-1][P-1]='x';
				goto pou;
			}
				else if (Ma[P1-1][P-1]!='_')
				{
					printf("jogada nao possivel, por favor tente novamente.\n");
					cont++;
				}
	 }
	 break;
	 }
	 pou:
	 if (Flag==1)
	 {
    	for (i=0;i<3;i++)
	{
		for (T=0;T<3;T++)
		{
			printf("%c ", Ma[i][T]);
		}
		printf("\n");
	}
	Flag = 0;
	 }
				if (Ma[0][0]=='x' && Ma[1][1]=='x' && Ma[2][2]=='x' || Ma[0][0]=='x' && Ma[0][1]=='x' && Ma[0][2]=='x' || Ma[0][0]=='x' && Ma[1][0]=='x' && Ma[2][0]=='x' || Ma[1][0]=='x' && Ma[1][1]=='x' && Ma[1][2]=='x' || Ma[0][1]=='x' && Ma[1][1]=='x' && Ma[2][1]=='x' || Ma[0][2]=='x' && Ma[1][2]=='x' && Ma[2][2]=='x' || Ma[2][0]=='x' && Ma[2][1]=='x' && Ma[2][2]=='x' || Ma[0][2]=='x' && Ma[1][1]=='x' && Ma[2][0]=='x')
			{
				printf("Jogador %s ganhou\n", Nome1);
				N1 += 1;
					printf("%s %d X %d %s\n", Nome1, N1, N2, Nome2);
				break;
			}
			if (Ma[0][0]!='_' && Ma[0][1]!='_' && Ma[0][2]!='_' && Ma[1][0]!='_' && Ma[1][1]!='_' && Ma[1][2]!='_' && Ma[2][0]!='_' && Ma[2][1]!='_' && Ma[2][2]!='_')
				{
				printf("Deu velha! Empatou ");
					printf("%s %d X %d %s\n", Nome1, N1, N2, Nome2);
				break;
				}
			while (1)
			{
				if (cont%2!=0)
				{
					cont++;
	printf("Jogador %s\n", Nome2);
	printf("Insira a coluna a ser marcado:");
	scanf("%d", &P);
	printf("Insira a linha a ser marcado:");
	scanf("%d", &P1);
			if (Ma[P1-1][P-1]=='_')
			{
				Ma[P1-1][P-1]='y';
			goto poi;
			}
				else if (Ma[P1-1][P-1]!='_')
				{
					printf("jogada nao possivel, por favor tente novamente.\n");
					cont++;
				}
			}
			break;
			}
			poi:
	tela
	}
	}
}
