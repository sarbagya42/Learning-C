#include<stdio.h>
int digitsum(int);
int main()
{
    int num, sum1,m=0,store,k,d=0;
    printf("Enter any number:\n");
    scanf("%d", &num);
    sum1=digitsum(num);
    printf("\nThe single digit sum is %d\n",sum1);
}

int digitsum(int num)
{
    if(num<=9)
    return num;
    int sum=0;
    while(num>0)
    {
        sum+=num%10;
        num=num/10;
    }
    return digitsum(sum);
}

