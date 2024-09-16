#include <stdio.h>

int main() {
    
    for (int row = 5; row >= 1 ;row--)
        {
            for(int spece = 2; spece <= row ; spece++){
                printf("  ");
            }
            
            for (int col = row; col <= 5 ;col++)
            {
              printf("%d ",col);
            }
            
            for (int col = 4; col >= row ;col--)
            {
              printf("%d ",col);
            }
             for(int spece = 2; spece <= row ; spece++){
                printf("  ");
            }
        printf("\n");
    }
}