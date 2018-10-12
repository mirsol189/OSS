#include <stdio.h>

void main()
{
	int i,j;
	int times=8;
	for(i=0;i<times;i++)
	{
		for(j=0;j<times;j++)
		{
			printf("%d X %d = %d\n",i,j,i*j);
		}
	}
}
