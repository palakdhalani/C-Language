#include <stdio.h>

int main (){

    int start = 1 ,end , ans;

    printf(" enter the value = ");
    scanf("%d", &end);

    for ( int start =1 ; start <= end ; start++)
    {
        ans += start;
    }
    printf("%d\t",ans);
}