#include <stdio.h>
#include <stdlib.h>
int sort(int *p);
int main()
{
    int i,j,arr[10][10],get;
    int *p;
p=&arr[0][0];
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        printf("Type:");
        scanf("%d",(p+3*i+j));
    }
}
get=sort(p);
printf("\n Largest is %d",get);
}

int sort(int *p)
{
int large,i,j;
large=*p;
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        if(*(p+3*i+j)>large)
        {
            large=*(p+3*i+j);
        }
    }
}
return large;
}



