/*Take a 6-digit number as input from the user and reverse the number.
 Make sure that the number does not include a ‘0’ in any of its digits.*/

    #include<stdio.h>
     int main()
     {
    int a,b,c,d,e,f,rev;
    printf("Enter a number:");
     scanf("%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f);
     rev=100000*f+10000*e+1000*d+100*c+10*b+a;
    printf("Reverese of 6 digit number=%d",rev);
    return 0;
    }