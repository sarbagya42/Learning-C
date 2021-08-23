#include <stdio.h>
#include <stdlib.h>
int swap(int *x,int *y);
int main()
{
  int a,b;
printf("Type two Numbers:");
scanf("%d %d",&a,&b);
printf("Before Swapping %d %d",a,b);
swap(&a,&b);
printf("\nAfter Swapping %d %d",a,b);
return 0;
}

int swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

