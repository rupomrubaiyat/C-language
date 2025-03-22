#include<stdio.h>
int main(){
    int num1 , num2;
    printf("Welcome To Big number finder\n Enter 1st number ");  //welcome
    scanf("%d",&num1);
    printf("Enter the 2nd number ");
    scanf("%d",&num2);

    /*//if else statement
    if (num1>num2)
    {
        printf("bigger number is = %d",num1);
    }
    else
    {
        printf("bigger number is =%d",num2);
    }
        */

    // if else if statement
    if (num1>num2)
      {printf("bigger number = %d",num1);}
    else if (num1==num2)
     {printf("%d and %d are equal",num1,num2);}
    else
    {printf("%d is bigger ", num2);}
      
    
    

  

}