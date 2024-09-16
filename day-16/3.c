#include <stdio.h>

int main() {

    
    for (int row = 5; row >= 1 ;row-- )
        {
            for(int spece = 2; spece <= row ; spece++){
                printf("- ");
            }
            
            for (int col = row; col <= 5 ;col++ )
                {
                printf("%d ",col);
               
            }
        printf("\n");
    }
}