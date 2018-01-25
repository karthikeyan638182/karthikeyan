#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100],i,j;
printf("Enter the first string");
scanf("%s",&a);
printf("Enter the second string");
scanf("%d",&b);
for(i=0;a[i]!='\0';++i);
for(j=0;b[j]!='\0';++j,++i)
{
a[i]=a[j];
}
a[i]='\0';
printf("The concatenated string is %s",a);
}
