//5. Check alphabet is vowel or consonant
#include<stdio.h>
int main()
{
    char h;
    printf("Enter the charater ");
    scanf("%c",&h);
    
    (h=='a'||h=='e'||h=='i'||h=='o'||h=='u'||h=='A'||h=='E'||h=='I'||h=='O'||h=='U')?printf("vowel"):printf("consonant");
    
}