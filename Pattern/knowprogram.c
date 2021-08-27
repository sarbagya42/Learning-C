#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k=1,n,t,p,m=0,s,l;
    char arr[5000];
    char arr2[1000];
    printf("Type any string:");
    scanf("%s",arr);
    printf("Type number of rows:");
    scanf("%d",&l);
    t=l;
    p=l*(l+1)/2;
    while(m!=((p/strlen(arr))+1))
    {
      strcat(arr2,arr);
      m=m+1;
    }
    printf("\n");
    for(i=0; i<l; i++)
    {
        n=i*(i+1)/2;
      for(s=0; s<t; s++)
      {
          printf(" ");
      }
      for(j=n; j<n+k; j++)
      {
          printf(" %c",arr2[j]);
      }
       k=k+1;
       t=t-1;
       printf("\n");
    }
    return 0;
}
