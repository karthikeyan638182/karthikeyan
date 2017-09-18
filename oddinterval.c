#include <stdio.h>
void main()
{
    int num,m ,n;
    printf("enter the value of m");
    scanf("%d",&m);
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Odd Numbers in a given range m to n:\n");
    for (num = m; num <= n; num++)
    {
               if (num % 2 == 1)
                  printf ("%d ", num);
         }
}
