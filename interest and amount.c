#include<stdio.h>
int main ()
{
	int amtdep=1000,amtint,interest,totamt;
	interest=amtdep*20/100;
	printf("the interest in the account after one year is %d\n",interest);
	totamt=interest+amtdep;
	printf("the total amount with added interest is %d",totamt);
	return 0;
}
