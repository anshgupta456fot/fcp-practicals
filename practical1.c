//simple interest calculation
#include<stdio.h>

float simple_interest(int, float, int);
int main(void)
{
    int p, t;
    float r, si;
    printf("enter the principle amount");
    scanf("%d", &p);
    printf("enter the rate of interest");
    scanf("%f", &r);
    printf("enter time");
    scanf("%d", &t);
    si=simple_interest(p, r, t);
    printf("the simple interest would be: %f", si);
}

float simple_interest(int p, float r, int t)
{
    float si;
    si=(p * r * t) / 100;
    return si;
}
