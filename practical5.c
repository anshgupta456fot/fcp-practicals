// factorial of a number
#include<stdio.h>

int main(void)
{
    int n;
    long fac=1;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n>=0)
    {
        for(int i=1; i<=n; i++)
    {
        fac*=i;
    }
    printf("the factorial of %d= %d",n,fac);
    }
    else
    {
        printf("factorial is not defined");
        return 1;
    }
}
