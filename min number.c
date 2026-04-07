#include<stdio.h>
int main(){
	int a[]={1,7,3,9,3,5,2};
	int min = a[0];int i; int len = sizeof(a)/sizeof(a[0]);
	for( i=0;i<len;i++)
	{
		if (min > a[i])
			min = a[i];
	}
	printf("The minimum element %d", min);
	return 0;
}
