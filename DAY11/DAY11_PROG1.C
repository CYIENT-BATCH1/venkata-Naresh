/*Write a program to do binary search in a sorted array.
Program should take input of sorted values and search value.*/


#include<stdio.h>
int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while(low<=high) {
    int mid=(high+low)/2;
    if(array[mid]==x)                         // function defination
      return mid;
    if(array[mid]<x)
      low=mid+1;
      else
      high=mid-1;
  }
  
}
int main() {
  int array[]={3,4,5,6,8,7,9};   // Array input 
  int n=sizeof(array)/sizeof(array[0]);//size of the array
  int x=6;
  int result=binarySearch(array,x,0,n-1);// function call
   printf("Element is found at index %d", result);    //print the output 
}
