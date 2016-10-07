#include <stdio.h>
#include <string.h>

struct inf
{
	int idade, Nrua, Tel, DDD;
	char rua[25], nome[25], Nc[1];
};
   int main()
   {
   	int i, Esc, Flag=0;
   	char Nom[25];
   	struct inf pessoa1[10];
   	for (i=0;i<=15;i++)
	   {
   	printf("Se ja esta cadastrado digite 1, para se cadastrar digite 2: ");
   	scanf("%d", &Esc);
   	if (Esc==1)
	   {
	   	printf("Digite se nome: ");
	   	scanf("%s", Nom);
	   	for (i=0;i<=5;i++)
		   {
		   	if (strcmp(Nom, pessoa1[i].nome) == 0)
			   {
			   	Flag = 1;
	   printf("\nNome: %s\nidade: %d\nEndereco: %s %d%s\nTelefone: (%d)%d\n\n", pessoa1[i].nome, pessoa1[i].idade, pessoa1[i].rua, pessoa1[i].Nrua, pessoa1[i].Nc, pessoa1[i].DDD, pessoa1[i].Tel);
			   }
		   }
		   if (Flag==0)
			   {
			   	printf("Nao posuimos registros em seu nome.\n");
			   	Flag = 0;
			   }
	   }
	   else
	   {
   		printf("informe seu nome: ");
	   fflush(stdin);
	   gets(pessoa1[i].nome);
	   printf("informe sua idade: ");
	   scanf("%d", &pessoa1[i].idade); 
	   printf("insira o nome da sua Rua: ");
	   fflush(stdin);
	   gets(pessoa1[i].rua);
	   printf("insira o numero da sua casa: ");
	   scanf("%d", &pessoa1[i].Nrua);
	   printf("Insira o lado da sua casa D (direita) ou E (esquerda): ");
	   fflush(stdin);
	   gets(pessoa1[i].Nc);
	   printf("Insira o DDD de sua regiao: ");
	   scanf("%d", &pessoa1[i].DDD);
	   printf("Insira seu numero de telefone: ");
	   scanf("%d", &pessoa1[i].Tel);
	   }
	   Flag = 0;
	   }
   }