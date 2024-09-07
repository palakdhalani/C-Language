#include<stdio.h>

int main(){
    float x,y,z,ans;

    printf("Enter First Value = ");
    scanf("%f",&x);
    printf("Enter Second Value = ");
    scanf("%f",&y);
    printf("Enter Third Value = ");
    scanf("%f",&z);

   ans=(x+y+z)/3;
   printf(" Average Marks = %f",ans);
}