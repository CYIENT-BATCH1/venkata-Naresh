/*Consider the weights of three people as user input. Find the heaviest among them and print it.  */


     #include<stdio.h>
     int main()
     {
    int a,b,c;
    printf("enter the a b and c value");
    scanf("%d %d %d",&a,&b,&c);
    ((a>b&a>c)?printf("A is large "):b>c?printf("B is large"):printf("c is large"));
     }
