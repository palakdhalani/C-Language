#include<stdio.h>

int main(){
    int start=1,end;

    printf("Enter Any Number = ");
    scanf("%d",&end);

    while  (start<=end)
    {
      printf("%d\n",start,end);
      start++;
    }
    
}