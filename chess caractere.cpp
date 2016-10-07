#include <stdio.h>
int main ()
{
	int i, p;
	char ma[10][10];
	for (i=0;i<10;i++)
	{
		for (p=0;p<10;p++)
		{
			if (p%2==0 && i%2==0 || i%2!=0 && p%2!=0)
			ma[i][p]='°';
		else
			ma[i][p]='#';
		}
	}
	for (i=0;i<10;i++)
	{
		for (p=0;p<10;p++)
		{
			printf("%c ", ma[i][p]);
		}
		printf("\n");
	}
}