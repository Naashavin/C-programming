#include<stdio.h>
int main()
{
	int a=154,res=0,remain=0,arms_num;
	arms_num=a;
	while(a!=0)
	{
		remain=a%10;
		res=(remain*remain*remain)+res;
		a=a/10;
	}
	
  	if(res==arms_num)
  	 {
	  printf("the given number is armstrong number");
     }
	 else
	 {
    	printf("the given number is not an armstrong number");
     }
     
   
	return 0;
}
