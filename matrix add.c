#include<stdio.h>
int main()
{
int a[2][2]={30,40,50,60};
int b[2][2]={20,70,80,90};
int add[2][2]={0,0,0,0};
int i,j;
int length=sizeof(a)/sizeof(a[0]);
for(i=0;i<length;i++)
{
	for(j=0;j<length;j++)
	{
		add[i][j]=a[i][j]+b[i][j];
	
		printf("%d\t",add[i][j]);
	}

printf("\n");
}
return 0;
}
