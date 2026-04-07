#include<stdio.h>
float calculatesi(float principle,float time,char customtype);
int main()
{
	float principle=10000,rate,time=1,si;
	char customertype ='y';
	si=calculatesi(principle,time,customertype);
	printf("the simple interest is %2f\n",si);
	return 0;
}
float calculatesi(float principle,float time,char customertype)
{
	float rate;
	if(customertype=='y'||customertype=='Y')
	{
		rate=120;
	}
	else
	{
		rate=10.0;
	}
	return (principle*rate*time/1000);
}

