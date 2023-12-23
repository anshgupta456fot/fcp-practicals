//determine whether even or odd
#include<stdio.h>

int main(void)
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n == 0)
    {
        printf("%d is even",n);
    }
    else if(n % 2 == 0)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is odd",n);
    }
}