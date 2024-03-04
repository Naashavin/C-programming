#include<stdio.h>
int main()
{
	int num1=0,num2=1,num3,i,terms=10;
	printf("%d ",num1);
	for(i=2;i<=terms;i++)
	{
		num3=num1+num2;
		printf(" %d",num3);
		num1=num2;
		num2=num3;
	}
	return 0;
}
