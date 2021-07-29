#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,j,k,m,c=5;
 for(i=1; i!=7; i++){
    for(k=c; k!=0; k--){
        printf(" ");
    }
    for(j=1; j!=i; j++){
        printf(" *");
    }
    c=c-1;
    printf("\n\t");

 }
 return 0;
}
