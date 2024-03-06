#include <stdio.h>
int main() 
{
   int low=10, high=25, i, flag;
   while (low < high)
    {
      flag = 0;
      if (low <= 1) 
	  {
         low++;
      }
      for (i = 2; i <= low / 2; i++) 
	  {

         if (low % i == 0) 
		 {
            flag = 1;
         }
      }

      if (flag == 0)
      
         printf("%d ", low);
         low++;
    }

   return 0;
}

