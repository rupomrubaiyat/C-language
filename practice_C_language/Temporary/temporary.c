// temporary programming
/*
#include <stdio.h>

int main() {
    int a, b;
    a = 5;
    b = 6;

    printf("%d\n", (a > 2) && (b < 10));
    printf("%d\n", (a > 2) && (a > b));

    printf("%d\n", (a > 2) || (a > b));

    printf("%d\n", !(a > 2));

    return 0; // Added return statement for completeness
}*/



 /*  #include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Logical AND (&&) and OR (||) trick
    (num % 2 == 0) && printf("%d is Even\n", num);
    (num % 2 != 0) && printf("%d is Odd\n", num);
    
    return 0;
}*/ 

#include <stdio.h>

int main() {
    float a, b;
    char ch;  // Corrected declaration

    printf("Welcome To calculator\nEnter the expression: ");
    scanf("%f %c %f", &a, &ch, &b);  // Corrected scanf format and variable

    // Logic building
    if (ch == '+') {
        printf("sum = %f", a + b);
    } else if (ch == '-') {
        printf("sub = %f", a - b);
    } else if (ch == '*') {
        printf("mul = %f", a * b);
    } else if (ch == '/') {
        printf("div = %f", a / b);
    } else {
        printf("Invalid operator");
    }

    return 0;
}
