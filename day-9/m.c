#include<stdio.h>

int main(){

    
    char grade;

    printf("Enter your marks(0-100) => ");
    scanf("%c", &grade);

    



    switch(grade) {
        case 1:
            printf("Excellent work ! \n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("You passed, but you could do better\n");
            break;
        case 'f':
            printf("Sorry, you failed\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }




    // if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
    //     printf("Congratulations! You are eligible for the next level\n");
    // } else if (grade == 'f') {
    //     printf("Please try again next time\n");
    // } else {
    //     printf("Invalid grade for heck\n");
    // }
}