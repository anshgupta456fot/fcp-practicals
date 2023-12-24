//reading a file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    FILE *fp;
    char c;
    
    fp=fopen("practical.txt","r");
    if(fp == NULL)
    {
        printf("file doesn't exist");
    }
    while((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }
    fclose(fp);
}