#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,c,i,s;
    printf("Type a number:");
    scanf("%d",&n);
    s=n;
    while(n!=0){
        c=n%10;
        i=i+pow(c,3);
        n=n/10;
    }
    if(s==i){
        printf("Armstrong");
    }else{
        printf("Not Armstrong");
    }
    return 0;
}
