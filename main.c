#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int a=0;
    int b=1;
    int c,i,n;
    printf("Type number of Fibonacci Terms you want:");
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=1; i!=n-1; i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}
