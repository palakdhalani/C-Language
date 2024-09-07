#include <stdio.h>

int main()
{

    int user,start=0;

    printf("Enter The Value = ");
    scanf("%d",&user);

    while (user!=0)
    {
        user = user/10;
        start++;
    }
 printf("total number = %d\n", start);
}