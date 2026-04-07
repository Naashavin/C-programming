#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "Booyaka";
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }

    printf("Reversed: %s\n", str);
    return 0;
}
