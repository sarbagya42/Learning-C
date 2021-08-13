//BY SARBAGYA GHO SHRESTHA
#include <stdio.h>
#include <stdlib.h>

int main()
{
     char arr[100]="PROGRAMPROGRAMPROGRAM";
    int i,j,k=1,s,n,t=5;
    for(i=0; i<6; i++)
    {
        n=i*(i+1)/2;
      for(s=0; s<t; s++)
      {
          printf(" ");
      }
      for(j=n; j<n+k; j++)
      {
          printf(" %c",arr[j]);
      }
       k=k+1;
       t=t-1;
       printf("\n");
    }

    return 0;
}
