#include <stdio.h>
#include <stdlib.h>
//WAP to read 10 numbers
//and reorder them in ... by Anku Jaiswal

//Anku Jaiswal4:27 PM
//WAP to read 10 numbers and reorder them in
//ascending order using function sor(),read(), display().
int display(int x[]);
int sort(int y[]);
int read(int z[]);
int i;
int main()
{
    int num[10];
    read(num);
return 0;
}

read(int x[])
{
    int i,b;
    for(i=1; i<=10; i++)
    {
        printf("Type:");
        scanf("%d",&b);
        x[i]=b;
    }
    sort(x);
}

sort(int y[])
{
    int i,store,j;
    for(i=0; i<10; i++)
{
    for(j=i+1; j<10; j++)
    {
        if(y[i]>y[j])
        {
         store=y[j];
         y[j]=y[i];
         y[i]=store;
        }
    }
}
display(y);
}
display(int z[])
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("\n%d",z[i]);
    }
}
