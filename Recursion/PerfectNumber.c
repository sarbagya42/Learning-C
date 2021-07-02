#include <stdio.h>
#include <stdlib.h>
int perfect(int,int);
int main()
{
    int a,b,c=1;
    printf("Type a number:");
    scanf("%d",&a);
    b=perfect(a,c);
    if(b==a)
    {
        printf("\nPerfect Number.\n");
    }
    else
    {
        printf("\nNot a Perfect Number.\n");
    }
    return 0;
}

int perfect(int x,int y)
{
    static int sum=0;
    if(y==x)
    {
        return sum;
    }
    else
    {
    if (x%y==0)
    {
       sum=sum+y;
    }
    perfect(x,y+1);
}
}
