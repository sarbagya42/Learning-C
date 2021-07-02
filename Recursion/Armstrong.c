#include <stdio.h>
#include <stdlib.h>
//any digit armstrong
int armstrong(int,int);
int main()
{
    int a,b,len=0,temp;
    printf("Type a number:");
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
    {
        temp=temp/10;
        len=len+1;
    }
    b=armstrong(a,len);
    if(b==a)
    {
        printf("\n\tArmstrong\n");
    }
    else
    {
        printf("\n\tNot Armstrong\n");
    }
    return 0;
}

int armstrong(int x, int y)
{
    static int temp,k,store=0;
    if(x==0)
    {
        return store;
    }
    else
    {
        k=x%10;
        store=store+pow(k,y);
        armstrong(x/10,y);
    }
    }

