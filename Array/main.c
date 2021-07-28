#include <stdio.h>
#include <stdlib.h>
int sor(int x[10]);
int read(int y[10]);
int display(int z[10]);
int main()
{
    int a[10];
    read(a);
return 0;
}

int read(int y[10])
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("Type numbers:");
        scanf("%d",&y[i]);
    }
    sor(y);
}

int sor(int x[10])
{
    int i,j,temp;
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
display(x);
}

int display(int z[10])
{
    int i;
    printf("Ascending Order is:");
    for(i=0; i<10; i++)
    {
        printf("\n%d",z[i]);
    }
}



