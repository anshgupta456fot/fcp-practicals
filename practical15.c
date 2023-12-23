#include<string.h>

int factorial(int);
int combination(int,int);
int main(void)
{
    int n,r,combi;
    do
    {
        printf("enter the value of n: ");
        scanf("%d",&n);
        printf("enter the value of r: ");
        scanf("%d",&r);
    }
    while (n<r);
    combi = combination(n,r);
    printf("the value of C(n,r)= %d",combi);
}

int factorial(int a)
{
    int fact = 1;
    for(int i = 1; i<=a;i++)
    {
        fact *=i;
    }
    return fact;
}
int combination(int n, int r)
{
    int combi;
    combi = factorial(n)/(factorial(r)*factorial(n-r));
    return combi;
}
