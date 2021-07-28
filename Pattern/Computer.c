#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10]="COMPUTER";
    int i,j;
    for(i=0; i<9; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
