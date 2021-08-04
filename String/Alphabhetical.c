#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,temp[20];
    char name[5][20];
    for(i=0; i<5; i++)
    {
    printf("Type name %d:\n",i+1);
    scanf("%s",name[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
               strcpy(temp,name[j]);
               strcpy(name[j],name[i]);
               strcpy(name[i],temp);
            }

        }
    }
    printf("The name is Ascending order is:");
    for(i=0; i<5; i++)
    {
        printf("\n%s",name[i]);
    }
   return 0;
}
