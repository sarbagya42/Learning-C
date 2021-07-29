#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10]="PROGRAM";
    int i,j,k,c=7,d=2;
    for(i=0; i<7; i++)
    {
        for(k=0; k<c; k++)
        {
          printf(" ");
        }
        for(j=0; j<i+1; j++)
        {
         printf(" %c",str[j]);
        }
        printf("\n");
        c=c-1;
    }
    for(i=1;i<7;i++)
    {
          for(k=0; k<d; k++)
        {
          printf(" ");
        }
        for(j=i; j<7; j++)
        {
            printf(" %c",str[j]);
        }
        printf("\n");
        d=d+1;
    }


}
