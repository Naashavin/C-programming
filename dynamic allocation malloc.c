#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));
    ptr = (int *)realloc(ptr, 8 * sizeof(int)); 
    int i;
    for ( i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }
    ptr = (int *)realloc(ptr, 5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory Reallocation Failed\n");
        exit(0);
    }
    for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
    free(ptr);
    
    return 0;
}
