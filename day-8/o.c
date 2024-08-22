#include <stdio.h>

int main(){
    int a,b,c,d;

    printf("Enter your value = ");
    scanf("%d",&a);
     printf("Enter your value = ");
    scanf("%d",&b);
     printf("Enter your value = ");
    scanf("%d",&c);
     printf("Enter your value = ");
    scanf("%d",&d);

    if (a > b)
    {
      if (a>c)
      {
       if (a>d)
       {
        printf("A IS MAXIMUM");
       }
       else
       {
       if (b>c)
       {
        if (b>d)
        {
          printf("B IS MAXIMUM");
        }
        if (c>d)
        {
          printf("C IS MAXIMUM");
        }
        
       }
      
       
       
      }

    
      
    }
    else{
         printf("C IS MAXIMUM");
        }
    }
    
    
    
}