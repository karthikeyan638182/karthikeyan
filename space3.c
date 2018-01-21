#include <stdio.h>
void main()
{
  int i,c;
  char a[100];
  printf("Enter the character");
  scanf("%s",&a);
  for(i=0 ; a[0]!="\0" ; i++)
    {
      if(a[i]=' ')
        {
          c++;
        }
    }
  printf("Number of spaces is %d" c);
  printf("Number of words is %d",c+1);
}
