#include <stdio.h>

int main()
{

    int size;

    printf("enter the valu => ");
    scanf("%d", &size);

    int box[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the value => ");
        scanf("%d", &box[i]);
    }
    printf("-----------------------\n");
    
    for (int i = 0; i < size; i++)
    {
        printf("value => %d \n", box[i]);
    }
}