#include<stdio.h>
int main()
{
	int i=1,j=1,rows=50;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

