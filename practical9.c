//Write a program to find average, max and min elements from an array of n long integers. 
#include<stdio.h>

int main(void)
{
    long int n,i,avg,max,min,sum=0;
    printf("enter the number of elements to be entered in array: ");
    scanf("%ld",&n);
    long int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the value for %ldth index: ",i);
        scanf("%ld",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
        }
        else
        {
            continue;
        }
    }
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<=min)
        {
            min=arr[i];
        }
        else
        {
            continue;
        }
    }
    printf("the average of the entered value of array is %ld\n",avg);
    printf("the max value of the entered value of array is %ld\n",max);
    printf("the min value of the entered value of array is %ld\n",min);
}