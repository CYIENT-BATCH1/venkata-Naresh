/*Set the register T0CON value such a way 
that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.*/

#include<stdio.h>
int main()
{
	int p0=3; // 3rd  position shift
	int p1=7;  // 7th position shift
	int a=33;   // give the input value 
	a=a|(1<<p0)|(1<<p1);    // logic
	printf("%x",a);      //  print the out put data


}

/*Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register
 if the value of the register is 0xF3
*/
#include<stdio.h>
int main()
{
    int n=0xf3;     // give the input value 
    int x,i;
    for(i=2;i>=0;i--)
    {                              // print the only three bit binary value
        x=(n>>i)&1;
        printf("%x",x);
    }
}

