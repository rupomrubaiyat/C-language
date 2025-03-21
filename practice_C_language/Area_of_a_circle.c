#include<stdio.h>
int main()
{
    const float pi=3.1416;
    float radius;
    printf("Enter The Radius of the Circle ");
    scanf("%f",&radius);
    // using formula;
    printf("Area of the Circle is %f",pi*radius*radius);
}