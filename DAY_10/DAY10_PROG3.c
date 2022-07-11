/*Write a program to Implement ”Selection Sort” using Recursion for given elements 
1(Number elements will vary, so make it as configurable*/
#include<stdio.h>
void sort_element(int arr[], int n)     // Function definations
{
    int i,j;
    if(n>0)
    {
        int i,j,t;
     for(i=0;arr[i];i++)
    {                                     
    for(j=i+1;arr[j];j++)
    {
        if(arr[i]>arr[j])     //compared the one element to all element
        {
            t=arr[i];
            arr[i]=arr[j];    // swap logic
            arr[j]=t;
        }
    }
        
    }
}
}

int main()
{
    int n=5,j;
   
    int arr[n];
    printf("Enter the Array Element:");      // read the input data
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    sort_element(arr,n);    // function call
    printf("After ascending order sort Array Elements are:");
    int i;
    for (i=0; i < n; i++)
     printf("%d ", arr[i]);       //print the output values
    return 0;
}