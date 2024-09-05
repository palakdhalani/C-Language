#include<stdio.h>

int main (){

    int start = 1 ,end;

    printf("enter the table =");
    scanf("%d",&end);

    for (int start = 1;  start <= 10; start++)
    {
       printf("%d x %d = %d\n",end , start , end *start );
    }
    
}