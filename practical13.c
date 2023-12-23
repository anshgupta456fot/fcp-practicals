//reverse string without library
#include<stdio.h>
#include<string.h>

int main(void)
{
    int count=0;
    char c[10000];
    printf("enter a string:");
    fgets(c, sizeof(c), stdin);
    for(int i=0;c[i]!='\0';i++)
    {
        count++;
    }
    for(int m=count;m>=0;m--)
    {
        printf("%c",c[m]);
    }
}