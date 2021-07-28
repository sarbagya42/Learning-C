#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mat[10][10];
    int trans[10][10];
    int i,j,k,a,b;
    printf("Type the order of the matrix:");
    scanf("%d %d",&a,&b);
for(i=0; i<a; i++)
{
    for(j=0; j<b; j++)
    {
        printf("Type element (%d %d):",i+1, j+1);
        scanf("%d",&mat[i][j]);
    }
}
for(i=0; i<a; i++)
{
    for(j=0; j<b; j++)
    {
        trans[j][i]=mat[i][j];
    }
}
printf("\nOriginal Matrix is:\n");
for(i=0; i<b; i++)
{
    for(j=0; j<a; j++)
    {
       printf("\t%d",mat[i][j]);
    }
    printf("\n");
}
printf("\nTransposed Matrix is:\n");
for(i=0; i<b; i++)
{
    for(j=0; j<a; j++)
    {
       printf("\t%d",trans[i][j]);
    }
    printf("\n");
}
}



