#include<stdio.h>
int main()
{
	int a[3][3]={1,0,0,0,1,0,0,0,1};
	int ort=1;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j&&a[i][j]!=0)
			{
				ort=0;
				break;
			}
			if(i==j&&a[i][j]!=1)
			{
				ort=0;
				break;
			}
	}
}
if(ort)
{
	printf("it is orthogonal");
}
else
{
	printf("it is not orthogonal");
}
return 0;
}
