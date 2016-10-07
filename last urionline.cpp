#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include <bitset>

int bin_to_dec(int bin)
{
    int total  = 0;
    int potenc = 1;

    while(bin > 0) {
        total += bin % 10 * potenc;
        bin    = bin / 10;
        potenc = potenc * 2;
    }
    return total;
}
int main()
{
	int dec, dec1, fi;
	char bi[80], bin[80], deci[80];
	scanf("%d%d", &dec, &dec1);
	itoa(dec,bi,2);
	itoa(dec1,bin,2);
	for (int i=0;i<80;i++)
	{
		if (bi[i]==1 && bin[i]==1)
			deci[i]='0';
		else if ((bi[i]==1 && bin[i]==0) || (bi[i]==0 && bin[i]==1))
			deci[i]='1';
		else
			deci[i]='0';
	}       
	std::bitset<80> deci[80];     // foo: 0000
  deci[80].set();         
	printf("%d\n", deci[80].too_ulong());
}