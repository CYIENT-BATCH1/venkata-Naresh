/*Consider the phone number of a person as user input and find the sum of its digits. 
#include<stdio.h>
     int main()
     {
         int n,sum=0,sum1=0;
         scanf("%d",&n);
         while(n>0)
         {
             sum=sum+n%10;
             n=n/10;
         }
         printf("%d  \n",sum);
         while(sum>0)
         {
             sum1=sum1+sum%10;
             sum=sum/10;
         }
         printf("%d",sum1);
     }
