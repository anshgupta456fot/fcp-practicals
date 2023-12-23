#include<stdio.h>

int natural_number_sum(int);
int main(void)
{
    int n, sum;
    printf("Enter a natural number");
    scanf("%d",&n);
    if(n<1)
    {
        printf("you entered a non natural number");
        return 1;
    }
    else
    {
        sum = natural_number_sum(n);
        printf("the sum of all natural number upto %d = %d",n,sum);
    }
}

int natural_number_sum(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    return sum;
}