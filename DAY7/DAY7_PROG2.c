//Write a code to swap even bits with odd bits in unsigned long variable?


#include<stdio.h>
int main()
{
    unsigned int x=212,l;//give the positive value in 64 bit
    for(int i=64;i>=0;i--)    //  convete the decimal to  binary numbers of given data
    {
        int k=x>>i;
    if(k&1)
    printf("1");
    else
    printf("0");
        
    }
    printf("\n");
    
    unsigned even=x&0xAAAAAAAAAAAAAAAA;    //data &(bitwise and) with A =1010
    unsigned odd=x&0x5555555555555555;    //data |(bitwise and) with 5=0101
    l=(even>>1)|(odd<<1);      // even bit shift right side and odd shift left side
    printf("%d \n",l);      
    for(int j=64;j>=0;j--)
    {
        int k=l>>j;            //  convete the decimal to  binary numbers of given data
    if(k&1)
    printf("1");
    else
    printf("0");
        
    }
}





   
