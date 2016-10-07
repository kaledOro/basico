#include <stdio.h>

int main()
{
	int i, cau=0, cabe=0, inf, tam=10, v[10], retir, s=0;
	while (cau<tam)
	{
	if (cau==tam)
	{
		printf("Overflow\n");
	}
	else
	{
		scanf("%d", &inf);
		v[cau]=inf;
		if (cau==0)
			cabe=0;
		cau+=1;
	}
	}
	for (i=cabe;i<cau;i++)
	{
		printf("Posicao %d, valor %d\n", i, v[i]);
	}
	if (cau<0)
	{
		printf("underflow\n");
	}
	else
	{
		retir=v[cabe];
		cabe+=1;
		if (cabe>cau)
		{
			cabe=0;
			cau=0;
		}
	}
	printf("\n\n");
	while (s!=1)
	{
		s += 1;
	if (cau<0)
	{
		printf("underflow\n");
	}
	else
	{
		retir=v[cabe];
		cabe+=1;
		if (cabe>cau)
		{
			cabe=0;
			cau=0;
		}
	}
	}
	for (i=cabe;i<cau;i++)
	{
		printf("Posicao %d, valor %d\n", i, v[i]);
	}
}