#include<stdio.h>

int factorial(int);
int main(void)
{
    int a,fact;
    printf("enter a number:");
    scanf("%d",&a);
    fact=factorial(a);
    printf("factorial of %d is %d\n",a,fact);
}

int factorial(int a)
{
    int f;
    if(a==1)
    {
        return 1;
    }
    else{
        f=a*factorial(a-1);
    }
    return f;
}