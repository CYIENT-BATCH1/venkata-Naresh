//Write a program to convert Celsius form of temperature into Fahrenheit and vice versa.

#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the f");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("%f",c);
}



/*include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the C");
    scanf("%f",&c);
    f=((c*9/5)+32);
    printf("%f",f);
}