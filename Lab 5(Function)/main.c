#include <stdio.h>
#include <stdlib.h>
int factorial(int);
int main()
{
    int a;
    long long store;
    printf("Type a number:");
    scanf("%d",&a);
    store=factorial(a);
    if(store!=-2)
    {
    printf("\nThe Factorial of %d is %d\n",a,store);
    }
    else
    {
        printf("\nNegative Entry not allowed\n");
    }
    return 0;
}

int factorial(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    } else if(x<0)
    {
     return -2;
    }
    else
        {
        return x*factorial(x-1);
    }
}
