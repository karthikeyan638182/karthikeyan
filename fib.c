#include<stdio.h>
void main()
{
int i,n,a=0,b=1,temp;
printf("Enter the values of n");
scanf("%d",&n);
printf("Fibonacci series is:");
for(i=1;i<=n;++)
{
printf("%d",a);
temp=a+b;
a=b;
b=temp;
}
}
