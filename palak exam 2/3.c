#include<stdio.h>

int main(){

    int user;

    printf("enter the number of rows = ");
    scanf("%d",&user);

    for (int i = 1; i <= user; i++)
    {
       for (int j = user; j >=i; j--)
       {
         printf("%d ",j);
       }
       printf("\n");
       
    }
    
}