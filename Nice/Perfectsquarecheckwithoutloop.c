#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float num1;
   float num2;
   float b,k;
   int d;
   printf("Type any number:");
   scanf("%f",&num1);
   b=pow(num1,0.5);
   k=num1/b;
   d=(int)k;
   printf("\n");
   if(k==d){
        printf("Yup a Perfect Square");
   }else{
       printf("Nope not a Perfect Square");
   }
   printf("\n");
    return 0;
}
