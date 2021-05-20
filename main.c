#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b,c,i,k=0;
    printf("Type any number:");
    scanf("%d",&n);
    b=5*n*n+4;
    c=5*n*n-4;
    for(i=1; i!=b; i++){
        if(i*i==b || i*i==c){
            k=k+1;
        }
    }
    printf("\n");
    if(k>0){
        printf("It is a Fibonacci Number.");
    }else{
        printf("It is not a Fibonacci Number.");
    }
    printf("\n");
return 0;
}

