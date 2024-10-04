#include<stdio.h>

int main(){

    int user;

    printf("enter the number of rows = ");
    scanf("%d",&user);

    for (int i = 5; i >= 1; i--)
    {
       for (int j = 1; j <=i; j++)
       {
         printf("%d ",i);
       }
       printf("\n");
       
    }
    
}