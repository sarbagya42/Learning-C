# include <stdio.h>
#include<math.h>
int reverse(int);
void main()
{
    int a;
    printf("Type a number:");
    scanf("%d",&a);
    printf("\nThe reverse is %d\n",reverse(a));
}

int reverse(int x)
{
    int len=-1,temp,k,store=0,b;
    temp=x;
    while(temp!=0)
    {
        len=len+1;
        temp=temp/10;
    }
    while(x!=0)
    {
        b=x%10;
        store=b*pow(10,len)+store;
        x=x/10;
        len=len-1;
    }
    return store;
}
