#include<stdio.h>
int main()
{
	int a[]={2,6,1,0,5,2,0,4,7,0,3};
	int i;
	int len = sizeof(a)/sizeof(a[0]);
	for (i=0;i<len;i++)
	{
		if(i==0)
			printf(a[i]);
	}
	return 0;
}
