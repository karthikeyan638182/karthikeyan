#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int c,d;
printf("Enter both the string");
scanf("%s",&a);
scanf("%d",&b);
c=strlen(a);
d=strlen(b);
if(c>d)
{
printf("%s",a);
}
else if(c=d)
{
printf("%s %s",a,b);
}
else
{
printf("%s",b);
}
}
