#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "booyaka";
    char rev[50];
    int i = 0, j =0;
    while (str[i] != '\0')
	 {
        i++;
    }

    i--; 

   
    while (i >= 0) 
	{
        rev[j] = str[i];
        j++;
        i--;
    }

    
    rev[j] = '\0';

    
    printf("the reversed string is %s", rev);

    return 0;
}

