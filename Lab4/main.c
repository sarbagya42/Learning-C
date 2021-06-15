#include <stdio.h>
#include <stdlib.h>
//Prime Checker
int main()
{
    int a,b,c=0,i;
    printf("Type any number:");
    scanf("%d",&a);
    for(i=1; i<=a; i++){
        b=a%i;
        if(b==0){
            c=c+1;
        }
    }
    if(c==2){
        printf("\t\n%d is a Prime Number\n",a);
    }else{
        printf("\t\n%d is NOT a Prime Number\n",a);

    }
    return 0;
}
