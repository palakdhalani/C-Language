#include<stdio.h>

int main(){
    int x;

    printf("enter first value = ");
    scanf("%d",&x);
    
    if (x>0)
    {
      printf("this is positive=%d",x);
    }
    if (x<0)
    {
      printf("this is negative=%d",x);
    }
    if (0==0)
    {
      printf("this is neutral=%d",x);
    }
}