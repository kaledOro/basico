#include <stdio.h>
#include <kaled.h>

int main()
{
	int V[20], numero;
	zerarvetor(V[],20);
	lervetor(V[], 20);
	contarpares(V[], 20);
	printf("Numeros pares : %d\n", contarpares(V[],20));
	contarimpares(V,20);
	printf("Impares : %d\n", contarimpares(V[],20));
	printf("Digite o numero a ser procurado : ");
	scanf("%d", &numero);
	procurarnumero(numero,20);
	printf("O numero foi encontrado na posiçao %d\n", procurarnumero(numero,20));
}