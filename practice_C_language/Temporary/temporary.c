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



    #include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Logical AND (&&) and OR (||) trick
    (num % 2 == 0) && printf("%d is Even\n", num);
    (num % 2 != 0) && printf("%d is Odd\n", num);
    
    return 0;
}