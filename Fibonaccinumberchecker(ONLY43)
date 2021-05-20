#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int a=0, d=0;
    int c=0;
    int b=1;
    int i,j;
    int store[45];
    int n=45;
    printf("Type the number for inspection:");
    scanf("%d",&num1);
    if(num1>=701408733){
        printf("\n");
            printf("The number you have provided is OUT OF RANGE");
    printf("\n");
        return 0;
    }
    store[0]=0;
    store[1]=1;
    for(i=1; i!=n-1; i++){
        c=a+b;
        store[i+1]=c;
        a=b;
        b=c;
    }
    for(j=0; j!=44; j++){
        if(store[j]==num1){
                d=d+1;
        }
    }
        if(d>0){
            printf("\nIt is a Fibonacci Number");
        }else{
            printf("\nNope, it's not a Fibonacci Number");
        }
        printf("\n");
return 0;
}


