#include <stdio.h>

void square(int *num);

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    square(&number);
    printf("Square of the entered number: %d\n", number);
}
void square(int *num)
{
    *num = (*num) * (*num);
}