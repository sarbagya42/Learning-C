#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[50];
    int n,i,j,k,store,f,b;
printf("\nType the range of Marks:");
scanf("%d",&n);
b=n;
for(k=0; k!=n; k++)
{
    printf("\nMarks of Student %d:",k+1);
    scanf("%d",&num[k]);
}
for(i=0; i<n; i++)
{
    for(j=i+1; j<n; j++)
    {
        if(num[i]<num[j])
        {
         store=num[j];
         num[j]=num[i];
         num[i]=store;
        }
    }

}
printf("The Top 5 Marks are:");
for(f=0; f<5; f++)
{
    printf("\n\t%d",num[f]);
}
return 0;
}
