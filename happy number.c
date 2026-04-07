#include <stdio.h>

int main() {
    int num = 24;  
    int originalNum = num;

    while (num != 1 && num != 4) 
	{
        int sum = 0;
        while (num > 0)
	    {
            int remain = num % 10;
            sum += remain * remain;
            num /= 10;
        }
        num = sum;
    }

    if (num == 1) {
        printf("%d is a Happy Number.\n", originalNum);
    } else {
        printf("%d is not a Happy Number.\n", originalNum);
    }

    return 0;
}

