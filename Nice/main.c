#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,k=0;
    printf("Type any Decimal Number:");
    scanf("%d",&a);
    while(a!=0){
        b=a%2;
        c=c+b*pow(10,k);
        k=k+1;
        a=a/2;
      }
      printf("%d",c);
    return 0;
}
