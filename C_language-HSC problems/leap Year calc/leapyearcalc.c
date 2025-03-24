#include<stdio.h>
int main(){
    int year;
    printf("welcome to leap year calculator\n");
    printf("Enter a Year ");
    scanf("%d",&year);
    // leap year processing
    if (year%400==0)
     printf("Yes, Thats Leap year");
    else{
        if (year%100!=0 && year%4==0)
        {
            printf("Yes, Thats Leap year");
        }
        else{
            printf("No, Thats not Leap year");
        }
    } 
    

    
}