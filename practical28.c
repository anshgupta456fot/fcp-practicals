#include<stdio.h>

void arithmetic_pointer(int *, int *,int *,float *,int,int);
int main(void)
{
    int a,b,sum,product,subtraction;
    float division;
    printf("enter the value of a and b respectively");
    scanf("%d%d",&a,&b);
    arithmetic_pointer(&sum,&product,&subtraction,&division,a,b);
    printf("sum=%d\nproduct=%d\ndifference=%d\ndivision=%f\n",sum,product,subtraction,division);
}

void arithmetic_pointer(int *sum,int *product,int *subtraction,float *division,int a,int b)
{
    *sum = a + b;
    *product = a * b;
    *subtraction = a-b;
    *division = (float)a / b;
}