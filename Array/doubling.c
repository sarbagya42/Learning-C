#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define m 2
#define n 3
int read(int x[10][10], int w[10][10]);
int process(int y[10][10]);
int display(int z[10][10], int k[10][10]);
int main()
{
    int mat[10][10], doub[10][10];
    read(mat,doub);
    return 0;
}

int read(int mat[10][10], int doub[10][10])
{
    int i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Type element %d%d:",i+1,j+1);
            scanf("%d",&mat[i][j]);
            doub[i][j]=2*mat[i][j];

        }
    }

display(doub,mat);
}
int display(int doub[10][10], int mat[10][10])
{
    int i,j;
    printf("\n Original Matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n Doubled Matrix is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d",doub[i][j]);
        }
        printf("\n");
    }
}
