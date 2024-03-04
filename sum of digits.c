#include<stdio.h>
int main()
{
	int a=619,remain,sum=0;
		while(a!=0)
		{
			remain=a%10;
			sum+=remain;
			a=a/10;
		}
		printf("sum f digit is %d",sum);
		return 0;
	
	
}
