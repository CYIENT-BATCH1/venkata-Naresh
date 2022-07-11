/* Write a program in C to sort an array using Pointer. The sample output must be as below

*/
#include <stdio.h>

int main()
{
    int arr[7]={25,58,6,32,98,7};   // array data          
    int *ptr;                        // declarations of pointer
    int i,j,t;                      
    ptr=&arr;
    for(i=0;ptr[i];i++)      // two for loop is use to compared the one element to all other elements
{
    for(j=i+1;ptr[j];j++)
    {
        if(ptr[i]>ptr[j])   // if condation is true the swaping is occured
        {
            t=ptr[i];
            ptr[i]=ptr[j];         //swap logic
             ptr[j]=t;
        }
    }
    printf("%d ",ptr[i]);  // final out is print
}
    return 0;
}