#include <stdio.h>

int main(){
    float salary,HRA,DA,TA ,final;

    printf("enter your value = ");
    scanf("%f",&salary);
     printf("enter your value = ");
    scanf("%f",&HRA);
     printf("enter your value = ");
    scanf("%f",&DA);
     printf("enter your value = ");
    scanf("%f",&TA);

    final = salary + ( salary*HRA/100) + ( salary*DA/100) + ( salary*TA/100);
    printf("%f",final);

}