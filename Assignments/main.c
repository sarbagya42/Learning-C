
#include <stdio.h>
#include <stdlib.h>
//SIMPLE INTEREST
int main()
{
float P,T,R,SI;
printf("Type Principle:");
scanf("%f",&P);
printf("Type Time:");
scanf("%f",&T);
printf("Type Rate of Interest:");
scanf("%f",&R);
SI=(P*T*R)/100;
printf("The Average is %.3f",SI);
return 0;
}

