#include<stdio.h>
int main (){
    int i,n, mul=1;
    printf("Enter factorial- ");
    scanf("%d",&n);
    printf("%d!=",n);
    // for loop
    for (i=n;i>=1; i--)
    {   if (i==1)
        printf("%d=",i);  
    else
        printf("%d*",i);
      
        mul=mul*i;
    }
    printf("%d",mul);

}