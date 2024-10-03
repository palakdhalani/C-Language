#include<stdio.h>

int main(){
    int start,end, ans;

    printf("enter a number = ");
    scanf("%d",&end);

    for (int start = 1; start <=end; start++)
    {
         printf("%d ",start);
           ans += start;
    }
    printf("\n");
    printf("sum of digits = %d\n",ans);

}