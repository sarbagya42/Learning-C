#include <stdio.h>
#include <stdlib.h>
int prime(int);
int main()
{
    int a,check;
    printf("Type any number:");
    scanf("%d",&a);
    check=prime(a);
    if(check==1)
    {
        printf("Prime");
    }
    else
        {
        printf("Not Prime.");
        }
}

int prime(int x)
{
  int i,c=0;
  for(i=2; i<x; i++)
    {
    if(x%i==0)
    {
        c=c+1;
    }
}
if(c>=1)
{
    return 0;
}
else
{
    return 1;
}
}
