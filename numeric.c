#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int numeric;
printf("Enter the character");
scanf("%c",&a);
while(a[i]!="\0")
{
if(a[i]>"0"&&a[i]<="9")
{
numeric++;
}
}
printf("number of numeric value is %d",numeric);
getch();
}
