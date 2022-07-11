/*Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position. Function has to flip the bit position (as per argument 2)
 in argument 1 byte value and return complete byte value.*/


#include<stdio.h>

    int bitposition(int arg1,int arg2)
    {
        arg1=arg1^(1<<arg2);                 // function ( shift the position  )
    }
    int main()
{
    int x;
printf("enter the number in hex");
scanf("%d",&x);                           // read the data for the user input data
    printf("%d",(x));              //  it call function 
}


