#include<stdio.h>
int convert(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return (n%2+10*convert(n/2));
	}
}
int main()
{
	int dec=11;
	printf("the given decimal number %d is binary is %d",dec,convert(dec));
	return 0;
}
