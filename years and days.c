#include<stdio.h>
int main()
{
	int days=400,years,weeks,remain_days;
	years=days/365;
	weeks=(days%365)/7;
	remain_days=days-365/7;
	printf("the numbers of years for given days is %d\n",years);
	printf("the numbers of weeks for given days is %d\n",weeks);
	printf("the remaining days for given days when one year is completed is %d",remain_days);
	return 0;
}
