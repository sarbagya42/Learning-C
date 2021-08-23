//Write a complete program that adds the corresponding elements
//of two matrices if the elements are positive, otherwise multiply the corresponding elements 
//using the concept of passing array to the function and pointer. [5] [067]
#include <stdio.h>
#include <stdlib.h>
int addmulti(int *p, int *q, int *r, int);
int main()
{
    int i,j,n,arr1[10][10],arr2[10][10],arr3[10][10];
    int *p, *q, *r;
printf("Type order for square matrix:");
scanf("%d",&n);
p=&arr1[0][0];
q=&arr2[0][0];
r=&arr3[0][0];
for(i=0; i<n; i++)
{
    for(j=0; j<n; j++)
    {
        printf("Type Mat1:(%d %d)",i+1,j+1);
        scanf("%d",(p+n*i+j));
    }
}
printf("\n");
for(i=0; i<n; i++)
{
    for(j=0; j<n; j++)
    {
        printf("Type Mat2:(%d %d)",i+1,j+1);
        scanf("%d",(q+n*i+j));
    }
}
addmulti(p,q,r,n);
for(i=0; i<n; i++)
{
    for(j=0; j<n; j++)
    {
        printf("\t%d",*(r+n*i+j));
    }
    printf("\n");
}
}

int addmulti(int *p,int *q, int *r, int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(*(p+n*i+j)>0 && *(q+n*i+j)>0)
            {
                *(r+n*i+j)=*(p+n*i+j)+*(q+n*i+j);
            }
        else
        {
             *(r+n*i+j)=*(p+n*i+j) * *(q+n*i+j);
        }
        }
    }
}




