#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compare(const void *a, const void *b);
void printLargestNumber(int arr[], int n);
int main(void) 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printLargestNumber(arr, n);
}

int compare(const void *a, const void *b) 
{
    char ab[20], ba[20];
    sprintf(ab, "%d%d", *(const int*)a, *(const int*)b);
    sprintf(ba, "%d%d", *(const int*)b, *(const int*)a);
    return strcmp(ba, ab);
}
void printLargestNumber(int arr[], int n) 
{
    qsort(arr, n, sizeof(int), compare);
    printf("The largest number formed is: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}