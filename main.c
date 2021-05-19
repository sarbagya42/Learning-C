#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1;
    int num2;
    int c=0;
    int i;
    int j;
    printf("Total numbers:");
    scanf("%d",&num1);
    printf("Divider:");
    scanf("%d",&num2);
    int array[num1];
    for(i=0; i!=num1; i++){
        printf("Please add numbers:");
        scanf("%d",&array[i]);
    }
    for(j=0; j!=num1; j++){
            if(array[j]%num2==0){
                c=c+1;
            }

    }
    printf("%d",c);



    return 0;
}
