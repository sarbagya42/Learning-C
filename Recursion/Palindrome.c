#include <stdio.h>
#include <stdlib.h>
int palindrome(int);
int main()
{
    int a,b;
    printf("Type a number:");
    scanf("%d",&a);
    b=palindrome(a);
    if(a==b)
    {
    printf("Palindrome");
    }
    else
    {
    printf("Not Palindrome");
    }

    return 0;
}

palindrome(int y)
{
    static int store=0,rem,temp;
    temp=y;
    if(y==0)
    {
      return store;
    }
    else
    {
        rem=y%10;
        store=store*10+rem;
        palindrome(y/10);
    }
}


