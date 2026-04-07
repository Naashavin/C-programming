#include <stdio.h>
#include <stddef.h>
#include <limits.h>


int add(int a, int b) {
    return a + b;
}
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int sum = add(7, 5);
    int m2 = max(12, 19);

    printf("Sum: %d\n", sum);
    printf("Max num %d\n",m2);


    return 0;
}
