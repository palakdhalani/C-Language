#include <stdio.h>

int addition()
{

    int a, b;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("ans is = %d", a + b);
}
int substration()
{

    int a, b;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("ans is = %d", a - b);
}
int multiplication()
{

    int a, b;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("ans is = %d", a * b);
}
int division()
{

    float a, b;
    printf("enter the value of a = ");
    scanf("%f", &a);
    printf("enter the value of b = ");
    scanf("%f", &b);
    printf("ans is = %f", a / b);
}
int modulus()
{

    int a, b;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("ans is = %d", a % b);
}

int main()
{
    int user;
    printf("enter the value = ");
    scanf("%d",&user);

    switch (user)
    {
    case 1:
        addition();
        break;
    case 2:
    substration();
    break;
    case 3:
    division();
    break;
    case 4:
     division();
     break;
    case 5:
    modulus();
    break;
    default :
        printf("you are exit");
        break;
    }
}