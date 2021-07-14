#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10][10];
    int i,j,m,n;
    printf("Type the order of matrix:");
    scanf("%d %d",&i,&j);
    for(m=0; m<i; m++)
    {
        for(n=0; n<j; n++)
        {
            printf("Type element a(%d%d)",m,n);
            scanf("%d",&arr[m][n]);
        }
    }
     for(m=0; m<i; m++) {
      for(n=0;n<j;n++) {
         printf("\t%d ", arr[m][n]);
         if(n==j-1){
            printf("\n");
         }
      }
   }
    return 0;
}
