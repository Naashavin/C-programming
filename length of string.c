#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="avinnash";
	int i,length=0;
	for(i=0;str[i]!=0;i++)
	{
		length++;
	}
	printf("the length of string is %d",length);
	return 0;
}
