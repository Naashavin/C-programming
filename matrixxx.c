#include<stdio.h>
int main()
{
	int a[2][2]={1,2,3,4},i,j,length=sizeof(a)/sizeof(a[0]);
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf(" \n");
	}
	return 0;
	}
