#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i,k,c=0;
    int j=1;
    printf("Range:");
    scanf("%d",&num1);
    printf("%d",j);
    for(i=1; i!=num1+1; i=i+1){
        while(j!=i+1){
                k=i%j;
                if(k==0){
                c=c+1;
                 }
                 j=j+1;
                }
                if(c==2){
                    printf("\n%d",i);
                }
        c=0;
        j=1;
    }


    return 0;
}
