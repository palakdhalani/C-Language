#include<stdio.h>

int main(){
    int marks;
    char grade;

    printf("Enter Your Marks = ");
    scanf("%d",&marks);
 grade=(marks>80)? 'A':(marks>60)? 'B':(marks>50)? 'C':(marks>30)?  'D': 'F';
  

 switch (grade)
    {
    case 'A':
        printf("your grade is A\n");
        printf("Excellent Work\n");
        break;
    case 'B':
         printf("your grade is B\n");
          printf("Well Done\n");
    break;
    case 'C':
          printf("your grade is C\n");
          printf("Good Job\n");
    break;
    case'D':
          printf("your grade is D\n");
          printf("You Passed,but you could do better\n");
    break;
     case'E':
         printf("your grade is E\n");
          printf("Sorry,You Failed\n");
    break;
    default:
    printf("your grade is grade F\n");
        break;
    }
    
if (grade=='A' || grade=='B' || grade=='C'||  grade=='D')
    {
       printf("Congratulations! You are eligible for the next level");
    }
    else if (grade=='f')
    {
       printf("Please try again next time");
    }
   else
   {
    printf("Invalid Grade");
   }
   
   
 }
 //(marks>100)? printf("Invalid Marks"):