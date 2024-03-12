#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="rey",str2[]="mysterio";
	char str3[20];
	int i,j;
	while(str1[i]!=0)
	{
		str3[j]=str1[i];
		i++;
		j++;
	}
	i=0;
	while(str2[i]!=0)
	{
		str3[j]=str2[i];
		i++;
		j++;
	}
	str3[j]='\0';
	printf("the concatenated string is %s",str3);
	return 0;
}
