#include <stdio.h>

void main()
{
	int i,j;
	int times=9;
	for(i=2;i<times;i++)
	{
		for(j=2;j<times;j++)
		{
			printf("%d X %d = %d\n",i,j,i*j);
		}
	}
}
