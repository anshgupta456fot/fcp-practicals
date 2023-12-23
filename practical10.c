//swaping two numbers
#include<stdio.h>

void using_variable(int,int);
void without_variable(int,int);
int main(void)
{
    int a,b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("using third variable:\n");
    using_variable(a,b);
    printf("\nwithout using a third variable\n");
    without_variable(a,b);
    
}
void using_variable(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("a=%d\nb=%d\n",a,b);
}
void without_variable(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\nb=%d\n",a,b);
}