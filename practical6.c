//Basic Array Operations: Write a program to traverse an array and print the odd-indexed elements
#include<stdio.h>

int main(void)
{
    int n,i;
    printf("enter the number elements to be entered in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i< n; i++)
    {
        printf("enter the number for %dth index: ",i);
        scanf("%d",&arr[i]);
    }
    i=1;
    while(i<n)
        {
            printf("%d\t",arr[i]);
            i+=2;
        }  
}