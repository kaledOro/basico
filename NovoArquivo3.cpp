#include <stdio.h>
typedef struct Banco
{
	char titular[40];
	int numero;
	float saldo;
}Banco;

Banco u[15];
void Cadastrar()
{
	int i; 
	for (i=0;i<14;i++)
	{
		printf("Digite o nome do titular %d: ", i);
		fflush(stdin);
		gets(u[i].titular);
		printf("Digite o numero da conta do titular %d: ", i);
		scanf("%d", &u[i].numero);
		printf("Digite o saldo da conta %d", i);
		scanf("%f", u[i].saldo);
	}
}
void listar()
{
	int i;
	for (i=0;i<15;i++)
	{
		printf("%s\n", &u[i].titular);
	}
}
void menu ()
{
	int Opc;
	printf("==========Banco Sis===============\nMenu\n<1> Cadastrar Contaria Bancaria\n<2> Listar todas as contas em tela\n<3> Consultar as contas de um cliente (pelo numero da conta)\n");
	printf("<4> Consultar o saldo de uma conta (pelo numero da conta)\n0 Sair");
	scanf("%d", &Opc);
	if (Opc==1)
		cadastrar();
   else if (Opc==2)
   	
   else if (Opc==3)
   	
   else if (Opc==4)
   	 
}
