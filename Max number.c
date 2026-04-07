#include <stdio.h>

int main(void) {
    int a[] = {1, 7, 3, 9, 3, 5, 2};
    int len = sizeof(a) / sizeof(a[0]);
    int max = a[0];
    int i;
    for ( i = 1; i < len; ++i) {
        if (a[i] > max) max = a[i];
    }
    int secmax = a[0];

    for (i = 0; i < len; ++i) {
        if (a[i] < max) {
            if (a[i] > secmax) {
                secmax = a[i];
            }
        }
    }

    printf("The maximum element %d\n", max);
    printf("The second maximum element %d\n", secmax);

    return 0;
}
