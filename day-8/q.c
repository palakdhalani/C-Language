#include<stdio.h>

int main(){
      int a,b,c;
    
    printf("Enter your first value = ");
    scanf("%d",&a);
     printf("Enter your second value = ");
    scanf("%d",&b);
     printf("Enter your third value = ");
    scanf("%d",&c);

    if (a<b)
    {
        if (a<c)
        {
            printf("A IS THE MINIMUM");
        }
        else
        {
           printf("C IS THE MINIMUM");
        }
                
    }
    else
    {
        if (b<c)
        {
           
           printf("B IS THE MINIMUM");
        }
          else
          {
             printf("C IS THE MINIMUM");
          }
           
           
        }
        
            
        
        
        
    
    
    
}