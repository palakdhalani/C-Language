#include<stdio.h>

int main(){
    int x,y,z,ans;

    printf("Enter maths marks = ");
    scanf("%d",&x);
    printf("Enter English marks = ");
    scanf("%d",&y);
    printf("Enter Science marks = ");
    scanf("%d",&z);

    ans=(x+y+z)/3;
    printf("avg = %d",ans);
}