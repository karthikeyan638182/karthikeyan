#include<stdio.h>
void main()
{
int i,a[100],n;
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);  
printf("%d%d",a[i],i);
}
}
