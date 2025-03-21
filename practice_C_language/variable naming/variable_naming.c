#include<stdio.h>

int main()
{
    int x_y= 69;
    int b;
    b=96;

    float y=0.96;
    double x=55.666668;
    char a= 'R';         // single quotation is must here

    // declaring constants
    const float pi=3.1415;

    // \n is used to make a newline
    /*Thats a multiline comment
    /n= newline 
    */
    printf("Rupom \n Rubaiyat loves %d and %f and %lf \n but hates %d \n",x_y,y,x,b);
    printf("Rupom name starting with %c \n the value of pi is %f",a,pi);
    return 0;
}