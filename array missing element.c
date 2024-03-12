#include<stdio.h>
int main()
{
	int a[]={1,3,4,5};
	int size=4,n=5,i,sum=0,missing;
	for(i=0;i<size;i++)
	{
		sum+=a[i];
	}
	n++;
	missing=(n*(n-1))/2-sum;
	printf("the missing element is %d",missing);
	return 0;
}
	
