#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
int a,c,e,m,x,i=0;
char length[100];
scanf("%d",&m);
for(x=0; x!=m; x++){
scanf("%d",&a);
itoa(a,length,10);
c=strlen(length);
int arr[c];
while(a!=0){
        e=a%10;
        arr[i]=e;
        i=i+1;
        a=a/10;
}
printf("\n%d",arr[0]+arr[c-1]);
i=0;
}
return 0;
}
