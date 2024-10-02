#include<stdio.h>

int main(){
    int cart;
    printf(" ● Marks>=85:Grade A\n");
    printf(" ● Marks>=70:Grade B\n");
    printf(" ● Marks>=50:Grade C\n");
    printf(" ● Marks<50:Grade D\n");
 printf("--------------------------------------\n");
    printf("Enter marks: ");
    scanf("%d",&cart);

    
    if( cart>=100 || cart<=0){
        printf("invalid marks");
    }

     else if (cart>=85)
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