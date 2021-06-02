
#include <stdio.h>
#include <stdlib.h>
// SECONDS INTO HOUR, MINUTES AND SECONDS
int main()
{
float length, Perimeter, Area;
printf("Type Length of Square:");
scanf("%f",&length);
Perimeter=(4*length);
Area=(length*length);
printf("The Area is: %.3f Square Units and Perimeter is %.3f Units.",Area,Perimeter);
return 0;
}
