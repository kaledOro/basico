#include <stdio.h>
#include <stdlib.h>

	char ma[8][8];
void mostrar()
{
	int i, j;
		for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
			printf("%c ", ma[i][j]);
		printf("  %d\n", i);
	}
	printf("\n0 1 2 3 4 5 6 7\n");
}
void jogador1()
{
	do
	{
	int li, cj, opcj, opli, i, j, aux, aux1;
	for (i=0;i<8;i++)
{
	for (j=0;j<8;j++)
if (ma[0][j]=='#')
{
	ma[0][j]='@';
}
}
	mostrar();
	printf("Jogador 1:\n");
	printf("digite a linha da peça que deseja jogar: ");
	scanf("%d", &li);
	printf("digite a coluna da peça que deseja jogar: ");
	scanf("%d", &cj);
	if (ma[li][cj]=='#' || ma[li][cj]=='@')
	{		
if (ma[li][cj]=='#')
{
		if (li-1 >=0 && li-1<=7 && cj+1>=0 && cj+1<=7)
		{
	if (ma[li-1][cj+1]==' ')
		ma[li-1][cj+1]='*';	
		}
		if (li-1 >=0 && li-1<=7 && cj-1>=0 && cj-1<=7)
		{
	if (ma[li-1][cj-1]==' ')
		ma[li-1][cj-1]='*';
		}
		if (li-2 >=0 && li-2<=7 && cj-2>=0 && cj-2<=7)
		{
	if (ma[li-1][cj-1]=='+')
	{
		if (ma[li-2][cj-2]==' ')
			ma[li-2][cj-2]='*';
	}
		}
		if (li-2 >=0 && li-2<=7 && cj+2>=0 && cj+2<=7)
		{
	if (ma[li-1][cj+1]=='+')
	{
		if (ma[li-2][cj+2]==' ')
			ma[li-2][cj+2]='*';
	}
		}
}
else if (ma[li][cj]=='@')
{
	aux=cj;
	aux1=li;
	while (ma[li][cj]!='+' && li>0 && li<7 && cj>0 && cj<7)
	{
		li++;
		cj++;
		if (ma[li][cj]==' ')
		ma[li][cj]='*';
	}
	if (ma[li+2][cj+2]==' ' && li+2>=0 && li+2<=7 && cj+2>=0 && cj+2<=7)
		ma[li+2][cj+2]='*';
	cj=aux;
	li=aux1;
	while (ma[li][cj]!='+' && li>0 && li<7 && cj>0 && cj<7)
	{
		li++;
		cj--;
		if (ma[li][cj]==' ')
		ma[li][cj]='*';
	}
	if (ma[li+2][cj-2]==' ' && li+2>=0 && li+2<=7 && cj-2>=0 && cj-2<=7)
		ma[li+2][cj-2]='*';
	cj=aux;
	li=aux1;
	while (ma[li][cj]!='+' && li>0 && li<7 && cj>0 && cj<7)
	{
		li--;
		cj++;
		if (ma[li][cj]==' ')
		ma[li][cj]='*';
	}
	if (ma[li-2][cj+2]==' ' && li-2>=0 && li-2<=7 && cj+2>=0 && cj+2<=7)
		ma[li-2][cj+2]='*';
	cj=aux;
	li=aux1;
	while (ma[li][cj]!='+' && li>0 && li<7 && cj>0 && cj<7)
	{
		li--;
		cj--;
		if (ma[li][cj]==' ')
		ma[li][cj]='*';
	}
	if (ma[li-2][cj-2]==' ' && li-2>=0 && li-2<=7 && cj-2>=0 && cj-2<=7)
		ma[li-2][cj-2]='*';
	cj=aux;
	li=aux1;
	}
}
		system("cls");
	mostrar();
	printf("Jogador 1\n");
	printf("digite a linha da que deseja jogar: ");
	scanf("%d", &opli);
	printf("digite a coluna da que deseja jogar: ");
	scanf("%d", &opcj);
	if (ma[opli][opcj]=='*')
	{
		if (ma[li][cj]=='#' && li>=0 && li<=7 && cj>=0 && cj<=7)
		{
		ma[opli][opcj]='#';
		if (ma[opli+1][opcj+1]=='+' && li==opli+2 && cj==opcj+2) 
			ma[opli+1][opcj+1]=' ';
		if (ma[opli+1][opcj-1]=='+' && li==opli+2 && cj==opcj-2)
			ma[opli+1][opcj-1]=' ';
		ma[li][cj]=' ';
		}
		else if (ma[li][cj]=='@' && li>=0 && li <=7 && cj>=0 && cj<=7)
		{
		ma[opli][opcj]='@';
		if (li<opli && cj<opcj)
		{
		if (ma[opli-1][opcj-1]=='+') 
			ma[opli-1][opcj-1]=' ';
		}
		else if (li<opli && cj>opcj)
		{
		if (ma[opli-1][opcj+1]=='+')
			ma[opli-1][opcj+1]=' ';
		}
		else if (li>opli && cj>opcj)
		{
		if (ma[opli+1][opcj+1]=='+') 
			ma[opli+1][opcj+1]=' ';
		}
		else if (li>opli && cj<opcj)
		{
		if (ma[opli+1][opcj-1]=='+')
			ma[opli+1][opcj-1]=' ';
		}
		ma[li][cj]=' ';
			
		}
	}
	else
	{
			for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
			if (ma[i][j]=='*')
				ma[i][j]=' ';
	}
	printf("jogada nao aceita\n");
		jogador1();
	}
		for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
			if (ma[i][j]=='*')
				ma[i][j]=' ';
	}
	break;
	}
	while(1);
}
void jogador2()
{
	
	do
	{
	int li, cj, opcj, opli, i, j;
	mostrar();
	printf("Jogador 2:\n");
	printf("digite a linha da peça que deseja jogar: ");
	scanf("%d", &li);
	printf("digite a coluna da peça que deseja jogar: ");
	scanf("%d", &cj);
	if (ma[li][cj]=='+')
	{	
		if (li+1 >=0 && li+1<=7 && cj+1>=0 && cj+1<=7)
		{
	if (ma[li+1][cj+1]==' ')
		ma[li+1][cj+1]='*';
		}			
		if (li+1 >=0 && li+1<=7 && cj-1>=0 && cj-1<=7)
		{
	if (ma[li+1][cj-1]==' ')
		ma[li+1][cj-1]='*';
		}
		if (li+2 >=0 && li+2<=7 && cj-2>=0 && cj-2<=7)
		{
	if (ma[li+1][cj-1]=='#')
	{
		if (ma[li+2][cj-2]==' ')
			ma[li+2][cj-2]='*';
	}
		}
		if (li+2 >=0 && li+2<=7 && cj+2>=0 && cj+2<=7)
		{
	if (ma[li+1][cj+1]=='#')
	{
		if (ma[li+2][cj+2]==' ')
			ma[li+2][cj+2]='*';
	}
		}
		system("cls");
	mostrar();
	printf("Jogador 2\n");
	printf("digite a linha da que deseja jogar: ");
	scanf("%d", &opli);
	printf("digite a coluna da que deseja jogar: ");
	scanf("%d", &opcj);
	if (ma[opli][opcj]=='*')
	{
		ma[li][cj]=' ';
		ma[opli][opcj]='+';
		if (ma[opli-1][opcj+1]=='#' && li==opli-2 && cj==opcj+2)
			ma[opli-1][opcj+1]=' ';
		if (ma[opli-1][opcj-1]=='#' && li==opli-2 && cj==opcj-2)
			ma[opli-1][opcj-1]=' ';
		ma[li][cj]=' ';
	}
	else
	{
			for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
			if (ma[i][j]=='*')
				ma[i][j]=' ';
	}
	printf("jogada nao aceita\n");
		jogador2();
	}
		for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
			if (ma[i][j]=='*')
				ma[i][j]=' ';
	}
	break;
	}
	}
	while(1);
}
void iniciar()
{
	int i, j;
	for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
			ma[i][j]= ' ';
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<8;j++)
			if ((i%2==0 && j%2!=0) || (j%2==0 && i%2!=0))
			ma[i][j]= '+';
	}
	for (i=5;i<8;i++)
	{
		for (j=0;j<8;j++)
			if ((i%2==0 && j%2!=0) || (j%2==0 && i%2!=0))
			ma[i][j]= '#';
	}
}
int main()
{
	int i, j, f=0, f2=0;
	iniciar();
	while (1)
	{
	jogador1();	
	for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
			if (ma[i][j]=='+')
				f++;
	}
	if (f==0)
	{
		printf("Jogador 1 ganhou\n");
		break;
	}
	else
	f=0;
		system("cls");
	jogador2();
	for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
			if (ma[i][j]=='#')
				f2++;
	}
	if (f2==0)
	{
		printf("Jogador 2 ganhou\n");
		break;
	}
	else 
	f2=0;	
		system("cls");
	}
}