#include<stdio.h>

int main(){

    int user,a,b;
    printf("Selectoperation: \n");
    printf("---------------------------------\n");
    printf(" 1.Addition\n");
    printf(" 2.Subtraction\n");
    printf(" 3.Multiplication\n");
    printf(" 4.Division\n");

    printf("Enter two numbers: ");
    scanf("%d",&user);
     printf("Enter two numbers: ");
    scanf("%d",&a);
     printf("Enter two numbers: ");
    scanf("%d",&b);

    switch (user)
    {
    case 1:
        printf(" %d + %d =%d",a,b,a+b);
        break;
        case 2:
        printf(" %d + %d =%d",a,b,a-b);
        break;
        case 3:
        printf(" %d + %d =%d",a,b,a*b);
        break;
        case 4:
        printf(" %d + %d =%d",a,b,a/b);
        break;

    
    default:
    printf("invalid opertion");
        break;
    }
}