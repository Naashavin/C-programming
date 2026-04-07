#include<stdio.h>
int main()
{
 int k,i,j,rows=5;
 for(i=0;i<=rows;i++)
 {
	 for(j=0;j<(rows-i);j++)
	 {
	 	printf("*");
	 }
	 printf("\n");
 }
	return 0; 
}
