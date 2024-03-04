#include<stdio.h>
int main()
{
int num=619,reverse=0,remain=0,pal_num;
pal_num=num;
while(num!=0)
{
remain=num%10;
reverse=(reverse*10)+remain;
num/=10;
}
if(reverse==pal_num)
{
	printf("it is palindrome");
}
else{
	printf("it is not palindrome");
}
return 0;
}
