// Function with Arguments and No Return Value:
#include <stdio.h>
 void avin(float num1, char operator, float num2) 
{
       float result;

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
   }
int main() 
{
       float num1=9, num2=8,result=0;
       char operator = '-';
       return 0;
   }
