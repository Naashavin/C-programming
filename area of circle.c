#include <stdio.h>
int main()
 {
    int r;
    const float PI = 3.141;
    printf("Enter radius value: ");
    scanf("%d", &r);
    printf("Area of circle is %f\n", PI * r * r);
    return 0;
}
