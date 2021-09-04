#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[20]="pulchwok";
    int i,j,k=1,m,n,c=6;
    int l;
for(i=7; i>=0; i--)
{
for(l=i-1; l>=0; l--)
{
    printf(" ");
}
m=i;
for(j=0; j<=k; j++)
{
    printf("%c",a[m]);
    m=m+1;
}
k=k+1;
printf("\n");
c=c-1;
}
}
