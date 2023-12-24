// pointer arithmetic
#include<stdio.h>

int main(void)
{
    int choice;
    do
    {
        printf("enter 1 for incrementing a pointer\n");
        printf("enter 2 for decrementing a pointer\n");
        printf("enter 3 for addition of an integer to a pointer\n");
        printf("enter 4 for subtraction of an integer to a pointer\n");
        printf("enter 5 for subtracting two pointers of same type\n");
        printf("enter choice");
        scanf("%d",&choice);
    }
    while(choice>5||choice<1);
    int number;
    printf("enter an integer: ");
    scanf("%d",&number);
    int *p=&number;
    if(choice==1)
    {
        printf("p=%u\n",p);
        p++;
        printf("p=%u\n",p);
    }
    if(choice==2)
    {
        printf("p=%u\n",p);
        p--;
        printf("p=%u\n",p);
    }
    if(choice==3)
    {
        printf("p=%u\n",p);
        p+=3;
        printf("p=%u\n",p);
    }
    if(choice==4)
    {
        printf("p=%u\n",p);
        p-=3;
        printf("p=%u\n",p);
    }
    if(choice==5)
    {
        int n;
        printf("enter an integer");
        scanf("%d",&n);
        int *new=&n;
        printf("p=%u\n n=%u\n",p,new);
        int result=p-new;
        printf("after subtracting two pointer: %d\n",result);

    }
}