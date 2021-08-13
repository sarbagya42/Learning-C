#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,big;
   int arr[10];
   for(i=0; i<10; i++)
   {
       printf("Type any number:");
       scanf("%d",&arr[i]);
   }
   big=arr[0];
   for(i=0; i<10; i++)
   {
       if(arr[i]>big)
       {
           big=arr[i];
       }
   }
   printf("%d",big);
}
