#include <stdio.h>

float calculateCost(float pricePerKg, int quantity) {
    return pricePerKg * quantity;
}

float applyDiscount(float totalCost) {
    if (totalCost > 300) {
        return totalCost * 0.3; 
    } else {
        return totalCost;
    }
}

int main() 
{
    float applePricePerKg = 100.0;
    float bananaPricePerKg = 60.0;
    float pomegranatePricePerKg = 80.0;
    float given

    int appleQuantity = 5;
    int bananaQuantity = 2;
    int pomegranateQuantity = 4;

    float totalCostApples = calculateCost(applePricePerKg, appleQuantity);
    float totalCostBananas = calculateCost(bananaPricePerKg, bananaQuantity);
    float totalCostPomegranates = calculateCost(pomegranatePricePerKg, pomegranateQuantity);

    float totalCost = totalCostApples + totalCostBananas + totalCostPomegranates;
    

    totalCost = applyDiscount(totalCost);
    printf("Total cost: %.2f Rs\n", totalCost);

    return 0;
}

