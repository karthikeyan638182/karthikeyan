#include<stdio.h>
#include<string.h>
 
void main()
{
    char a[50];
    int n,i,c=0;
    gets(a);
    n=strlen(a);
    for(i=0;i!=n;i++)
    {
        if(a[i]!=' ')
        {
            c++;
        }
    }
    printf("%d",c);
 
 
}
