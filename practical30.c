#include <stdio.h>

void findDuplicates(int arr[], int n);

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, n);

    return 0;
}

void findDuplicates(int arr[], int n) 
{
    int count = 0;

    printf("Duplicate elements and their indices:\n");

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                printf("Index %d and %d: %d\n", i, j, arr[i]);
                count++;
            }
        }
    }

    if (count == 0) 
    {
        printf("No duplicates found.\n");
    } 
    else 
    {
        printf("Total number of duplicates: %d\n", count);
    }
}
