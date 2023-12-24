//writing a file
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE*fp;
    fp=fopen("practical.txt","w");//r is a switch

    if(fp==NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        printf("the files exist");
    }
    //fprintf(fp,"%s","hi");
    fputs("my name is ansh gupta.\n This file is for FCP practical",fp);
    fclose(fp);
}
