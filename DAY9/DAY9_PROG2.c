/*Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” 
if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”
*/
#include <stdio.h>
int main()

{
  int num1,num2,pos=3,pos1=6,pos2=7;//given the position value 
  printf("enter the values");
  scanf("%d%d",&num1,&num2);//read the two data
  if((48 & num1) == 48)    //  if condations are used
  {
      num2=num2|(1<<pos)|(1<<pos1)|(1<<pos2); // position are used
      printf("%d",num2);// print the output
  }
  else
  printf(" not equal nothing");

}
