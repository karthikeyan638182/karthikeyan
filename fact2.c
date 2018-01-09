#include<stdio.h>
void main()
{
int n,i,fact;
printf("Enter the value of n\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
fact=n*i;
printf("The factorial of given number is %d",fact);
}
}
