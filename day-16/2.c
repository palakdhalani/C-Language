#include <stdio.h>

int main() {

    int new = 11 ;
    for (int row = 1; row <= 4 ;row++ )
        {
            for (int col = row;col >= 1 ;col-- )
                {
                printf("%d ",new);
                new++;
            }
        printf("\n");
    }
}