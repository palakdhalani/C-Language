#include<stdio.h>

int main()
{

    int size;

    printf("enter the value => ");
    scanf("%d",&size);

    int box[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the value  => ");
        scanf("%d",&box[i]);
    }
    printf("----------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("value box[%d] => %d \n",i,box[i]);
    }

    printf("--------------------------------------------------\n");

    int box2[size];

    
    for (int i = 0; i < size; i++)
    {
        printf("enter the value  => ");
        scanf("%d",&box2[i]);
    }
    printf("----------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("value box2[%d] => %d \n",i,box2[i]);
    }
    printf("----------------------------------------------------\n");

    int box3[size];

    for (int i = 0; i < size; i++)
    {
        printf("value box3[%d] => %d \n",i,box[i]+box2[i]);
    }
}