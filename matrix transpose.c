#include<stdio.h>
int main()
{
	int a[2][2]={1,2,3,4},b[2][2];
	int i,j,length=sizeof(a)/sizeof(a[0]);
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

