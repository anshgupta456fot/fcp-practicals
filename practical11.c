// wap to print 2 3x3 matrix and adding them
#include<stdio.h>

int main(void)
{
    int m;
    printf("enter the value of order of the square matrix");
    scanf("%d",&m);
    int a[m][m],b[m][m],i,j,c[m][m];
    // taking values of matrix a
    printf("enter values for first matrix\n");
    for(int l=0; l<m;l ++)
    {
        for(int s=0;s<m;s++)
        {
            printf("Enter Element at %d%d position: ",l+1,s+1);
            scanf("%d",&a[l][s]);
        }
    }
    printf("\n");
    //taking values of matrix b
    printf("Now enter values for second matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter Element at %d%d position: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    //printing value of matrix a 
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\t%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    //printing values of matrix b
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\t%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n Sum of both matrix is:\n");
    // adding these two matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            //adding the 2 matrix and storing it in matrix c
            c[i][j]=a[i][j]+b[i][j];
            //printing values of matrix c
            printf("\t%d\t",c[i][j]);
        }
        printf("\n");
    }
}