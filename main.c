#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr1[100],arr2[100],a,b,c=0,i=0,j=0,d=0,m=0,fact=1,l=1,o,s,sum=0,naya[100],x,k,v=0,loop;
   int fina=0;
   printf("Type any number:");
   scanf("%d",&a);
   for(b=1; b!=a; b++){
    if(a%b==0){
        arr1[c]=b;
        c=c+1;
    }
   }
 for(i=0; i!=c; i++){
        for(j=1; j!=arr1[i]; j++){
            if(arr1[i]%j==0){
                m=m+1;
            }
            }
            if(m==1){
                arr2[d]=arr1[i];
                d=d+1;
            }
        m=0;
 }
 for(x=0; x!=d; x++){
        for (s = 1; s<=arr2[x]; ++s) {
            fact *= s;
        }
c=c+1;
naya[x]=fact;
if(c!=x){
    fact=1;
}
 }
 for(loop=0; loop!=(d); loop++){
    fina=naya[loop]+fina;
 }
 printf("\nThe sum of Factorials of Prime Factors of the number is %d\n",fina);
return 0;
}
