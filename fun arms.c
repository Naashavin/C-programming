#include <stdio.h>
#include <math.h>

int arms(int num) 
{
    int rem, res = 0;
    
    while (num != 0) {
        rem = num % 10;
        res += rem * rem * rem;
        num /= 10;
    }
    
    return res;
}

int main() {
    int num = 154;
    int result = arms(num);

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

