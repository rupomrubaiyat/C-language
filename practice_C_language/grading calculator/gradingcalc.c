#include<stdio.h>
int main ()
{
    int m;
    printf("Welcome to Grading calculator!!!\n Enter Your marks ");
    scanf("%d",&m);    // marks taken


    
    if ((m<=100) && (m>=80))
     printf("Congrats! you got A+");
    else if  ((m<80) && (m>=70))
     printf("good! you got A");
    else if ((m<70) && (m>=60))
     printf("well, You got A-");
    else if ((m<60) && (m>=50))
     printf("You got B");
    else if ((m<50) && (m>=40))
     printf(" You got C");
    //else if ((m<45) && (m>=40) )
    // printf(" You got D");
    else if((m<40) && (m>=33))
    printf("Thanks god! u passed with D grade ");
    else if ((m<33) && (m>=0))
    printf("Unfortunately, U Failed.\n Try harder next time")  ;
    else
    printf(" U entered an invalid marks \n marks must be between 0 to 100");
    return 0;
}