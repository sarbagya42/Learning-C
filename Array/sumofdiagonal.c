#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i,j, mat[10][10],m,n,sum=0;
   printf("Type the order of Square matrix:");
   scanf("%d %d",&m,&n);
   for(i=0; i<m; i++)
   {
       for(j=0; j<m; j++)
       {
           printf("Type Element %d%d:",i+1,j+1);
           scanf("%d",&mat[i][j]);
       }
   }
   for(i=0; i<m; i++ )
   {
       for(j=0; j<m; j++)
       {
           if(i==j)
           {
               sum=sum+mat[i][j];
           }
       }
   }
   printf("The Matrix is:\n");
   for(i=0; i<m; i++ )
   {
       for(j=0; j<m; j++)
       {
           printf("\t%d",mat[i][j]);
       } 
       printf("\n");
   }   
   printf("Sum of Diagonal Elements is: %d",sum);
   return 0;
}
