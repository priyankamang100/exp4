#include<stdio.h>
void main()
{
int n,r;
printf("Enter the number");
scanf("%d",&n);
r=n%10;
    if(r%2==0)
        printf("last digit of given number is even");
    else
        printf("last digit of given number is odd");
}
