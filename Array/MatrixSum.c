#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10][10];
    int arr1[10][10];
    int sum[10][10];
    int i,j,m,n;
    printf("Type the order matrices for sum:");
    scanf("%d %d",&i,&j);
    for(m=0; m<i; m++)
    {
        for(n=0; n<j; n++)
        {
            printf("Type element A(%d%d)",m,n);
            scanf("%d",&arr[m][n]);
        }
    }
     for(m=0; m<i; m++)
    {
        for(n=0; n<j; n++)
        {
            printf("Type element B(%d%d)",m,n);
            scanf("%d",&arr1[m][n]);
        }
    }
     for(m=0; m<i; m++)
    {
        for(n=0; n<j; n++)
        {
            sum[m][n]=arr[m][n]+arr1[m][n];
        }
        }
       for(m=0; m<i; m++) {
      for(n=0;n<j;n++) {
         printf("\t%d",sum[m][n]);
         if(n==j-1){
            printf("\n");
         }
      }
    }
    return 0;
}
