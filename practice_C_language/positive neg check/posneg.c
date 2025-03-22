#include<stdio.h>
int main(){
    int num ;
    printf(" Welcome to Positive negative checking calculator \n");
    printf("Enter Ur number ");
    scanf("%d",&num);           //input taken
  if (num==0)
  {
    printf("U entered = 0 ");
  }
  else{
    if (num > 0)
    {
        printf("U entered Positive (+)");
    }
    else{
        printf("U entered negative(-)");
    }
    
  }
  
}