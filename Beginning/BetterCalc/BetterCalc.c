#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2;
    int fun;
    double result = 0;

    printf("Better calculator project\n");
    printf("Insert the first number:\n");
    scanf("%lf",&num1);
    printf("Insert the second number:\n");
    scanf("%lf",&num2);

    printf("Select an operator\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    scanf("%d", &fun);

    if(fun == 1)
    {
        result = num1 + num2;
        printf("The result of your addition is:\n");
        printf("%.2f + %.2f = %.2f",num1,num2,result);
    }else if(fun == 2)
    {
        result = num1 - num2;
        printf("The result of your subtraction is:\n");
        printf("%.2f - %.2f = %.2f",num1,num2,result);
    }else if(fun == 3)
    {
        result = num1 * num2;
        printf("The result of your multiplication is:\n");
        printf("%.2f * %.2f = %.2f",num1,num2,result);
    }else
    {
        result = num1 / num2;
        printf("The result of your division is:\n");
        printf("%.2f / %.2f = %.2f",num1,num2,result);
    }

    return 0;
}
