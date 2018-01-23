#include<stdio.h>
void main()
{
int i,j;
printf("Enter the value of i");
scanf("%d",&i);
printf("Enter the value of j");
scanf("%d",&j);
printf("Before swap %d %d",i,j);
i=i^j;
j=i^j;
i=i^j;
printf("\nAfter swap %d %d",i,j);
}
