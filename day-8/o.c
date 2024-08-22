#include <stdio.h>

int main(){
    int a,b,c,d;

    printf("Enter your value");
    scanf("%d",&a);
     printf("Enter your value");
    scanf("%d",&b);
     printf("Enter your value");
    scanf("%d",&c);
     printf("Enter your value");
    scanf("%d",&d);

    if(a<b)
    {
        if(a<c){
          printf("A IS MINIMUM");
        }
           if (a<d)
        {
          printf("A IS MINIMUM");
        }
        else
        {
         
          printf("D IS MINIMUM");  
        }
        
    }
    if (b<c)
    {
        if (b<d)
        {
           printf("B IS MINIMUM"); 
        }
        else
        {
            printf("D IS MINIMUM");  
        }
        
    }
    else 
    {
        if (c<d)
        {
            printf("C IS MINIMUM");  
        }
        
       
        else
    {
       printf("D IS MINIMUM");  
    }
    
    }
    
    
    
}