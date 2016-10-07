#include <stdio.h>

int main()
{
	int i, j, li, co;
	scanf("%d%d", &li, &co);
	int ma[li][co], c1=0, c2=0, di=co+1, es=co-1, ci=li-1, ba=li+1;
	while (ma[li][co]==ma[li][di])
	{
		c1++;
	}
	if (ma[li][co]==ma[li][co+1] )
}