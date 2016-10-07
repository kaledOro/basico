#include <stdio.h>

int main()
{
	int K[10], I, S=0, Ver=0, NV, DP, NP;
	int KA[10];
	for (I=0;I<10;I++)
	{
		scanf("%d", &K[I]);
	}
	for (I=9;I>=0;I--)
	{
		printf("%d ", K[I]);
	}
	for (I=0;I<10;I++)
	{
		if (K[I]%2==0)
		{
			printf("\nPares = %d ", K[I]);
	}
		else
		{
			printf("\nImpares = %d ", K[I]);
		}
	}
	for (I=0;I<10;I++)
	{
		S=S+K[I];
	}
	printf("\nSoma = %d", S);
	printf("\nDigite um numero para verificar quantas vezes ele aparece: ");
	scanf("%d", &NV);
	for (I=0;I<10;I++)
	{
	if (K[I]==NV)
	{
		Ver += 1;
	}	
	}
	printf("\nO numero %d, foi encontrado %d vezes", NV, Ver);
	printf("\ndigite a posiçao");
	scanf("%d", &DP);
	printf("Digite um numero: ");
	scanf("%d",&NP);
	K[DP] = NP;
	for (I=0;I<10;I++)
	{
		printf("%d ", K[I]);
	}
	for(I=0; I<10; I++){
		KA[I] = K[I];
		printf("%d\n", KA[I]);
	} 
	for (I=0;I<10;I++)
	{
		K[I] = 0;
		KA[I] = 0;
	}
	for (I=0;I<10;I++)
	{
		printf("%d ", K[I]);
	}
	for (I=0;I<10;I++)
	{
		printf("%d ", K[I]);
	}
}