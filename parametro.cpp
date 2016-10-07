#include <stdio.h>

void res(int e, int f)
{
	printf("Soma = %d\n", e+f);
void math(int a,int b)
{
	printf("%d +i %d", a, b);
	res(a,b);
}
}
void math(int a,int b)
{
	printf("%d + %d\n", a, b);
	res(a,b);
}
int main()
{
	int c, d;
	printf("digite um numero: ");
	scanf("%d", &c);
	printf("digite outro numero: ");
	scanf("%d", &d);
	math(c,d);
}