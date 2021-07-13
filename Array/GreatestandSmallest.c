#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[50];
    int n,i,j,k,store,f,b;
printf("Type the range:");
scanf("%d",&n);
b=n;
for(k=0; k!=n; k++)
{
    printf("Number:");
    scanf("%d",&num[k]);
}
for(i=0; i<n; i++)
{
    for(j=i+1; j<n; j++)
    {
        if(num[i]>num[j])
        {
         store=num[j];
         num[j]=num[i];
         num[i]=store;
        }
    }

}
printf("\nThe Greatest of all the Numbers is %d\n",num[n-1]);
printf("\nThe Smallest of all the Numbers is %d\n",num[0]);
return 0;
}
