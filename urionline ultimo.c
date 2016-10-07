#include<stdio.h>
#include <stdlib.h>
 
int main()
{
	int d, j, r1, i,r2,k,r3,l,r4,m,r5,n,r6,r7,m1;
    int r8,r9,r10,r11,m50, m25, m10, m5, m1c, B;
    double N;
    scanf("%lf",&N);
    d=N*100;
    if(N>0 && N<1000000)
    {
 	printf("NOTAS:\n");
    j = (d/10000);
    printf("%d nota(s) de R$ 100.00\n",j);
    r1 = (d%10000);
    i = (r1/5000);
    printf("%d nota(s) de R$ 50.00\n",i);
    r2 = (r1%5000);
    k = (r2/2000);
    printf("%d nota(s) de R$ 20.00\n",k);
    r3 = (r2%2000);
    l = (r3/1000);
    printf("%d nota(s) de R$ 10.00\n",l);
    r4 = (r3%1000);
    m = (r4/500);
    printf("%d nota(s) de R$ 5.00\n",m);
    r5 = (r4%500);
    n = (r5/200);
    printf("%d nota(s) de R$ 2.00\n",n);
    printf("MOEDAS:\n");
    r6 = (r5%200);
    m1 = r6/100;
    printf("%d moeda(s) de R$ 1.00\n",m1);
    B=r6;
	r7= (r6%100);
	m50 = (r7/50);
	printf("%d moeda(s) de R$ 0.50\n", m50);
	r8 = (r7%50);
	m25 = (r8/25);
	printf("%d moeda(s) de R$ 0.25\n", m25);
	r9 = (r8%25);
	m10 = (r9/10);
	printf("%d moeda(s) de R$ 0.10\n", m10);
	r10 = (r9%10);
	m5 = (r10/5);
	printf("%d moeda(s) de R$ 0.05\n", m5);
	r11 = (r10%5);
    m1c = r11;
	printf("%d moeda(s) de R$ 0.01\n", m1c);
	    }  
	    return 0;
}