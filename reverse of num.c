#include<stdio.h>
int main()
{
int num=342,reverse=0,remain=0,pal_num;
pal_num=num;
while(num!=0)
{
remain=num%10;
reverse=reverse*10+remain;
num/=10;
}
printf("Reversed number is %d", reverse);
return 0;
}
