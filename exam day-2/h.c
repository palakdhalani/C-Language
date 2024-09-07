#include<stdio.h>

int main(){
    int a,b,c,d;

    printf("Enter a value of the first number = ");
    scanf("%d",&a);
    printf("Enter a value of the second number = ");
    scanf("%d",&b);
    printf("Enter a value of the third number = ");
    scanf("%d",&c);
    printf("Enter a value of the fourth number = ");
    scanf("%d",&d);

    if (a > b)
{
    if (a > c)
    {
        printf("A is Maximum");
    }
    else{
        if (c > d)
        {
            printf("C is Maximum");
        }
        else{
            printf("D is Maximum");
        }
        
    }
    
}
else{
    if (b > c)
    {
        printf("b is Maximum");
    }
    else{
        if (c > d)
        {
            printf("c is Maximum");
        }
        else{
            printf("d is Maximum");
        }
        
    }
    
}



}

    

