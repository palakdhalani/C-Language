#include<stdio.h>

int main(){
    int start=1,end;
    printf("Enter any number = ");
    scanf("%d",&end);

   do
   {
    if (start%2!=1)
    {
        printf("%d\n",start);
    }
     start++;
    } while (start<=end);
   
  
   
}