#include <stdio.h>
#include <stdlib.h>

int main(){
int a[10][10],b[10][10],sum[10][10];
int i,j,k,l,m,n;
printf("Type Order:");
scanf("%d %d",&m,&n);
for(i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
        printf("Type:");
        scanf("%d",*(a+i)+j);
    }
}
    printf("\n");
for(i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
        printf("Type:");
        scanf("%d",(*(b+i)+j));
    }
}
for(i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
        *(*(sum+i)+j)=*(*(a+i)+j) + *(*(b+i)+j);
    }
}
for(i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
        printf("\t%d",*(*(sum+i)+j));
    }
    printf("\n");
}
}




