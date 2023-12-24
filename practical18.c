#include<stdio.h>

int main(void)
{
    int a,b,exponents,choice;
    do
    {
        printf("enter 1 for sum\n");
        printf("enter 2 for subtraction\n");
        printf("enter 3 for product\n");
        printf("enter 4 for division\n");
        printf("enter 5 for exponents\n");
        printf("enter your choice");
        scanf("%d",&choice);
    }
    while(choice>5||choice<1);
    printf("enter the value of a and b respectively");
    scanf("%d%d",&a,&b);
    switch(choice)
    {
        case 1:
            printf("sum=%d",a+b);
            break;
        case 2:
            printf("difference=%d",a-b);
            break;
        case 3:
            printf("product=%d",a*b);
            break;
        case 4:
            printf("division=%f",(float)a/b);
            break;
        case 5:
        exponents = 1;
            for(int i=1;i<=b;i++)
            {
                exponents *= a;
            }
            printf("exponents=%d",exponents);
            break;
    }
}