#include<stdio.h>
int main(){
    int a,b,c;
    printf("Welcome to big number finder\n");
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter 2nd number ");
    scanf("%d",&b);
    printf("Enter 3rd number ");
    scanf("%d",&c);
    // processing the output below
    if (a>b && a>c)
    {
    printf(" biggest number = %d", a);
    }
    else if (b>c && b>a)
    {
     printf(" biggest number = %d", b);
    }
    else if (c>a && c>b)
    {printf("Biggest number = %d", c);}
    else if (a==b && b==c && c==a)
    {
    printf("U entered Three equal big numbers");
    }
    
    else 
    printf("u entered two equal big numbers");
    
    return 0 ;
    
}