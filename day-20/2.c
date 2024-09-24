#include<stdio.h>

 int palak(){
int div;
   printf("enter any number = ");
   scanf("%d",&div);

   if (div% 3==0 && div%5==0)
   {
    printf("The given number is divisible by both 3 & 5.");
   }
   else
   {
    printf("The given number is not divisible by both 3 & 5.");
   }
   
   
 }

int main(){

    int pal;
    printf("enter the loop value");
    scanf("%d",&pal);
 
 for (int  i = 0; i < pal; i++)
 {
    palak();
 }
 

}