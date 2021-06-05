#include<stdio.h>

int main() {
   int a, b, i, hcf,ratioboy, ratiogirl;
printf("Boys:");
scanf("%d",&a);
printf("Girls:");
scanf("%d",&b);
   for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }
ratioboy=a/hcf;
ratiogirl=b/hcf;
printf("The ratio Boys:girls is %d:%d",ratioboy,ratiogirl);
return 0;
}
