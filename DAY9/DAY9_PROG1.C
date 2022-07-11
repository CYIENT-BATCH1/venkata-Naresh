/* Set the register SSPSTAT value such a way that bit CKE, P and S bit 
are cleared (0), without disturbing the other bits.
*/



#include<stdio.h>

int main(){
    int n=0xfa;// given the data
    int p=3;// 3rd  position   
    int p1=4;// 4rd position   
    int p2=6; // 6th position  
    n=n&~(1<<p)&~(1<<p1)&~(1<<p2);   // position shifting

    printf("%x",n);  // print the output
}

/* Find out the value of UA, BF, SMP bits in SSPSTAT register 
if the value of the register is 0x55*/
#include <stdio.h>
int main(){
    int b,c,e, a=0x23;// given the data
    b=a&(1<<0);// left shift 
    c=a&(1<<1);
    e=a&(1<<7);
    printf("%d%d%d",b,c,e);  // print the output
}
