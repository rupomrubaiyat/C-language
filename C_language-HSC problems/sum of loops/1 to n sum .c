#include<stdio.h>
int main(){
    int i=1 , sum=0 ,n ;
    printf("Enter how much u want to make sum from 1 to -- ");
    scanf("%d",&n);
    // loop
    while (i<=n)
    {
       if(i==n)
       printf("%d = ",i) ; 
       else 
       printf("%d+",i);


       sum= sum+i;
        i++;
    }
    printf("%d",sum);
    printf("\n sum=%d",sum);
    




}