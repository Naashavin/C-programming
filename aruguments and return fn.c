#include<stdio.h>
int add(int a,int b);
int add(int a , int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int main()
{
	int a=10,b=20,sumvalue;
	sumvalue=add(a,b);
	printf("the addition is %d\n",sumvalue);
	return 0;
}
