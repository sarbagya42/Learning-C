#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i,k,c=0,p=0,o=10000;
    int arr[o];
    int j=1;
    printf("How many Prime Numbers do you want?:");
    scanf("%d",&num1);
    printf("\t%d",j);
    for(i=1; i!=o+1; i=i+1){
        while(j!=i+1){
                k=i%j;
                if(k==0){
                c=c+1;
                 }
                 j=j+1;
                }
                if(c==2){
                    arr[p]=i;
                    p=p+1;
                    }
        c=0;
        j=1;
    }
    for(j=1; j!=num1; j++){
    printf("\n\t%d",arr[j]);
    }
    return 0;
}
