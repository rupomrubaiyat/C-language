#include<stdio.h>
int main (){
    int number,result;
    printf("I can define a number as Even or odd \n");
    printf("Enter a number ");
    scanf("%d",&number),
    
    // even odd check through if else
    result=number%2;
    if (result)
    {
      printf("He he, U entered Odd");
    }
    else{
        printf("He he, U entered Even ");
    }
    
}

