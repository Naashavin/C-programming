#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int n; 
    n=sizeof(arr)/sizeof(arr[0]);
    int *p = arr;
    int i;

    for ( i = 0; i < n; ++i) {
        printf("%d ", *p);
        p++; 
    }
    printf("\t");
    return 0;  
}
