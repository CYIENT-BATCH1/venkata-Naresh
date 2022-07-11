/*A message is encoded in the form of numbers and sent to you.
 Write a program to decode the message. (HINT: A=1, B=2, … so on)*/ 
#include<stdio.h>
int main()
{
    int n;
    char ch;
    printf("Enter the charater:  ");
    scanf("%c",&ch);
    n=ch%96;
    printf("%d",n);
}