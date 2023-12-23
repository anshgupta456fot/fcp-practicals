// a program to multiply two matrix
#include<stdio.h>

int main(void)
{
    int matrix1[3][3],matrix2[3][3],matrix3[3][3];
    printf("\nenter the value of first matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int m=0;m<3;m++)
        {
            printf("enter the value for a[%d][%d]: ",i+1,m+1);
            scanf("%d",&matrix1[i][m]);
        }
    }
    printf("\n\n enter the value of second matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int m=0;m<3;m++)
        {
            printf("enter the value for b[%d][%d]: ",i+1,m+1);
            scanf("%d",&matrix2[i][m]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int m=0;m<3;m++)
        {
            matrix3[i][m]=0;
            for(int n=0;n<3;n++)
            {
                matrix3[i][m]=matrix3[i][m]+matrix1[i][n]*matrix2[n][m];
            }
        }
    }
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            printf("%d  ",matrix3[a][b]);
        }
        printf("\n");
    }
}
