/*It was Raj's first day at school. His teacher asked the students to meet every other student in the class and to introduce themselves. The teacher asked them to give handshakes when they meet each other.
 If there are ‘n’ number of students in the class then find the total number of handshakes made by the students.
*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the n value");
    scanf("%d",&n);
    m=n*(n-1)|1;
    printf("%d",m);
}