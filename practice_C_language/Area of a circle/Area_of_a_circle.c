 /*#include<stdio.h>
int main()
{
    const float pi=3.1416;
    float radius;
    printf("Enter The Radius of the Circle ");
    scanf("%f",&radius);
    // using formula;
    printf("Area of the Circle is %f",pi*radius*radius);
}*/

// Alternative process
#include<stdio.h>
int main()
{
    const float pi=3.1416;
    float radius , Area;
    printf("Enter The Radius of the Circle ");
    scanf("%f",&radius);
    // using formula;
    Area=pi*radius*radius ;
    printf("Area of the Circle is %f",Area);
}