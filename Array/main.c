#include <stdio.h>
#include <stdlib.h>
//Matrix Multiplication by Sarbagya
int prime(int);
int main()
{
    int mat1[10][10],mat2[10][10],store[10][10];
    int o1, o2, p1, p2,sum=0;
    int i,j,k,l,m;
    printf("Type order of First Matrix (A):");
    scanf("%d %d",&o1,&o2);
    printf("Type order of Second Matrix (B):");
    scanf("%d %d",&p1,&p2);
    if(o2!=p1)
    {
        printf("\t\nThe Calculation is Invalid\n");
        return 0;
    }
    printf("\n");
    for(i=0; i<o1; i++)
    {
        for(j=0; j<o2; j++)
        {
            printf("Matrix A: Element(%d%d)",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");
      for(i=0; i<p1; i++)
    {
        for(j=0; j<p2; j++)
        {
            printf("Matrix B: Element(%d%d)",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    // MULTIPLICATION PART
        for(i=0; i<o1; i++){ 
        for(j=0; j<p2; j++)
    {
        for(k=0; k<o2; k++)
            {
                sum=sum+mat1[i][k]*mat2[k][j];
            }
            store[i][j]=sum;
            sum=0;
    }
    }
    printf("\n");
    printf("MATRIX A:\n");
     for(i=0; i<o1; i++)
    {
        for(j=0; j<o2; j++)
        {
        printf("\t%d",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\t\t\t\t\t\tOrder=%dX%d",o1,o2);
 printf("\nMATRIX B:\n");
     for(i=0; i<p1; i++)
    {
        for(j=0; j<p2; j++)
        {
        printf("\t%d",mat2[i][j]);
        }
        printf("\n");
    }
    printf("\t\t\t\t\t\tOrder=%dX%d",p1,p2);
     printf("\nMATRIX AXB:\n");
     for(i=0; i<o1; i++)
    {
        for(j=0; j<p2; j++)
        {
        printf("\t%d",store[i][j]);
        }
        printf("\n");
    }
    printf("\t\t\t\t\t\tOrder=%dX%d",o1,p2);
    printf("\n\n\t\t\t\t\tCode by Sarbagya Gho Shrestha\n");
return 0;
}
