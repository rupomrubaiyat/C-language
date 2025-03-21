#include<stdio.h>

int main() 
{
    int a, b;
    /*a = 10;
    b = 5;*/
    printf("Enter a Number ");
    scanf("%d",&a);
    printf("Enter another Number ");
    scanf("%d",&b);

   // Addition
    printf("%d + %d = %d \n", a, b, a + b);

    // Subtraction
    printf("%d - %d = %d \n", a, b, a - b);

    // Multiplication
    printf("%d * %d = %d \n", a, b, a * b);

    // Division
    printf("%d / %d = %d", a, b, a / b);

    return 0;
}
