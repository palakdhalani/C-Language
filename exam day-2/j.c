#include <stdio.h>

int main()
{

    char start='a',end='z';
    do
    {

        if (start%4==1)
        {

            printf("%c\t",start);
        }
        start++;
        continue;

    } while (start<=end);
}