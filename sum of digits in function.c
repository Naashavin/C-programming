#include<stdio.h>
int sum(int n)
{
	int add=0;
	while(n>0)
	{
		add+=n%10;
		n/=10;
	}
	return add;
}
int main()
{
	int n=619;
	int final=sum(n);
	if(final>9)
	{
		final=sum(final);
		printf("the final digit is %d",sum(final));
	}
	else
	{
		printf("the final digit is %d",final);
	}
	return 0;
}
