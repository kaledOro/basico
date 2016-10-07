#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#define FF fflush(stdin)
#define PARAR system("pause")
#define TELA system("cls")
#define MAX 500

struct CADASTRO
{
  //ARQSIT = 0 - AINDA NAO CADASTRADO
  //ARQSIT = 1 - CADASTRADO  
  //ARQSIT = 2 - DELETADO  
  int ARQSIT;
  int COD;
  char NOME[50];
  int IDADE;
  char ENDERECO[30];
  char FONE[30];
  int HORAS_TRABALHADAS;
  float VALOR_HORA;
};

CADASTRO FUN[MAX];

void gravar_arquivos();
void carregar_arquivos();
int Menu();
void Cadastrar();
void Mostrar();
void MostrarValor();
void ConsultarNome();
void Excluir();
void AlterarSalario();

int main()
{
  int i,OP;
  for(i=0;i<MAX;i++)
    FUN[i].ARQSIT = 0;
  carregar_arquivos();  
  while(1)
  {
    TELA;
    OP = Menu();
    if (OP == 1)
      Cadastrar();
    else if (OP == 2)
      Mostrar();
    else if (OP == 3)
      MostrarValor();  
    else if (OP == 4)
      Excluir();	
    else if (OP == 5)
	  ConsultarNome();
    else if (OP == 6)
      AlterarSalario();
    else if (OP == 7)
      break;
    else
      printf("OPCAO INVALIDA.\n");
    PARAR;
  }
  return 0;
}  

void Cadastrar()
{
  int i;
  for(i=0;i<MAX;i++)
  {
    TELA;
    if (FUN[i].ARQSIT != 1)
    {
      FUN[i].ARQSIT = 1;
      FUN[i].COD = i+1;
      printf("FUNCIONARIO: %d\n\n",FUN[i].COD);
      printf("Entre com o nome  do funcionario: ");
      gets(FUN[i].NOME);      
      printf("Entre com a idade do funcionario: ");
      scanf("%d",&FUN[i].IDADE);
      FF;
      printf("Entre com o endereco do funcionario: ");
      gets(FUN[i].ENDERECO);      
      printf("Entre com o telefone do funcionario: ");
      gets(FUN[i].FONE);      
      printf("Entre com o valor da hora trabalhada: ");
      scanf("%f",&FUN[i].VALOR_HORA);
	  FF;      
      printf("Qual a jornada de trabalho deste funcionario: ");
      scanf("%d",&FUN[i].HORAS_TRABALHADAS);            
      FF;	   
      break;
    }
  }
  gravar_arquivos();
}

void Mostrar()
{
  int i;
  float RECEBIDO;
  printf("\n\n------------------------CADASTRO------------------------\n\n");
  printf("\n\n%-6s %-30s %-5s %-10s\n","CODIGO","NOME","IDADE","RECEBIDO");
  for(i=0;i<MAX;i++)
  {
    if (FUN[i].ARQSIT == 1)
	{
      RECEBIDO = FUN[i].HORAS_TRABALHADAS * FUN[i].VALOR_HORA;
      printf("\n\n%-6d %-30s %-5d %-10.2f\n",FUN[i].COD,FUN[i].NOME,FUN[i].IDADE,RECEBIDO);
    }                    
  }     
}

void MostrarValor()
{
  int i;
  float RECEBIDO,VLR;
  printf("Entre com o valor para verificacao: ");
  scanf("%f",&VLR);
  FF;
  printf("\n\n----------FUNCIONARIOS QUE RECEBERAM ACIMA DE %.2f----------\n\n",VLR);
  printf("\n\n%-6s %-30s %-5s %-10s\n","CODIGO","NOME","IDADE","RECEBIDO");
  for(i=0;i<MAX;i++)
  {
    if (FUN[i].ARQSIT == 1)
	{
      RECEBIDO = FUN[i].HORAS_TRABALHADAS * FUN[i].VALOR_HORA;
      if (RECEBIDO > VLR)
        printf("\n\n%-6d %-30s %-5d %-10.2f\n",FUN[i].COD,FUN[i].NOME,FUN[i].IDADE,RECEBIDO);
	}                    
  }     
}

int ProcuraFunNome(char TMPNOME[50])
{
  int i;
  for(i=0;i<MAX;i++)
    if ((FUN[i].ARQSIT == 1) && (strcmp(FUN[i].NOME,TMPNOME) == 0))
  	  return i;
  return -1;
}

int ProcuraFunCodigo(int CODIGO)
{
  int i;	
  for(i=0;i<MAX;i++)
    if ((FUN[i].ARQSIT == 1) && (FUN[i].COD==CODIGO))
  	  return i;
  return -1;	
}

void ConsultarNome()
{
  int IND;
  char TMPNOME[50];
  printf("\n\n------------------------CONSULTAR REGISTRO------------------------\n\n");
  printf("Entre com o nome a ser encontrado: ");
  gets(TMPNOME);
  IND = ProcuraFunNome(TMPNOME);
  if (IND == -1)
  	printf("%s nao encontrado nos registros de funcionario.\n",TMPNOME);
  else
  {
    printf("\n\n%-6s %-30s %-5s\n","CODIGO","NOME","IDADE");
    printf("\n\n%-6d %-30s %-5d\n",FUN[IND].COD,FUN[IND].NOME,FUN[IND].IDADE);
  }                           
}

void Excluir()
{
  int IND;
  char TMPNOME[50];
  printf("\n\n------------------------REMOVER REGISTRO------------------------\n\n");
  printf("Entre com o nome a ser removido: ");
  gets(TMPNOME);
  IND = ProcuraFunNome(TMPNOME);
  if (IND == -1)
  	printf("%s nao encontrado nos registros de funcionario.\n",TMPNOME);
  else
  	FUN[IND].ARQSIT = 2;
  gravar_arquivos();
}

void AlterarSalario()
{
  int IND;
  char TMPNOME[50];
  printf("\n\n------------------------ALTERAR SALARIO------------------------\n\n");
  printf("Entre com o nome a ser alterado: ");
  gets(TMPNOME);
  IND = ProcuraFunNome(TMPNOME);
  if (IND == -1)
  	printf("%s nao encontrado nos registros de funcionario.\n",TMPNOME);
  else
  {
    printf("Entre com o valor da hora trabalhada do %s: ",FUN[IND].NOME);
    scanf("%f",&FUN[IND].VALOR_HORA);
	FF;      
    printf("Qual a jornada de trabalho deste funcionario %s: ",FUN[IND].NOME);
    scanf("%d",&FUN[IND].HORAS_TRABALHADAS);            
    FF;	       	
  }
  	
  gravar_arquivos();
}

int Menu()
{  
  int OP;
  printf("1 - Cadastrar.\n");
  printf("2 - Consultar.\n");
  printf("3 - Consultar quem recebeu mais que.\n");
  printf("4 - Excluir.\n");
  printf("5 - Consultar por nome.\n");    
  printf("6 - Alterar salario.\n");
  printf("7 - Sair.\n");
  printf("Entre com a opcao desejada: ");
  scanf("%d",&OP);
  FF;
  return OP;
}

void gravar_arquivos()
{
  int i;
  //Variavel do tipo ponteiro para arquivo
  FILE *ARQFUN;
  //Cria um backup do arquivo atual para prevenir erros
  rename("ARQFUN.txt","ARQFUNBKP.txt"); 
  remove("ARQFUN.txt");	

  //Abre o arquivo para gravação
  ARQFUN=fopen("ARQFUN.txt","a+");
  //Verifica se o arquivo foi aberto corretamente
  if (ARQFUN == 0)
  {
    printf("Erro na Abertura do Arquivo de Funcionarios\n");
    PARAR;
    exit(-1);
  }
  fwrite(&FUN,sizeof(CADASTRO),MAX,ARQFUN);             
  //Fecha o arquivo para evitar problemas
  fclose(ARQFUN);
}

void carregar_arquivos()
{
  //Variavel do tipo ponteiro para arquivo onde será feito o backup
  FILE *ARQFUN;
  //Abre o arquivo para leitura
  ARQFUN=fopen("ARQFUN.txt","r");
  //Verifica se o arquivo foi aberto corretamente
  if (ARQFUN == 0)
  {
	printf("Erro na Abertura do Arquivo de Funcionario ou Arquivo nao encontrado\n");
	PARAR;
	return;
  }   
  fread(&FUN,sizeof(CADASTRO),MAX,ARQFUN);	
  //Fecha o arquivo para evitar problemas
  fclose(ARQFUN);    
}


