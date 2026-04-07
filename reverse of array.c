 #include<stdio.h>
int main()
{
	int i;
	int a[]={1,3,5,6,8};
	int temp;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		
	}
	return 0;
}
