#include <stdio.h>

int main() {
    int a = 8, b = 4;
    int *ptra = &a;
    int *ptrb = &b;
    int temp;

    temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;

    printf("%d,%d\n", a, b);
    return 0;
}
