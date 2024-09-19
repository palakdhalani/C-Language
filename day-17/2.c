#include<stdio.h>

int main(){

    int size;
    float sum;

    printf("enter the value => ");
    scanf("%d",&size);

    int box[size];

    for (int i = 0; i < size; i++)
    {
        
        printf("enter the value box[%d] = ",i);
        scanf("%d",&box[i]);
        sum = sum + box[i];
    }
    
    printf("%.2f",sum/size);
    
}