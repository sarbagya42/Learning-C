#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num1,store,c=0,num2,b,k,s;
    char len[10];
    printf("Type the number");
    scanf("%d",&num1);
    s=num1;
    itoa(num1,len,10);
    b=strlen(len);
    k=b-1;
    while(num1!=0){
        num2=num1%10;
        store=num2*pow(10,k)+store;
        k=k-1;
        num1=num1/10;
        }
        if(s==store){
            printf("Palindrome");
        }else{
        printf("Not Palindrome");
        }
   return 0;
}
