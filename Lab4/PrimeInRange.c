#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
int main()
{
int n1,n2,b,c=0,d,i,j;
printf("Type the range:");
scanf("%d %d",&n1,&n2);
printf("The Prime numbers between range %d and %d is",n1,n2);
for(i=n1; i!=n2; i++){
    for(j=1; j<=i; j++){
        if(i%j==0){
            c=c+1;
        }
        }
        if(c<=2 && i!=n1 && i!=n2){
        printf("\n\t%d",i);
        }
c=0;
       }
return 0;
}
