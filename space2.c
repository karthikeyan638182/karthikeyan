#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int c=0,i,n;
printf("Enter the value of character");
scanf("%c",&a);
n=strlen(a);
for(i=0;i<=n;i++)
{
if(a[i]!=" ")
c++;
}
printf("no.of words %d",c+1);
getch();
}
