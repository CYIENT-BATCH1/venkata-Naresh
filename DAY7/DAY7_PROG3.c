/*Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if 
bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”  */


#include<stdio.h>
int main()
{
    int k,l;
    printf("Enter number to chake is in ADCONO register");
    scanf("%d %d",&k,&l);                        // read the input for the user
    if((28 & k)==28)                             //if condationn is true then goto if statement. 
    {
        l=l&0xf0;
        printf("number after clearing is required postions:%d",l);
    }
    else                                //if if codation is incorrect the it goto else part
    {
        printf("CHS3,CHS2 CHS1 CHS0 bits are not equal to 0x7");
    }
}



