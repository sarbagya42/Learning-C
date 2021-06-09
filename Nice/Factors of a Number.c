#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int i;
    printf("Type the number:");
    scanf("%d",&num1);
    printf("Factors are:\n");
    for(i=1; i!=num1+1; i++){
        if(num1%i==0){
           printf("%d\n",i);
            }
    }
    return 0;
}
