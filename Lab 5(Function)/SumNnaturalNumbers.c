#include <stdio.h>
#include <stdlib.h>
int sum(int);
int main()
{
    int a;
    printf("Type any number:");
    scanf("%d",&a);
    printf("\nThe sum of first %d natural numbers is %d\n",a,sum(a));
    return 0;
}

sum(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return x+sum(x-1);
    }
}
