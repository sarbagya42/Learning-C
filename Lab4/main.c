#include <stdio.h>
#include <stdlib.h>
//Prime or Not using Break
int main()
{
 int a,b,i,check;
 printf("Type a number:");
 scanf("%d",&a);
 for(i=2; i<=(a-1); i++){
    if(a%i==0){
        check=1;
        break;
    }
 }
 if(check==1){
    printf("Not Prime.");
 }else{
 printf("Prime.");
 }
return 0;
}
