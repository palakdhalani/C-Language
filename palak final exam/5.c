#include <stdio.h>

int main()
{

    int user, s, f = 0, m = 0;

    printf("enter the value =>");
    scanf("%d", &user);

    while (user != 0)
    {
        s = user % 10;
        if (s % 2 == 0)
        {
            f++;
        }
        else
        {
            m++;
        }
        user = user / 10;
    }
    printf("even num => %d\n", f);
    printf("odd num => %d", m);
}
