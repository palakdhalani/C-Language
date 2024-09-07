#include<stdio.h>

#include <stdio.h>

int main (){

    int end,first=0,second=1,third=0;

    printf("enter the value = ");
    scanf("%d",&end);

    for (int start = 1; start <= end; start++)
    {

      printf("%d\t",first);
      third= first + second;
      first = second;
      second = third; 
    }
    
}