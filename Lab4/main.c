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
    if(n==0){
        return 0;
    }
    printf("\t%d\n",a);
    if(n==1){
       return 0;
    }
    printf("\t%d\n",b);
    if(n==2){
       return 0;
    }
    for(i=1; i<=n-2; i++){
        c=a+b;
        printf("\t%d\n",c);
        a=b;
        b=c;
    }
}
