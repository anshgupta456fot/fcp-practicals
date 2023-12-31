#include <stdio.h>

int main(void) 
{
    int digit = 0;
    long long int n;
    long long int t1;

    printf("enter credit card number: ");
    scanf("%lld", &n);

    t1 = n;

    printf("\n%lld\n", t1);

    while (t1 > 0) 
    {
        t1 = t1 / 10;
        digit++;
    }
    if (digit != 16) 
    {
        printf("INVALID\n");
        return 0;
    }


    int sum1 = 0, sum2 = 0, total = 0;
    int mod1, mod2, d1, d2;
    long long int x = n;
    do 
    {
        // STORE LAST DIGIT TO SUM1
        mod1 = x % 10;
        sum1 = mod1 + sum1;
        x /= 10;
        // storing digit 2 to mod2 and doubling it
        mod2 = x % 10;
        mod2 *= 2;
        x /= 10;
        // dividing the digit into two parts
        d2 = mod2 % 10;
        d1 = mod2 / 10;
        sum2 = d1 + d2 + sum2;
    }
    while (x > 0);
    total = sum1 + sum2;
    if (total % 10 != 0)
    {
        printf("INVALID\n");
    }
    else
    {
        printf("valid");
    }
}