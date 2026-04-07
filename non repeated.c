#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "avinaash";
    int i;
    int freq[256] = {0}; 
  for (i = 0; str[i] != '\0'; i++)
	 {
        freq[str[i]]++;
    }
printf("The non-repeated letters are: ");
    for (i = 0; i < 256; i++) 
	{
        if (freq[i] == 1)
		 {
            printf("%c", i);
        }
    }
    printf("\n");

    return 0;
}

