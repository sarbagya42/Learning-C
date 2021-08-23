#include <stdio.h>
#include <stdlib.h>
int second(int *p, int n);
int main()
{
int *p,n;
int i,j,secondlargest;
int arr[10];
printf("Type n:");
scanf("%d",&n);
p=&arr[0];
printf("Type Numbers:");
for(i=0; i<n; i++)
{
    printf("Type:");
    scanf("%d",(p+i));
}
secondlargest=second(p,n);
printf("\n\n Second Largest is %d",secondlargest);
}

int second(int *p, int n)
{
    int i,j,temp;
for(i=0; i<n; i++)
{
    for(j=i+1; j<n; j++)
    {
        if(*(p+i)<*(p+j))
        {
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
        }
    }
}
for(i=0; i<n; i++)
{
    printf("\n%d",*(p+i));
}
return *(p+1);
}

