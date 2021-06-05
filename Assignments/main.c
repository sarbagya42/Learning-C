#include <stdio.h>
#include <stdlib.h>
// Larger number

int main()
{
 int a,b;
 printf("Type any two numbers:");
 scanf("%d %d",&a,&b);
 printf("The larger number is %d", a>b?a:b);
    return 0;
}
