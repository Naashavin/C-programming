#include<stdio.h>
int main()
{
int i,k;
int a[5]={1,2,3,4,5};
int b[5]={6,7,8,9,0};
int merge[10];
for(i=0;i<5;i++)
{
	merge[i]=a[i];
}
k=i;
for(i=0;i<5;i++)
{
	merge[k]=b[i];
	k++;
}
for(i=0;i<10;i++)
{
	printf("%d,",merge[i]);
}
return 0;	
}
