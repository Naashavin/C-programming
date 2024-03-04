#include<stdio.h>
int main()
{
	int n=7,i,c=0;
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	c=c+1;
	
	}
	if(c==2)
	{
	printf("it is prime number");	
	}
	else 
	{
		printf(" it is not prime number");
	
	}
	return 0;
}

