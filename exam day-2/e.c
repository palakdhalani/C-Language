#include<stdio.h>

int main(){

    int user1,user2;

    printf("press 1 for English.\n ");
    printf("press 2 for Hindi.\n ");
    printf("press 3 for Gujarati \n");

    printf("enter your no. => ");
    scanf("%d",&user1);

    switch (user1)
    {
    case 1:
        printf("press 1 for customer care\n");
        printf("press 2 for recharge\n");
        printf("press 3 for information\n");
        break;
    case 2:
        printf("customer care ke liye 1 dabaiye\n");
        printf("recharge ke liye 2 dabaiye \n");
        printf("information ke liye 3 dabaiye\n");
        break;
    case 3:
       printf("customer care mate 1 dabavo\n");
        printf("recharge mate 2 dabavo\n");
        printf("information mate 3 davabo\n");
        break;
    
    default:
        break;
    }

    printf("enter your no. => ");
    scanf("%d",&user2);

    switch (user2)
    {
    case 1:
        printf("you have successfully done a customer care");
        break;
    case 2:
        printf("you have successfully done  a recharge");
        break;
    case 3:
        printf("you have successfully done a information mate");
        break;
    
    default:
        break;
    }
}


