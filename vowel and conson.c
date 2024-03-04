#include<stdio.h>
int main()
{
	char v='e';
	int upcase,lowcase;
	upcase=(v=='A'||v=='E'||v=='I'||v=='O'||v=='U');
	lowcase=(v=='a'||v=='e'||v=='i'||v=='o'||v=='u');
	if(upcase||lowcase)
	{
		printf("it is vowel" );
	}
	else
	{
		printf("it is consonent ");
	}
	return 0;
	}
