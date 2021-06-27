#include <stdio.h>
#include <stdlib.h>
int greater(int,int);
int main()
{
    int num1,num2,store;
    printf("Type any two numbers");
    scanf("%d %d",&num1,&num2);
    store=greater(num1,num2);
    printf("The Greater Number is %d",store);
    return 0;
}

greater(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
