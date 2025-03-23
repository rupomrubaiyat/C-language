#include<stdio.h>
int main (){
    float a,b;
    char ch;

    printf("Welcome To calculator\n Enter the expression ");
    scanf("%f %c %f",&a ,&ch ,&b);
    // logic building 
    if (ch=='+')
    {
        printf("sum =%f",a+b);
    }
    else if (ch=='-')
    {
     printf("sub=%f",a-b);
    }
    else if (ch=='*')
    {
     printf("mul=%f",a*b);
    }
    else if  (ch=='/')
    { if (b==0)
    {
    printf("math error");
    }
     else{
        printf("div=%f",a/b);}
        
    }
    else 
    printf("invalid input");
    
    
    
    
}