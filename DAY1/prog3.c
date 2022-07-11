/*The entire area of a circular garden is to be covered with grass by a Gardener.
 The radius of the garden is given by the user input. Calculate the area that has to be covered.*/

    #include<stdio.h>
    int main()
    {
    float r,n;
    printf("enter the r value");
    scanf("%f",&r);            // read the input for the user.
    n=3.14*r*r;                 //formula of circular
    printf("%f",n);         
    }