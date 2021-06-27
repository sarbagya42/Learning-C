#include <stdio.h>
#include <stdlib.h>
int swap(int,int);
int main()
{
    int a,b;
    printf("Type any two numbers:");
    scanf("%d %d",&a,&b);
    printf("\nValue before swap is %d %d\n",a,b);
    swap(a,b);
    printf("\nValue after swap is %d %d\n",a,b);
    return 0;
}

int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swap is %d %d\n",x,y);
}
