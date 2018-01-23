#include<stdio.h>
void main()
{
int a[50],i,n,max;
printf("Enter the value of n");
scanf("%d",&n);
printf("Enter the all 10 values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max
{
max=a[i];
}
}
printf("The biggest number is %d",max);
}
