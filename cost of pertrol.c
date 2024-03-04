#include<stdio.h>
int main()
{
	float petcost=102.34,clgdistance=36.7,mileage=15,costspend,days=6,totallitre,costperday;
	totallitre=clgdistance*2/mileage;
	costperday=totallitre*petcost;
	costspend=costperday*days;
	
	printf("the total cost spend for %f days is = %f rupees",days,costspend);
	return 0;
}
