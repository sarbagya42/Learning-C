#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Type Year:");
    scanf("%d",&year);
    if(year%100!=0 && year%4==0){
     printf("Leap year");
    }else if(year%100==0 && year%400==0){
    printf("Leap Year");
    }else{
    printf("Not Leap Year");
    }
    return 0;
}
