#include <stdio.h>
#include <stdlib.h>
int read(int n);
int sort(int *p, int n);
int display(int *q, int n);
int main()
{
    int n;
    n=5;
    read(n);
}

int read(int n)
{
    int *p,i,j;
    int arr[10];
p=&arr[0];
for(i=0; i<n; i++)
{
    printf("Type:");
    scanf("%d",(p+i));
}
sort(p,n);
}

int sort(int *q, int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(*(q+j)<*(q+i))
            {
              temp=*(q+i);
              *(q+i)=*(q+j);
              *(q+j)=temp;
            }
        }
    }
display(q,n);
}

int display(int *q, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\n %d",*(q+i));
    }
}
