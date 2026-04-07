#include <stdio.h>
#include<string.h>
int main() 
{
  char line[]="Saveetha School of Engineering";
  int vowels, consonant, digit, space,i;
  vowels = consonant = digit = space = 0;
  for (i = 0; line[i] != '\0'; i++) 
  {

    line[i] = tolower(line[i]);

    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u')
        {

      
                 vowels++;
        }

     else if ((line[i] >= 'a' && line[i] <= 'z'))
     {
            consonant++;
   
     }

    else if (line[i] >= '0' && line[i] <= '9') {
      digit++;
    }

    
    else if (line[i] == ' ') 
    {
      space++;
    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d", space);

  return 0;
}
