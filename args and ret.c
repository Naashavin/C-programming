// Function with Arguments and Return Value:
   #include <stdio.h>
   float calculate(float num1, char operator, float num2) 
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
                   return 0; 
               }
               break;
           default:
               printf("Error: Invalid operator.\n");
               return 0;  // Return 0 for invalid operator
       }

       return result;
   }

   int main() {
       float num1=5, num2=8, result=0;
       char operator ='/';
       result = calculate(num1, operator, num2);

       if (operator != '/' || (operator == '/' && num2 != 0)) 
       {
           printf("Result: %.2f\n", result);
       }

       return 0;
   }
