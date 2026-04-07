#include<stdio.h>
#include<math.h>
int main()
{
	int a[6]={1,2,3,4,5,6},i;
	float average;
	int sum=0;
	for(i=0;i<=6;i++)
	{
		sum+=a[i];
	}
		
	average=sum/i;
	printf("sum is %d\n average is %f",sum,average);
	return 0;
}
