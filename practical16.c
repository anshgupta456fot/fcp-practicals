#include<stdio.h>

int series(int);
int main(void)
{
    int start;
    printf("enter the number of terms for fibonacci series: ");
    scanf("%d",&start);
    if(start<0)
    {
        printf("you entered wrong input.");
        return 1;
    }
   printf("Fibonacci Series: ");
    for (int i = 0; i < start; i++) {
        printf("%d ", series(i));
    }
}

int series(int start)
{
    if(start==0)
    {
        return 0;
    }
    else if(start==1||start==2)
    {
        return 1;
    }
    else
    {
        return (series(start-1)+series(start-2));
    }
}