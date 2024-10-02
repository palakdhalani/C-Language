#include<stdio.h>

int main(){
    int cart;

    printf("Enter marks: ");
    scanf("%d",&cart);

    if (cart>=85)
    {
        printf("Grade A");
    }
    else if ( cart>=70)
    {
        printf("Grade B");
    }
     else if ( cart>=50)
    {
        printf("Grade C");
    }
    else{
       printf("Grade D"); 
    }
    
    
}