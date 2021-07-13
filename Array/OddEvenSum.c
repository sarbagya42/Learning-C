#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[50];
    int n,i,k,sumeven=0,sumodd=0;
printf("\nType the range:");
scanf("%d",&n);
for(k=0; k!=n; k++)
{
    printf("Numbers:",k+1);
    scanf("%d",&num[k]);
}
for(i=0; i<n; i++)
{
    if(num[i]%2==0)
    {
        sumeven=sumeven+num[i];
    }
    else
    {
        sumodd=sumodd+num[i];
    }
}
printf("\nThe Even Numbers' Sum is %d\n",sumeven);
printf("\nThe Odd Numbers' Sum is %d\n",sumodd);
return 0;
}
