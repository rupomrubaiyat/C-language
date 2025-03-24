/*this program can sum up the given numbers digits
u enter a number in terminal this program will sum up the digits*/



#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("If u enter a number the program will sum up the digits of your number\nEnter a number-- ");
    scanf("%d",&n);

    for (;n!=0;n/=10 )
    { {i=n%10;} 
    sum= sum+i;
    }
    printf("sum=%d",sum);

return 0;


}