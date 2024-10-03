#include<stdio.h>

int main(){

    int user;

    printf("enter the number of rows = ");
    scanf("%d",&user);

    for (int i = 1; i <= user; i++)
    {
       for (int m = user; m >=user+1-i; m--)
       {
         printf("%d ",m);
       }
       printf("\n");
       
    }
    
}