#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[10][10],small;
    int i,j;
    int *p;
p=&arr1[0][0];
for(i=0; i<3; i++)
{
  for(j=0; j<3; j++)
  {
     printf("Type:");
     scanf("%d",(p+3*i+j));
  }
}
small=*p;
for(i=0; i<3; i++)
{
  for(j=0; j<3; j++)
  {
    if(small>*(p+3*i+j))
    {
        small=*(p+3*i+j);
    }
  }
}
for(i=0; i<3; i++)
{
  for(j=0; j<3; j++)
  {
     if(i==j)
     {
         *(p+3*i+j)=small;
     }
  }
}
for(i=0; i<3; i++)
{
  for(j=0; j<3; j++)
  {
     printf("\t%d",*(p+3*i+j));
  }
printf("\n");
}
}

