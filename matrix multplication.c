#include<stdio.h>
int main()
{
	int a[2][2]={1,2,3,4},b[2][2]={5,6,7,8},i,j,k,mul[2][2];
	int length=sizeof(a)/sizeof(a[0]);
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			mul[i][j]=0;
			for(k=0;k<length;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			printf("|%d\t|",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
