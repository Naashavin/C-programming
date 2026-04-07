#include <stdio.h>
#include <string.h>

int main(void) {
    char para[] = "Veda krishnan is a AIDS student";
    int i, count = 0;
    size_t len = strlen(para);

    for (i = 0; i < (int)len; i++) {
        if (para[i] == ' ') {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
