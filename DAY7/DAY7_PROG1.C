/*Write a program to convert a data stream from Little
 Endian to Big Endian (you can take any 8 bit value or use 0b110101110)?*/

#include<stdio.h>
int main()
{
    int a=0x12;                     // give the input value
    a=(a>>4&0x0f)|((a&0x0f)<<4);   //logic 
    printf("%x \n",a);            //  print the output in hex number

    for(int i=8;i>=0;i--)
    {
        int k=a>>i;            // decimal no to binary no convertion
    if(k&1)
    printf("1");
    else
    printf("0");
        
    }
}



