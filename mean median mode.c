#include<stdio.h>
int main()
{
	int a[5]={1,3,4,5,6},length,sum=0,i;
	int mean;
	length=sizeof(a)/sizeof(a[5]);
	for (i=0;i<=5;i++)
	{
		sum+=a[i];
	}
	mean=(sum/length);
	printf("the sum is %d\n",sum);
	printf("the length of array is %d\n",length);
	printf("the mean is %d",mean);
	return 0;
}
