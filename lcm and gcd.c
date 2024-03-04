#include <stdio.h>
int main()
{
	int a=2,b=4,lcm,gcd,i;
		for(i=1;i<=a&&b;i++)
		{
			if(a%i==0&&b%i==0)
			{
				gcd=i;
			}
		}
		lcm=a*b/gcd;
		printf("the gcd of given number is %d\n",gcd);
		printf("the lcm of given number is %d\n",lcm);
		return 0;
}

