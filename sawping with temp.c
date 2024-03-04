#include<stdio.h>
int main()
{
	int a=30,b=20,temp;
	temp=a;
	a=b;
	b=temp;
	printf("new_a=%d\n,new_b=%d",a,b);
	return 0;
}
