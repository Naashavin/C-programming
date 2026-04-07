#include<stdio.h>
int main()
{
	int i,sum_even=0,even_count=0,sum_odd=0,odd_count=0;
	for(i=1;i<=11;i++)
	{
		if(i%2==0)
		{
			printf("even numbers are %d\n",i);
			sum_even=sum_even+i;
			even_count++;
		}
	}
	printf("count of even number is %d\n sum of even numbers%d\n",even_count,sum_even);
	for(i=1;1<=11;i++)
	{
		if(i%2!=0)
		
			printf("odd number are %d\n",i);
			sum_odd=sum_odd+i;
			odd_count++;
		
	}
	printf("count of odd numbers is %d\n sum  of odd numbers is %d",odd_count,sum_odd);
	return 0;
	

}
