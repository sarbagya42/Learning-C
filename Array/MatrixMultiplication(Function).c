#include <stdio.h>
#include <stdlib.h>
int read(int x[10][10], int y[10][10],int, int,int);
int multiply(int p[10][10], int q[10][10],int, int, int, int);
int display(int h[10][10],int i[10][10],int f[10][10],int, int, int, int);
int i,j;
int main()
{
    int num1[10][10],num2[10][10],a,b,m,n,c=0,j,k;
    printf("Type the order of first matrix:");
    scanf("%d %d",&m,&n);
    printf("Type the order of second matrix:");
    scanf("%d %d",&j,&k);
    if(n!=j)
    {
        printf("Invalid Order for Multiplication.");
        return 0;
    }
    read(num1,num2,m,n,c);
    c=c+1;
    read(num1,num2,j,k,c);
return 0;
}

int read(int num1[10][10],int num2[10][10],int m,int n,int c)
{
    int i,j,o,s;
    if(c==0){
    o=m;
    s=n;
    printf("\n Matrix A:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Type Element %d%d:",i+1,j+1);
            scanf("%d",&num1[i][j]);
        }
    }
}else
{
    printf("\n Matrix B:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Type Element %d%d:",i+1,j+1);
            scanf("%d",&num2[i][j]);
        }
    }
}
if(c==1)
{
    multiply(num1,num2,o,s,m,n);
}
}
int multiply(int num1[10][10],int num2[10][10],int o, int s, int m, int n)
{
   int i,j,k,sum=0,mul[10][10];
   for(i=0; i<o; i++)
   {
       for(j=0; j<n; j++)
       {
           for(k=0; k<s; k++)
           {
               sum=sum+num1[i][k]*num2[k][j];
           }
        mul[i][j]=sum;
        sum=0;
       }
   }
   display(num1,num2,mul,o,s,m,n);
}
int display(int num1[10][10],int num2[10][10],int mul[10][10],int o, int s, int m, int n)
{
    int i,j;
    printf("Matrix A:\n");
    for(i=0; i<o; i++)
    {
        for(j=0; j<s; j++)
        {
            printf("\t%d",num1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d",num2[i][j]);
        }
        printf("\n");
    }
       printf("Matrix AxB:\n");
    for(i=0; i<o; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d",mul[i][j]);
        }
        printf("\n");
    }
}
