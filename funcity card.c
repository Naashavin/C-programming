#include<stdio.h>
int main()
{
	int cost1=1000,cost2=2000,cost3=3000,costinput=4000,bonus1,bonus2,bonus3,bonus4;
	bonus1=cost1*20/100+(costinput);
	bonus2=cost2*30/100+(costinput);
	bonus3=cost3*50/100+(costinput);
	bonus4=costinput*60/100+(costinput);
	if(costinput==cost1)
	{
		printf("the bonus added to card is = %d",bonus1);
	}
	
	else if(costinput>cost1 & costinput<=cost2)
	{
		printf("the bonus added to card is %d",bonus2);
	}
	else if(costinput<=cost3)
	{
		printf("the bonus added to card is %d",bonus3);
	}
	else if(costinput>cost3)
	{
		printf("the bonus added to card is %d",bonus4);
	}
	else 
	{
		printf("no bonus added to your card");
	}
	return 0;
}
