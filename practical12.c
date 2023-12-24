// a program to multiply two matrix
#include<stdio.h>

int main(void)
{
    int s;
    printf("enter the value of order of the square matrix");
    scanf("%d",&s);
    int matrix1[s][s],matrix2[s][s],matrix3[s][s];
    printf("\nenter the value of first matrix\n");
    for(int i=0;i<s;i++)
    {
        for(int m=0;m<s;m++)
        {
            printf("enter the value for a[%d][%d]: ",i+1,m+1);
            scanf("%d",&matrix1[i][m]);
        }
    }
    printf("\n\n enter the value of second matrix\n");
    for(int i=0;i<s;i++)
    {
        for(int m=0;m<s;m++)
        {
            printf("enter the value for b[%d][%d]: ",i+1,m+1);
            scanf("%d",&matrix2[i][m]);
        }
    }
    // ...
for(int i = 0; i < s; i++)
{
    for(int m = 0; m < s; m++)
    {
        matrix3[i][m] = 0;
        for(int n = 0; n < s; n++) 
        {
            matrix3[i][m] = matrix3[i][m] + matrix1[i][n] * matrix2[n][m];
        }
    }
}

    for(int a=0;a<s;a++)
    {
        for(int b=0;b<s;b++)
        {
            printf("%d  ",matrix3[a][b]);
        }
        printf("\n");
    }
}
