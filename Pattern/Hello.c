#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k=0;
    char st[5]="HELLO";
      for(i=0; i!=6; i++)
      {
          for(j=0; j!=i; j++)
          {
              printf("%c",st[j]);
          }
          printf("\n");
      }
      for(i=3; i!=0; i--)
      {
          for(j=0; j!=i; j++)
          {
              printf("%c",st[j]);
          }
          printf("\n");
      }

   return 0;
}
