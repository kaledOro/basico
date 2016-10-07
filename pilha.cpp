#include <stdio.h>

int main()
{
	int T=0, B=0, x=0, inf, tam=10, V[10], pro, f=0; 
	while (x<tam)
	{
		if (T>=tam)
		{
			printf("stack overflow\n");
			break;
		}
		else if (T<0)
		{
			printf("Stack Underflow\n");
		}
		else
		{
			printf("Digite a posição: ");
			scanf("%d", &inf);
			if (x==0)
			{
				T=0;
				B=0;
			}
			V[T]=inf;
			T+=1;
			x+=1;
	    }
}
for (int i=B;i<T;i++)
{
	printf("%d - %d  ", i, V[i]);
}
printf("\n");
T -= 1;
for (int i=B;i<T;i++)
{
	printf("%d - %d  ", i, V[i]);
}
printf("\nDigite o numero a ser procurado: ");
scanf("%d", &pro);
for (int i=B;i<T;i++)
{
	if (V[i]==pro)
	{
		printf("Posicao: %d.\n", i);
        f=1;
	}
}
	if (f==0)
		printf("Numero nao encontrado.\n");
return 0;
}