//Function with No Arguments & No Return Value:
 #include <stdio.h> 
 void getInputAndCalculate() 
{
       float num1, num2, result=0;
       char operator = 0;
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
       getInputAndCalculate();
       return 0;
   }
