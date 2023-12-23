// Write a program that uses for loops to find the largest element in a 1-D array and returns it.
#include<stdio.h>

int main(void)
{
    int n,i,largest;
    printf("enter the number of elements to be entered in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the value for %dth index: ",i);
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>=largest)
        {
            largest=arr[i];
        }
        else
        {
            continue;
        }
    }
    printf("the largest number is %d",largest);
}