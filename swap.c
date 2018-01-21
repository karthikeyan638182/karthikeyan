#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("the swapped values are %d %d",a,b);
}
