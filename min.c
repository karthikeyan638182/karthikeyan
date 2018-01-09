#include<stdio.h>
void main()
{
int a[100],i,j,n;
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("Enter the values");
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]>a[j])
{
printf("%d",a[i]);
}
}
}
}
