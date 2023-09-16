#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Num1;
    double Num2;

    printf("That a simple calculator\n");
    printf("How to use:\n");
    printf("Insert the first number:\n");

    scanf("%lf", &Num1);

    printf("The first number is %.2f \n", Num1);
    printf("Insert the second number:\n");

    scanf("%lf", &Num2);
    printf("The second number is %.2f\n", Num2);

    printf("Their sum is: ");
    printf("%f", Num1+Num2);

    return 0;
}
