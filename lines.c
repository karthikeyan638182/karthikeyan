#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int lines,n,i;
printf("Enter the character");
scanf("%c",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]=='.')
{
lines++;
}
}
printf("The number of lines id %d",lines);
}
