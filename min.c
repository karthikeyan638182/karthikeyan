#include<stdio.h>
void main()
{
int a[100],i,max=0,n;
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("Enter the values");
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
  if(max<a[i])
  {
    max=a[i];
  }
}
  printf("%d",a[i]);
}
