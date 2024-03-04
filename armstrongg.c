#include<stdio.h>
int main()
{
	int a=153,res=0,remain=0,arms_num;
	arms_num=a;
	while(arms_num!=0)
	{
		remain=a%10;
		res+=remain*remain*remain;
		a/=10;
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
