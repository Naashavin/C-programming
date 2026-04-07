#include <stdio.h>

int main(void) {
    int arr[] = {5,1,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    int j;

    for ( i = 0; i < n - 1; i++)
	 {
        int swapped = 0;
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
    for ( i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
