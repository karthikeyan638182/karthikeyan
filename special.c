#include <stdio.h>
void main() 
{
char a[100];
int c=0,i;
printf("Enter the string:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
c++;
}
printf("%d",c);
}
