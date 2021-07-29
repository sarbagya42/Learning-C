#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10]="KNOW";
    int i,j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<i+1; j++)
        {
        printf("%c",str[j]);
        }
        printf("\n");
    }
for(i=1; i<4; i++)
{
    for(j=i; j<4; j++)
    {
        printf("%c",str[j]);
    }
    printf("\n");
}

}
