#include <stdio.h>

int main() {

    int start, end;
    int a = 0, b = 1, last;

    printf("Enter any number: ");
    scanf("%d", &start);
    printf("%d, %d,", a, b);

for (end = 3; end <= start; end++) {
    last = a + b; printf("%d, ", last);
    a = b;
    b = last;
}
}