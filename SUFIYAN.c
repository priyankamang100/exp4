#include<stdio.h>
void main ()
{
    int a,b,temp;
    printf("enter the value of a:");
    printf("enter th value of b:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n after swaping a:%d",b);
    printf("\n after swaping b:%d",a);
}
