#include <stdio.h>
#include <stdlib.h>

int main()
{
   char arr[50];
   char *p;
   int lenn=0,k=0,i;
   p=&arr[0];

   printf("Type any line of text:");
   gets(p);

   for(i=0; *(p+i)!='\0'; i++)
   {
    lenn++;
   }
for(i=0; i<lenn; i++)
{
    if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u')
    {
        k=k+1;
    }
     if(*(p+i)=='A' || *(p+i)=='E' || *(p+i)=='I' || *(p+i)=='O' || *(p+i)=='U')
    {
        k=k+1;
    }
}
printf("Total Vowel is %d",k);
}

