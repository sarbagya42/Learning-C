#include <stdio.h>
#include <string.h>
int main()
{
char any[20];
char temp;
int i,j,spaces[10],k=0;
printf("Type any String:");
gets(any);
for(i=0; i<strlen(any); i++)
{
 if(any[i]==' ')
 {
spaces[k]=i;
k++;
 }
 for(j=i+1; j<strlen(any); j++)
 {
  if(any[j]<any[i])
  {
      temp=any[i];
      any[i]=any[j];
      any[j]=temp;
}
}
}
puts(any);
for(i=0; i<k; i++)
{
    printf("%d",spaces[i]);
}
}
