//Function with No Arguments and Return Value:
#include <stdio.h>

   float avinaash() 
   {
       float num1=5, num2=2, result=0;
       char operator='*';
       
       switch (operator) 
       {
           case '+':
               result = num1 + num2;
               break;
           case '-':
               result = num1 - num2;
               break;
           case '*':
               result = num1 * num2;
               break;
           case '/':
               if (num2 != 0) 
               {
                   result = num1 / num2;
                   
               } 
               else 
               {
                   printf("Error: Division by zero.\n");
               }
               break;
           default:
               printf("Error: Invalid operator.\n");
       }

       return result;
   }

   int main() 
   {
       avinaash();
       return 0;
   }
