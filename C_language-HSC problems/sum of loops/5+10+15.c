#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("Expression = 5+10+15+20.....\n Till how much sum u want -- ");
    scanf("%d",&n);

    // loop starting
    
    while (i<=n)
    {
       if (i==n)
       {printf("%d=",5*i);
       }
       else
       printf("%d+",5*i) ;
       
       
        sum=sum+ (5*i) ;
        i++;
    }
    printf("%d",sum);
    printf("\n sum = %d",sum); 
    

}