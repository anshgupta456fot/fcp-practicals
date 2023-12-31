#include <stdio.h>

void printUpperTriangularMatrix(int matrix[][2], int size);

int main(void) 
{
    int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);
    int matrix[size][size];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            printf("enter the value for a%d%dth place: ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nUpper Triangular Matrix:\n");
    printUpperTriangularMatrix(matrix, size);
}


void printUpperTriangularMatrix(int matrix[][2], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            if (j >= i)
            {
                printf("%d\t", matrix[i][j]);
            } 
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
}
