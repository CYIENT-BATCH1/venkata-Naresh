/* Find empty strings in an array of strings (Array of strings will be given as input to program) and
 print the position of array where empty string is present. And replace the empty string array element as “CYIENT”
Switch status valueMeaning
00Fault type 1 in switch
01switch is buckle
10switch is unbuckle
11Fault type 2 in switch  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *p[]={"sai","mohan","rahul"," ","raju"};
    int size=sizeof p/sizeof(p[0]);
    int pos=1;
    printf("%d",size);
    int i,j,k,count=0;
    for(i=0;i<5;i++){
        printf("\n");
        if(p[i]==" "){
            pos=pos+3;
            p[i]="cyient";
        }
    printf("%s ",*(p+i));
    }
    printf("\n");
     printf("pos=%d\n",pos);
    return 0;
}
