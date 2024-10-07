#include<stdio.h>
void main()
{
int n;
printf("Enter any number");
scanf("%d",&n);
    if(n>=0)
        printf("the absolute value is %d",&n);
            else
                n=n*-1;
            printf("the absolute value is %d",&n);
}
