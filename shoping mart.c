#include <stdio.h>

int main() 
{
	printf("\nC MART\n");
	printf("\n********************\n");
	float cashgiven=1000;
    float applePrice = 100.0,bananaPrice = 60.0,orangePrice = 80.0;
    float appleKg, bananaKg, orangeKg;
    printf("Enter the quantity of apples (in kg): ");
    scanf("%f", &appleKg);
    printf("Enter the quantity of bananas (in kg): ");
    scanf("%f", &bananaKg);
    printf("Enter the quantity of oranges (in kg): ");
    scanf("%f", &orangeKg);
    printf("\n************************\n");
    float totalBill = (applePrice * appleKg) + (bananaPrice * bananaKg) + (orangePrice * orangeKg);
    printf("total_bill : %f",totalBill);
    float balance=(totalBill-cashgiven);
    printf("\nbalance:\n %f",balance);
    printf("\n****************************\n");
    printf("\n*thanks for shopping*\n");
    return 0;
}

