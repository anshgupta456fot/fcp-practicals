#include<stdio.h>

void swap_number(int *,int *);
int main(void)
{
    int a,b;
    printf("enter the value of a and b respectively");
    scanf("%d%d",&a,&b);
    swap_number(&a,&b);
    printf("after swaping the numbers\n");
    printf("a=%d and b=%d",a,b);
}

void swap_number(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}