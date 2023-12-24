#include<stdio.h>

int main(void)
{
    int m,diagonal_sum=0;
    printf("enter the value of order of the square matrix");
    scanf("%d",&m);
    int matrix[m][m];
    for(int i = 0;i<m;i++)
    {
        for(int s = 0;s<m;s++)
        {
            printf("enter the value for a%d%d element",i+1,s+1);
            scanf("%d",&matrix[i][s]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("\t%d\t",matrix[i][j]);
            if(i==j)
            {
                diagonal_sum+=matrix[i][i];
            }
        }
        printf("\n");
    }
    printf("the sum of the diagonal of the matrix is: %d",diagonal_sum);
}