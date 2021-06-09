#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6];
    int i,j;
    int c=0;
    for(i=1; i!=7; i++){
            if(i==1 || i==2){
        printf("Enter %d%s number of series:",i, i==1 ? "st": "nd");
            }else{
                printf("Enter %d%s number of series:",i,i==3 ? "rd":"th");
            }
        scanf("%d",&arr[i-1]);
    }
    for(j=2; j!=6; j++){
        if(arr[j]==arr[j-1]+arr[j-2]){
            c=c+1;
        }
        }
        printf("\n");
        if(c==4){
            printf("The series is Fibonacci series.");
        }else{
            printf("Not a Fibonacci Series");
        }
        printf("\n");
 return 0;
}


