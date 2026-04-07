#include <stdio.h>

int main() {
    int num = 145;  
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is not a Strong Number.\n", originalNum);
    }

    return 0;
}
