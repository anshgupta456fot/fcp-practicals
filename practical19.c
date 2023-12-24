#include<stdio.h>

int main(void)
{
    int n,choice,index=-2;
    printf("enter the number elements to be added in array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the value to be entered in the array");
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched in the array: ");
    scanf("%d",&choice);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==choice)
        {
            index=i;
        }
        else 
        {
            continue;
        } 
    }
    if(index >=0)
    {
        printf("%d is found at %dth index in the array",choice,index);
    }
    else{
        printf("%d is not found in the array",choice);
    }
}