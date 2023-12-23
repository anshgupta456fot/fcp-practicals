//Sum of Array Elements: Write a program to calculate and return the sum of elements of a 1-D array
#include<stdio.h>

int main(void)
{
    int n,i,sum=0;
    printf("enter the number of elements to entered in an array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the value for %dth index number ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("the sum of all the elements of array is: %d\n",sum);

}