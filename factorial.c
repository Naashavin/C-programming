#include<stdio.h>
int main()
{
	int n=3,i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("the factorial of the number is %d",fact);
	return 0;
}
